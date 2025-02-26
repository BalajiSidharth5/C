#include <stdio.h>

void squareNum (int *pnumber){
    
    *pnumber = (*pnumber)*(*pnumber);
    
    return;
}

int main(int argc, char **argv)
{
	int number = 0;
    
    printf("enter a number: ");
    scanf("%d", &number);
    
    printf("\n\nthe square of the number %d is: ", number);
    squareNum(&number);
    printf("%d\n\n", number);
    
    return 0;
	
}
