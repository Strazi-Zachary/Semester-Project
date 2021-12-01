#ifndef _NORMALIZATION
#define _NORMALIZATION

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "processor.h"
#include "normalizable.h"

//Class Normalization
class Normalization : public Processor{
	
public:
	
	/*
	* Default Constructor
	*/	
	Normalization() = default;	
	
	/*
	* Mono and stereo override @ param buffer, buffersize
	*/
	void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer,int bufferSize)override;	
		
	
};

#endif

