#include <stdio.h>

int main(int argc, char **argv)
{
    int minutes;
    float hours;
    float days;
    float years;
    
    printf("please list amount of minutes: ");
    scanf("%d" , &minutes);
    
    hours = minutes/60;
    days = hours/24;
    years = hours/365;
    
    printf("Your minutes converted to years: %f\n", years);
	return 0;
}
