//
//  Dataset.h
//  Dataset
//
//  Created by Cesar Angeles on 22/02/2022.
//

#ifndef Series_h
#define Series_h

#include <stdio.h>

typedef enum{
    DEFAULT_ERROR,
    ERROR_OK,
    MEM_ERROR,
    SYNT_ERROR,
}TYPE_ERROR;

typedef struct data_{
    uint8_t n_elements;
    float* data;
}Series;




Series* newSeries(uint8_t n_elements);

float getElement(Series *data, uint8_t index);

TYPE_ERROR setElement(Series *data, uint8_t index, float value);



#endif /* Series.h */
