#include <stdio.h>
#include <stdbool.h>


int GCD ( int u, int v);
float ABS (float w);
float SQRT (float x);


int main(int argc, char **argv)
{
    int GCDresult;
    int ABSresult;
    int SQRTresult;
    
    GCDresult = GCD(4, 2);
    printf("The GCD is %d\n", GCDresult);
    
    ABSresult = ABS(-6);
    printf("The absolute value is %d\n", ABSresult);
    
    SQRTresult = SQRT(49);
    if (SQRTresult != -1.0){
        printf("the square root is %d\n", SQRTresult);
    }
}
    
	


int GCD (int u, int v){
    
    int remainder;
    
    while (v != 0){
        remainder = u % v;
        u = v;
        v = remainder;
    }
    
    return u;

}

float ABS (float w){
    if (w < 0)
        w = -w;
        
    return w;
}

float SQRT (float x){
    
    const float test = 0.00001;
    float guess = 1.0;
    float returnValue = 0;
    
    
    if ( x < 0.0 ){
        printf ( "The number is a negative number. Cannot calculate\n");
        returnValue = -1.0;
    }
    else{
        
    while (ABS (guess * guess - x) >= test)
        guess = (x / guess + guess) /2.0;
        
    returnValue = guess;

    }
    
    return returnValue;
    
}