//
//  Series.c
//  Series
//
//  Created by Cesar Angeles on 22/02/2022.
//

#include <stdio.h>
#include <stdlib.h>

#include "Series.h"



Series *newSeries(uint8_t n_elements){
    Series* mySeries = NULL;
    mySeries = malloc(sizeof(struct data_));
    mySeries->data = malloc(sizeof(float)*n_elements);
    mySeries->n_elements = n_elements;
    return mySeries;
}

static TYPE_ERROR validation(Series *data, uint8_t index) {
    if(data == NULL)
        return MEM_ERROR;
    if(data->n_elements< index)
        return MEM_ERROR;
    else
        return ERROR_OK;
}


float getElement(Series *data, uint8_t index){
    if(validation(data, index)==ERROR_OK)
        return data->data[index];
    else return DEFAULT_ERROR;
}


TYPE_ERROR setElement(Series *data, uint8_t index, float value){
    if(validation(data, index)==ERROR_OK){
         data->data[index] = value;
        return ERROR_OK;
    }
    else return DEFAULT_ERROR;
}
