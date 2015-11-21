#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai!");
    //prompt cashier to give a number of change
    float change = -3.14;
    do
    {
        printf("How much change is owed? ");
        change = GetFloat();
    }
    while (change < 0);

    //start the change process
    int coins = 0;
    int residue = round(change * 100);

    coins = residue / 25 + coins;
    residue = residue % 25;

    coins = residue / 10 + coins;
    residue = residue % 10;

    coins = residue / 5 + coins;
    residue = residue % 5;

    coins = residue + coins;

    printf("%i\n",coins);

}
