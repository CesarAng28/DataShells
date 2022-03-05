//
//  DataShell.c
//  Dataset
//
//  Created by Cesar Angeles on 23/02/2022.
//
#include <stdio.h>
#include <stdlib.h>

#include "Series.h"
#include "DataShell.h"


DataShell *newDataShell(int n_columns, int n_column_elements){
    DataShell* myDataShell = NULL;
    myDataShell = malloc(sizeof(DataShell));
    myDataShell->columns = malloc(sizeof(Series*) * n_columns);
    for(int index=0; index<n_columns; index++){
        myDataShell->columns[index] = newSeries(n_column_elements);
    }
    return myDataShell;
}
