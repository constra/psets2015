#include <stdio.h>
#include <cs50.h>

int checksum(long long card_num);

int main(void)
{
    string type;
    int result;
    //prompt for input
    printf("Number: ");
    long long credit_num = GetLongLong();
    while (credit_num <= 0)
    {
        printf("Retry: ");
        long long credit_num = GetLongLong();
    }
    //calculate the checksum
    float credit_check = credit_num;
    if ((credit_check >= 34e13 && credit_check < 35e13) || (credit_check >= 37e13 && credit_check < 38e13))
    {
        type = "AMEX";
        result = checksum(credit_num);
        if (result % 10 == 0)
        {
            printf("%s\n",type);
        } 
        else
        {
            printf("INVALID\n");
        }
    }
    else if (credit_check >= 51e14 && credit_check < 56e14)
    {
        type = "MASTERCARD";
        result = checksum(credit_num);
        if (result % 10 == 0)
        {
            printf("%s\n",type);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if ((credit_check >= 4e12 && credit_check < 5e12) || (credit_check >= 4e15 && credit_check < 5e15))
    {
        type = "VISA";
        result = checksum(credit_num);
        if (result % 10 == 0)
        {
            printf("%s\n",type);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}


int checksum(long long card_num)
{
    long long temp = card_num;
    int digit = 0, sum_2 = 0, sum_1 = 0, sum = 0;

    //Calculate the sum of every other digit by 2
    temp = temp / 10;
    while (temp != 0)
    {
        digit = temp % 10;
        if (digit >= 5)
        {
            digit = digit * 2;
            sum_2 = sum_2 + digit % 10 + digit / 10;

        }
        else
        {
            sum_2 = sum_2 + digit * 2;
        }
        temp = temp / 100;
    }

    //Calculate the sum of the rest digit
    temp = card_num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum_1 = sum_1 + digit;
        temp = temp / 100;
    }

    //calculate the checksum
    sum = sum_2 + sum_1;
    return sum;
}
