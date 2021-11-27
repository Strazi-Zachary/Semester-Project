#ifndef _GAINADJUST
#define _GAINADJUST

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "processor.h"
#include "adjustable.h"

class Gain : public Processor{
	float adjust;	

public:
		
	gain() = default;

	gainAd(float newAdjust);
	
	
	void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer, int bufferSize) override;
	
};

#endif
