#include "main.h"

/**
 * addProduct - adding a product to the list
 * @h: pointer to the first node
 * @p: product to add
 * Return: pointer to first list
 */

product *addProduct(product *h, product p)
{
    product *new = (product *)malloc(sizeof(product));
    if (!new)
    {
        fprintf(stderr, "allocation failed");
        return NULL;
    }
    new->code_prod = p.code_prod;
    new->designation = p.designation;
    new->PUA_HT = p.PUA_HT;
    new->Qte = p.Qte;
    new->UM = p.UM;
    new->TVA = p.TVA;
    new->next = NULL;
    if (h == NULL)
        h = new;
    else
    {
        new->next = h;
        h = new;
    }
    return h;
}