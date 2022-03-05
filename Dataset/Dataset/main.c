//
//  main.c
//  Dataset
//
//  Created by Cesar Angeles on 22/02/2022.
//

#include <stdio.h>
#include "Series.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Series *mySeries = NULL;
    mySeries = newSeries(10);
    
    for(uint8_t index = 0; index<11; index++){
        if(setElement(mySeries, index, index) == ERROR_OK){
            printf("Element value %f\n", getElement(mySeries, index));
        }else
            printf("Setting Element Error\n");
    }
//free
}
