#include<stdio.h>
#include "bank.h"
/**
 * @brief function to search for a customer record
 * 
 * @param list structure of customers
 * @param s number of customers
 * @param number account number of customer
 * @return int return -1 if no record found
 */
int search(struct customer list[80], int s, int number)
{
    int i;

    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        } 
    }
    return  - 1;
}