#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //Prompt for name
    //printf("Please give me your name:");
    string name = GetString();

    //Get the initials
    if (name != NULL)
    {
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            if (isalpha(name[i]) && name[i-1] == ' ')
                printf("%c",toupper(name[i]));
        }
        printf("\n");
    }
    //Change to upper case
}

