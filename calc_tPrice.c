#include "main.h"

/**
 * calc_total_price - calculates total price
 * @h: pointer to the first product
 * Return: total price
 */

float calc_total_price(product *h)
{
    product *tmp = h;
    float t_cost = 0;
    float tax = 0;

    while (tmp != NULL)
    {
        tax = tmp->TVA * tmp->PUA_HT;
        t_cost = t_cost + (tmp->PUA_HT * tmp->Qte + tax);
        tmp = tmp->next;
    }
    return (t_cost);
}