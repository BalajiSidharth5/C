#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "Text.txt"

int main(int argc, char **argv)
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char c;
    
    fp = fopen(FILENAME, "r");
    if(fp == NULL){
        return -1;
    }
    
    fp1 = fopen("Temp.txt", "w");
    if(fp1 == NULL){
        return -1;
    }
    
    while((c = fgetc(fp)) != EOF){
        if (islower(c)){
            c = c - 32;
        }
        fputc(c, fp1);
    }
    
    fclose(fp);
    fclose(fp1);
    
    rename("Temp.txt", FILENAME);
    remove("Temp.txt");
    
    fp = fopen(FILENAME, "r");
    if (fp == NULL){
        return -1;
    }
    
    while((c=fgetc(fp)) != EOF){
        printf("%c", c);
    }
    
    fclose(fp);
    fp = NULL;
    fp1 = NULL;
    
    return 0;
}
