#ifndef FILES_H
#define FILES_H

#include <stdio.h>
#include <stdlib.h>
#include <>

typedef enum{
    DEFAULT_ERROR,
    SUCCESS,
    FILE_NOT_FOUND
}FILE_ERROR;

FILE *newFile(char* path, char* mode);



FILE_ERROR readLine(FILE *file, char* file_buffer, ...);



FILE *closeFile(FILE* file);



#endif
