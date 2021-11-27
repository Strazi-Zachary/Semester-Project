#ifndef _PROCESSOR
#define _PROCESSOR

#include <iostream>
#include <cmath>
#include <cstdlib>

class Processor{
	
public:
		
	Processor() = default;		
	
	virtual void monoBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual void monoBuffer(signed short* buffer, int bufferSize) = 0;
	virtual void stereoBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual void stereoBuffer(signed short* buffer, int bufferSize) = 0;


};

#endif
