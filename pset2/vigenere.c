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
    /*Encryption*/
    else
    {
        /*Get keyword and text  */
        string k = argv[1];
        string input_text = GetString();
        
        int *key_index = crypt_idx(k);
        printf("%i\n", key_index[4]);
        /*print the encrypted text*/
        for (int i = 0, n = strlen(input_text); i < n; i++)
        {
            int j = (i+1) % strlen(k);
            int k_index = key_index[j];
            char p = crypt(input_text[i], k_index);
            printf("%c", p);
        }
        printf("\n");
 
        return 0;
    }
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
           index[i] = word[i] - 65 + 1; 
        }
        else if ((islower(word[i])))
        {
           index[i] = word[i] - 97 + 1;
        }
    }
    return index;
}
