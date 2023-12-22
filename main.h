#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product
{
    char *code_prod;   // 9 chars
    char *designation; // 50chars
    char *UM;          // unite de mesure (kg, l,...) 3 chars
    float PUA_HT;      // Prix Unitaire d’Achat Hors Taxe
    float Qte;         // quantite ahete
    float TVA;         // Taxe sur Valeur Ajoutée
    struct product *next;
} product;

product *addProduct(product *, product);
char *getChar(char *);
float getFloat(char *);
#endif