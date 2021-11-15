#ifndef _PROCESSOR
#define _PROCESSOR

#include <iostream>
#include <cmath>
#include <stdlib>
#include "echoable.h"
#include "adjustable.h"
#include "normalizable.h"

class Processor : public Normalizable : public Echoable : public Adjustable{
	
public:
		
	Processor() = default;		
	
};

#endif
