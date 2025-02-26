#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringCount (char array[]){
    
    int count = 0;
    
    while(array[count] != '\0'){
        ++count;
    }
    
    return count;
}

void stringCon (char result[], char a[], char b[]){
    
    
    int count=0;
    int i=0;
    
    while (a[count] != '\0'){
        result[i] = a[count];
        count++;
        i++;
    }
    
    count = 0;
    
    while (b[count] != '\0'){
        result[i] = b[count];
        count++;
        i++;
    }
   
    
    result[i] = '\0';
    
}bool stringEqual (char str1[],char str2[]){
    
    bool isSame;
    
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0'){
        i++;
        isSame = true;
    }
    
    if (str1[i] == '\0')
        return isSame;
        
    else{
        isSame = false;
        return isSame;
    }
}

int main(int argc, char **argv){
    

    
    char s[] = "Hello!";
    char t[] = "Hello!";
    
    
    
    if (stringEqual(s, t) == true)
        printf ("the strings are the same.\n");
    else
        printf ("the strings are different.\n");
    
}
