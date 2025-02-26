#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main(int argc, char **argv)
{
    float rain[YEARS][MONTHS] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},

        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},

        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},

        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},

        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
};

    int years, months;
    float subtot, total;
    
    printf("Year\t\tRainfall(inches)\n");
    
    for(years = 0, total = 0.0; years < YEARS; ++years){
        
        for(months = 0, subtot = 0.0; months < MONTHS; ++months){
        subtot += rain[years][months];
        
        }
    printf("%5d \t%15.1f\n", 2011 + years, subtot);
    total += subtot;
    }
    
    printf("\nThe yearly average is %.1f inches.\n\n",total/YEARS);
    
    printf("Monthly Averages:\n\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");
    
    for(months = 0; months < MONTHS; ++months){
        
        for(years = 0, subtot = 0; years < YEARS; ++years){
            subtot += rain[years][months];
        }
        
        printf("%4.1f\t", subtot);
    }
    
	return 0;
}
