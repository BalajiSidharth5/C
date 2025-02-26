#include <stdio.h>
#include <string.h>

void stringFlip (char result[], char str[]){
    
    int length = strlen(str) - 1;
    int i = 0;
    
    while (length >= 0){
        result[i] = str[length];
        ++i;
        --length;
    }
    
    result[i] = '\0';
}

void stringSort ( char x[], char y[]){
    
    char temp[100];

    
    if (strcmp(x, y) > 0){
        strcpy(temp,x);
        strcpy(x, y);
        strcpy(y, temp);
    }
}

int main(int argc, char **argv)
{
    int numStrings;
    
    printf("number of input strings: ");
    scanf("%d", &numStrings);

    
    char strings[numStrings][50];
    
    for(int index=0; index<numStrings; ++index){
        printf("\ninput string %d: ", index + 1);
        scanf("%s", strings[index]);
    }
    
    for(int i =0; i<numStrings-1; ++i){
        for(int j = 0; j<numStrings-1; ++j){
            stringSort(strings[j], strings[j+1]);
            }
        }
    
    for(int k = 0; k<numStrings; ++k){
        printf("%s\n", strings[k]);
    }
    
}
