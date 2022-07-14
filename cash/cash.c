#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // Prompt user to input number of cents
    int c;
    do
    {
        c = get_int("How many cents? ");
    }
    while (c < 0);
    return c;
}

int calculate_quarters(int c)
{
    // Calculate number of quarters
    int q = 0;
    while (c >= 25)
    {
        c = c - 25;
        q++;
    }
    return q;
}

int calculate_dimes(int c)
{
    // Calculate number of dimes
    int d = 0;
    while (c >= 10)
    {
        c = c - 10;
        d++;
    }
    return d;
}

int calculate_nickels(int c)
{
    // Calculate number of nickels
    int n = 0;
    while (c >= 5)
    {
        c = c - 5;
        n++;
    }
    return n;
}

int calculate_pennies(int c)
{
    // TODO
    int p = 0;
    while (c >= 1)
    {
        c = c - 1;
        p++;
    }
    return p;
}
