#include <stdio.h>
#include <stdlib.h>
#include "simpleIntrest.h"
#include "DiscountedPrice.h"
#include "Currency.h"
#include "EmployeeBonus.h"
#include "TotalCost.h"


int main()
{
    CalculateSimpleIntrest();
    CalculateDiscountPrice();
    ConvertCurrency();
    CalculateBonus();
    CalculateTotalCost();

    return 0;
}
