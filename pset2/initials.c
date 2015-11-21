#include <stdio.h>
#include <cs50.h>
#include <string.h>

int toupper(char x);
int main(void)
{
    //Prompt for name
    //printf("Please give me your name:");
    string name = GetString();

    //Get the initials
    if (name != NULL)
    {
        printf("%c",toupper(name[0]));
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            if (name[i] == ' ')
                printf("%c",toupper(name[i+1]));
        }
        printf("\n");
    }
    //Change to upper case
}

int toupper(char x)
{
    if (x >=65 && x < 91)
        return x;
    else
        return x - 32;
}
