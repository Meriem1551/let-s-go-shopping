#include "main.h"

/**
 * main - checks the code
 * Return: always 0
 */

int main(void)
{
    product *head = NULL;
    product product;
    char choice[3];
    do
    {
        product.code_prod = getChar("Enter product code ");
        product.designation = getChar("Enter the designation of this code ");
        product.UM = getChar("Enter it's Unit of mesurement ");
        product.PUA_HT = getFloat("What's its unit price? ");
        product.Qte = getFloat("How many did you buy? ");
        product.TVA = getFloat("What's its tax? ");
        head = addProduct(head, product);
        printf("Do you want to buy another product? ");
        scanf("%s", &choice);
    } while (strcmp(choice, "no") != 0);
    print_products(head);
    create_total_amount(head);
    return (0);
}