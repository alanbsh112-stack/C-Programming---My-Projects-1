#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
        float price = 10.00;
        bool isStudent = true;

        if (isStudent)
        {
                printf("You get a student discount of 10%\n");
                price *= 0.9;
        }

        printf("The price of a ticket is : $%.2f\n", price);
        return 0;
}