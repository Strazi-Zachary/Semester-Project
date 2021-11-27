#include <iostream>
#include <cmath>
#include <stdlib>
#include "normalization.h"


const unsigned char mid_8 = 128;
const signed short mid_16 = 1; 


//Function to implement normalization for 8 bit mono
void Normalization::monoBuffer(unsigned char* buffer, int bufferSize){
	int max = buffer[0];

	for(int i = 1; i < bufferSize; i++){
		if(buffer[i] > max){
			max = buffer[i];
		}		
	
	float scale = mid_8/max;
	
	for(int i = 0; i < bufferSize; i++){
			buffer[i] = buffer[i] *scale;

		}

}

//Function to implement normalization for 16 bit mono
void Normalization::monoBuffer(signed short* buffer, int bufferSize){
	int max = buffer[0];

	for(int i = 1; i < bufferSize; i++){
		if(buffer[i] > max){
			max = buffer[i];
		}		
	
	float scale = mid_16/max;
	
	for(int i = 0; i < bufferSize; i++){
			buffer[i] = buffer[i] *scale;

		}


}

// Function to normalize 8 bit stereo accounting for two channels.
void Normalization::stereoBuffer(unsigned char* buffer, int bufferSize){
	int maxI = buffer[0];
	int maxJ = buffer[0];

	//Channel 1 8 bit
	for(int i = 0; i < bufferSize; i+=2){
		if(buffer[i] > maxI){
			maxI = buffer[i];
		}		
	
	float scaleI = mid_8/maxI;
	
	for(int i = 0; i < bufferSize; i+=2){
			buffer[i] = buffer[i] *scale;
	}	
	
	//Channel 2 8 bit
	for(int j = 1; i < bufferSize; j+=2){
		if(buffer[j] > maxJ){
			maxJ = buffer[j];
		}		
	
	float scaleJ = mid_8/maxJ;
	
	for(int j = 1; j < bufferSize; j+=2){
			buffer[j] = buffer[j] *scale;
}

// Function to normalize 16 bit stereo accounting for two channels.
void Normalization::stereoBuffer(signed short* buffer, int bufferSize){
	int maxI = buffer[0];
	int maxJ = buffer[0];

	//Channel 1 16 bit
	for(int i = 0; i < bufferSize; i+=2){
		if(buffer[i] > maxI){
			maxI = buffer[i];
		}
	return maxI;		
	
	float scaleI = mid_16/maxI;
	
	for(int i = 0; i < bufferSize; i+=2){
			buffer[i] = buffer[i] *scale;
	}	
	
	//Channel 2 16 bit
	for(int j = 1; i < bufferSize; j+=2){
		if(buffer[j] > maxJ){
			maxJ = buffer[j];
		}
	return maxJ;		
	
	float scaleJ = mid_16/maxJ;
	
	for(int j = 1; j < bufferSize; j+=2){
			buffer[j] = buffer[j] *scale;
	}
}
