#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

int main(int argc, char **argv)
{
    FILE *fp = NULL;
    char c;
    int lines = 0;
    
    fp = fopen("file.txt", "r");
    if(fp == NULL){
        printf("error finding file.\n\n");
        return -1;
    }
    
    while( (c = fgetc(fp)) != EOF){
        if (c == '\n'){
            ++lines;
        }
    }
    
    fclose(fp);
    fp = NULL;
    
    printf("Number of lines in file: %d\n", lines);
    
	return 0;
}
