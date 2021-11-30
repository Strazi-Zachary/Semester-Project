#ifndef FILEIO_H
#define FILEIO_H

#include <iostream>
#include <fstream>
#include <string>

/**
 * This is the FileIO class.
 */

class FileIO{
public:
	/**
	 * FileIO constructor
	 */
	FileIO();

	/**
	 * Writes the CSV file containing all the tech. info and metadata of the wav file
	 * @param file - name of file, in a string
	 * @param bufferSize - size of wav file buffer array, in integers
	 */
	void writeCsvFile(std::string file, int bufferSize);
};

#endif
