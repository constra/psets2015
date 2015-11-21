#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Declare variables
    int minute, bottles;

    //Prompt for input
    printf("minutes: ");
    minute = GetInt();

    //Test validity of the input (integers, no negative numbers)
    while (minute <= 0)
    {
        printf("Retry: ");
        minute = GetInt();
    }

    //Do the math
    bottles = minute * 1.5 * 128 / 16;
    //print out the equivalent amount of water
    printf("bottles: %i\n", bottles);
}
