#ifndef _GAINADJUST
#define _GAINADJUST

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "processor.h"
#include "adjustable.h"

//Gain Class

class Gain : public Processor{
	float adjust;	

public:
	/*
	* Default Constructor
	*/	
	gain() = default;

	/*
	*Constructor Gain adjust @param adjust
	*/
	gainAd(float newAdjust);
	
	/*
	* Mono and stereo override @ param buffer, buffersize
	*/
	void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer, int bufferSize) override;
	
};

#endif
