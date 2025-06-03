#include <stdio.h>
#include "simpleIntrest.h"

void CalculateSimpleIntrest(){
    double principle = 20000;
    double time  = 5;
    double rate = 0.1; //10% rate
    double SimpleIntrest = principle * time * rate;
    printf("The SimpleIntrest is: %.2lf", SimpleIntrest);
}
