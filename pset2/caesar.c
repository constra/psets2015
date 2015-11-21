#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char crypt(char c, int k);

int main( int argc, string argv[] )
{
    //check if there is only one command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar.c [key]\n");
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);
        //prompt for text
        string input_text = GetString();
        //return encrypted text
        for (int i = 0, n = strlen(input_text); i < n; i++)
        {
            char p = crypt(input_text[i], k );
            printf("%c", p);
        }
        printf("\n");
        return 0;
    }
}

char crypt(char c, int k)
{
    if (isalpha(c))
    {
        char p;
        if (isupper(c))
        {
            p = ((c - 'A') + 26 + k) % 26 + 'A';
        }
        else if (islower(c))
        {
            p = ((c - 'a') + 26 + k) % 26 + 'a';
        }
        return p;
    }
    else
        return c;

}
