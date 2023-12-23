#include "main.h"

/**
 * calc_total_taxes - calculates total taxes of all purchased products
 * @h: pointer to first product
 * Return: total taxes
 */

float calc_total_taxes(product *h)
{
    float t_tax = 0;
    product *tmp = h;
    while (tmp != NULL)
    {
        t_tax = t_tax + (tmp->TVA * tmp->PUA_HT);
        tmp = tmp->next;
    }
    return t_tax;
}