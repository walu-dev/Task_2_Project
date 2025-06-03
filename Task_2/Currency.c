#include <stdio.h>
#include "Currency.h"

void ConvertCurrency(){
    const double Rate = 3500;// Amount in ugx
    double Amount = 700;
    double exchange = Amount*Rate; // Amount in usd
    printf("The final amount after exchange is: %.2lf UGX\n ", exchange);
}
