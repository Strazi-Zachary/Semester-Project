#ifndef META_CHUNKS_H
#define META_CHUNKS_H
#include <vector>

    /**
     * Struct to contain metadata info management
     */  

typedef struct meta_header {
    //Not needed for actual data. Just for finding the metadata
    char list[4]; //LIST
    int chunkSize; //Chunk Size
    char info[4]; //INFO

  
} meta_header;

#endif