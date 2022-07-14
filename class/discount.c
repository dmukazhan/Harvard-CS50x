#include <cs50.h>
#include <stdio.h>

float discount(float price, int percent_off);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float regular, int percent_off)
{
    return regular * (100 - percent_off) / 100;
}