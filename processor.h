#ifndef _PROCESSOR
#define _PROCESSOR

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "echoable.h"
#include "adjustable.h"
#include "normalizable.h"
#include "wav_file.h"

class Processor : public Normalizable : public Echoable : public Adjustable{
	
public:
		
	Processor() = default;		
	
	virtual void monoBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual void monoBuffer(signed short* buffer, int bufferSize) = 0;
	virtual void stereoBuffer(unsigned char* buffer, int bufferSize) = 0;
	virtual void stereoBuffer(signed short* buffer, int bufferSize) = 0;


};

#endif
