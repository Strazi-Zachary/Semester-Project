#ifndef WAVEHEADER_H
#define WAVE_HEADER_H


typedef struct wav_header{

// Riff
char chunk_id[4]; //Contains Riff
int chunk_size;   //Size of file - 8 bytes
char format[4];	  //Contains Wave


//FMT
char subChunk_id1[4]; //Contains fmt_
int subChunk_size1;   //16 for Pcm
short audioFormat;    //1 for Pcm
short numChannels;    //Mono = 1, Stereo = 2
int sampleRate;	      //8000, 44100
int byteRate;         // = sampleRate * numChannels * bytesPerSample/8
short blockAlign;     // = numChannels * bytesPerSample/8
short bitsPerSample;  // 8, 16

//Data
char subChunk_id2[4]; //Contains Data
int subChunk_size2;   // = numSamples * numChannels * bitsPerSample/8





}wav_header;
