#include <stdio.h>
#include "DiscountedPrice.h"

double Price;
const double percentage = 0.1;

void CalculateDiscountPrice(){
    Price = 20000;
    double DiscountPrice = percentage * Price;
    printf("The discount price is: %.2lf\n", DiscountPrice);

}
