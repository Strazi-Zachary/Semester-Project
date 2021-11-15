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
		
	
};

#endif

