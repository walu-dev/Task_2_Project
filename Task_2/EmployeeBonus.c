#include <stdio.h>
#include "EmployeeBonus.h"

void CalculateBonus()
{
    double const percentage = 0.2; //20% bonus
    double salary = 50000;
    double Bonus = percentage * salary;
    printf("The employee bonus is: %.2lf\n", Bonus);
}
