#ifndef _NORMALIZATION
#define _NORMALIZATION

#include <iostream>
#include <cmath>
#include <stdlib>
#include "processor.h"
#include "normalizable.h"

class Normalization : public Processor{
	
public:
		
	Normalization() = default;	

	void normalize() override;
	void monoBuffer(unsigned char* buffer, int bufferSize) override;
	void monoBuffer(signed short* buffer, int bufferSize) override;
	void stereoBuffer(unsigned char* buffer, int bufferSize) override;
	void stereoBuffer(signed short* buffer, int bufferSize) override;	
		
	
};

#endif

