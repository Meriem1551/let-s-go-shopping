#include "main.h"

/**
 * calc_numProducts - calculates tatol  bought products
 * @h: pointer to the first product
 * Return: total number
 */

int calc_numProducts(product *h)
{
    product *tmp = h;
    int num_prod = 0;

    while (tmp != NULL)
    {
        num_prod++;
        tmp = tmp->next;
    }
    return num_prod;
}