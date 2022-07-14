#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ");
    const int z = 2;

    if (points < z)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > z)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}