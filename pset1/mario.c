#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[])
{

    int height;
    do
    {
        printf("Enter a non-negative integer < 24: ");
        height = GetInt();
    }
    while (height > 23 || height < 0);

    for (int i = 1; i <= height; i++)
    {
        //print the white spaces
        for (int j =  1; j<= height - i ; j++)
        {
            printf(" ");
        }
        
        //print the #
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        //print the space 
        printf("  ");

        //print the #
        for (int k =  1; k<= i ; k++)
        {
            printf("#");
        }
        //print newline
        printf("\n");

    }
}
