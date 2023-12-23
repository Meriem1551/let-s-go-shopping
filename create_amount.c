#include "main.h"

/**
 * create_total_amount - creates the  total amount
 * @h: pointer to the first product
 * Return: void
 */

void create_total_amount(product *h)
{
    int num_products = 0;
    float total_cost = 0;
    float total_taxes = 0;
    float total_cost_without_taxes = 0;
    product *tmp;
    if (h == NULL)
    {
        printf("You did not buy anything!!");
        return;
    }
    num_products = calc_numProducts(h);
    total_cost = calc_total_price(h);
    total_taxes = calc_total_taxes(h);
    total_cost_without_taxes = total_cost - total_taxes;
    FILE *amount = fopen("amount.txt", "w");
    if (amount == NULL)
    {
        printf("Error opening file");
        return;
    }
    fprintf(amount, "****** AMOUNT OF WHAT YOU BUY ******\n");
    tmp = h;
    while (tmp != NULL)
    {
        fprintf(amount, "%s...................%.2fDA\n", tmp->designation, tmp->PUA_HT);
        tmp = tmp->next;
        ;
    }
    fprintf(amount, "Total cost: %.2fDA\n", total_cost);
    fprintf(amount, "Number of products: %d\n", num_products);
    fprintf(amount, "Total taxes: %.2fDA\n", total_taxes);
    fprintf(amount, "Total cost without taxes: %.2fDA\n", total_cost_without_taxes);
    fprintf(amount, "\n");
    fclose(amount);
}