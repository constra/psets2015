#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char crypt(char c, int k);
int *crypt_idx(char* word);

int main( int argc, char *argv[] )
{
    /*Check the validity of the arguments*/
    if (argc != 2 )
    {
        printf("Usage ./vignere.c [keyword]\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Please use a string as keyword\n");
            return 1;
        }
    }
    /*Encryption*/
    /*else*/
    /*{*/
        /*Get keyword and text  */
        string k = argv[1];
        string input_text = GetString();
        
        int *key_index = crypt_idx(k);

        /*print the encrypted text*/
        int z = 0;
        for (int i = 0, n = strlen(input_text); i < n; i++)
        {
            if (isalpha(input_text[i]))
            {
                int j = (z) % strlen(k);
                int k_index = key_index[j];
                char p = crypt(input_text[i], k_index);
                printf("%c", p);
                z++;
            }
            else
                printf("%c", input_text[i]);
        }
        printf("\n");
 
        return 0;
    /*}*/
}

/*Return encrypted charactor*/
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

/*convert keyword to array of integers*/
int *crypt_idx(char* word)
{
    int *index = malloc(strlen(word));

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if ( (isupper(word[i])))
        {
           index[i] = word[i] - 65; 
        }
        else if ((islower(word[i])))
        {
           index[i] = word[i] - 97;
        }
    }
    return index;
}
