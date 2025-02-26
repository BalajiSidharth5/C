#include <stdio.h>

int main(int argc, char **argv)
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company Var1 = XEROX, Var2 = GOOGLE, Var3 = EBAY;
    printf("%d\n", Var1);
    printf("%d\n", Var2);
    printf("%d\n", Var3);
    
    return 0;
}
