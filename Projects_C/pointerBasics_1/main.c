#include <stdio.h>
#include <stddef.h>

ptrdiff_t pDifference (const char *pstart){
    
    const char *pend = pstart;
    
    while (*pend){
        ++pend;
        
    }
        
    return pend - pstart;
}

int main(int argc, char **argv)
{
    char input[] = "wkhbdhjvwekjliugfckbfweuk";
    
    printf("the pointer difference: %td\n", pDifference (input));
    
    return 0;
    
    //refresh strings concept
}
