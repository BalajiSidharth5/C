#include <stdio.h>

int main(int argc, char **argv)
{
	int hoursWorked, grossPay, actualPay;
    
    printf("enter how many hours have you worked this week: ");
    scanf("%d", &hoursWorked);
    
    if (hoursWorked <= 40){
        
        grossPay = 12*hoursWorked;
    }
    else {
        grossPay = (12*hoursWorked) + (6*hoursWorked);
    }
    
    
     if  (grossPay <= 300){
         actualPay = grossPay*0.85;
     }
     else if (grossPay <= 450){
         actualPay = (300*0.85) + ((grossPay-300)*0.80);
     }
     else{
         actualPay = (300*0.85) + (150*0.80) + ((grossPay - 450)*0.75);
     }
     
     printf("your actual pay for the week is: %d\n", actualPay);
     return 0;
}
