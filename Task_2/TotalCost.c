#include <stdio.h>
#include "TotalCost.h"

double const Tax_Rate = 0.2;

void CalculateTotalCost(){
    double price = 20000;
    double TotalCost = price + (Tax_Rate * price);
    printf("The TotalCost is: %.2lf\n", TotalCost);
}
