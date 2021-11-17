#ifndef _GAINADJUST
#define _GAINADJUST

#include <iostream>
#include <cmath>
#include <stdlib>
#include "processor.h"
#include "adjustable.h"

class Gain : public Processor{
	
public:
		
	Gain() = default;	

	void adjust() override;	
	void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer, int bufferSize) override;
	
};

#endif
