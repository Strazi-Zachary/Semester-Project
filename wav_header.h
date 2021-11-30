#ifndef WAVE_HEADER_H
#define WAVE_HEADER_H

	/**
	 * Struct containing wav file's technical data variables
	 */
typedef struct wav_header {
    // RIFF Header

    /**
	 * Riff Header variable from wav files, Contains "RIFF"
	 */
    char riff_header[4]; 
	/**
	 * Size of the wav portion of the file, which follows the first 8 bytes
	 */
    int wav_size;
	/**
	 * Contains "WAVE" from wav files
	 */
    char wave_header[4]; 

    /**
	 *Format Header - Contains "fmt " (includes trailing space)
	 */
    char fmt_header[4]; 
	/**
	 * Format chunk size for files, Should be 16 for PCM
	 */
    int fmt_chunk_size; 
	/**
	 * Audio Format data, Should be 1 for PCM. 3 for IEEE Float
	 */
    short audio_format; 
	/**
	 * Number of channels in wav files, mono or stereo
	 */
    short num_channels;
	/**
	 * Sample Rate in wav files
	 */
    int sample_rate;
	/**
	 * Number of bytes per second. sample_rate * num_channels * Bytes Per Sample
	 */
    int byte_rate;  
	/**
	 * num_channels * Bytes Per Sample
	 */
    short sample_alignment;  
	/**
	 *  Number of bits per sample from wav files
	 */
    short bit_depth;

    // Data

	/**
	 * Contains "data"
	 */
    char data_header[4]; 
	/**
	 * Number of bytes in data. Number of samples * num_channels * sample byte size
	 */
    int data_bytes;
    // char bytes[]; // Remainder of wave file is bytes
} wav_header;

#endif