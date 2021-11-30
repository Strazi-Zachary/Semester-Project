#include "fileIO.h"
#include "wave_header.h"
#include "meta_chunks.h"
#include "wav_file.h"
#include "printer.h"

FileIO::FileIO() {};

void FileIO::writeCsvFile(std::string file, int bufferSize){
	
	Wav w;
	Print p1;
	w.readFile(p1.getFile());
	
	std::ofstream dataFile(file);
	
	dataFile << "Filename, Format Header, Num Channels, Sample Rate, Bit Size";

	for (std::string x : w.getSubChunk()){
	    dataFile << ", " << x;
	}
	dataFile << "\n";

	dataFile << p1.getFile() << ", " << w.getFmtHeader() << ", " << w.getNumChannels() << ", " << w.getSampleRate() << "," << w.getBitDepth();

	for (std::string s : w.getActualData()){
	   dataFile << ", " << s;
	}

	dataFile.close();
}