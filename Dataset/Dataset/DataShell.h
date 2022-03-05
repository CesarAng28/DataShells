//
//  DataShell.h
//  Dataset
//
//  Created by Cesar Angeles on 23/02/2022.
//

#ifndef DataShell_h
#define DataShell_h

#include <stdio.h>
#include "Series.h"

typedef struct _datashell{
    int n_series;
    Series** columns;
}DataShell;

DataShell *newDataShell(int n_columns, int n_column_elements);



#endif /* DataShell_h */
