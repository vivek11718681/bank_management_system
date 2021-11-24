#include<stdio.h>
#include "bank.h"
/**
 * @brief function to display the customers
 * 
 * @param list structure of customers
 * @param s number of customers 
 */
void display(struct customer list[80], int s)
{
    int i;

    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    } 
}