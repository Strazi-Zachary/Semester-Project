#ifndef _PROCESSOR
#define _PROCESSOR

#include <iostream>
#include <cmath>
#include <cstdlib>

//Abstract Class Processor
class Processor{
	
public:
		
	Processor() = default;		
	
	/*
	* Mono and stereo virtual functions @ param buffer, buffersize
	*/
	virtual void monoBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual void monoBuffer(signed short* buffer, int bufferSize) = 0;
	virtual void stereoBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual void stereoBuffer(signed short* buffer, int bufferSize) = 0;


};

#endif
