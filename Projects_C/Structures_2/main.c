$#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem (struct item *i){
    printf("Enter item name: ");
    scanf("%s",i->itemName);
    printf("\nEnter quantity of item: ");
    scanf("%d", &i->quantity);
    printf("\nEnter price of item: ");
    scanf("%f", &i->price);
    i->amount = ((float) i->quantity)*(i->price);
    return;
}

void printItem(struct item *j){
    printf("\n\nItem Information:\n");
    printf("Name: %s\n", j->itemName);
    printf("Quantity: %d\n", j->quantity);
    printf("Price: %.2f\n", j->price);
    printf("Total amount: %.2f\n\n", j->amount);
    return;
}

int main(int argc, char **argv)
{
    struct item *pItem = NULL;
    struct item firstItem;
    pItem = &firstItem;
    pItem->itemName = (char *)malloc(50*sizeof(char));
    if (pItem == NULL){
        exit(-1);
    }
    readItem(pItem);
    pItem->itemName = realloc(pItem->itemName, strlen(pItem->itemName)*sizeof(char));
    if (pItem == NULL){
        exit(-1);
    }
    printItem(pItem);
    
    return 0;
    
}