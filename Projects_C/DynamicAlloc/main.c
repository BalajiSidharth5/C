#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int size;
    char *text = NULL;
    
    printf("Enter the number of characters: ");
    scanf("%d", &size);
    
    text = (char *) malloc(size*sizeof(char));
    
    if (text != NULL){
        
        while (getchar() != '\n'); 
        
        printf("\n\nEnter your string: ");
        fgets(text, size, stdin);
        printf("Your inputted string is: %s\n", text);
    }
    
    free(text);
    text = NULL;
    
    return 0;
}