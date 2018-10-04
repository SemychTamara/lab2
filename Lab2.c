# lab2
#include <stdio.h> 
#include <math.h>

#define M_E 2.718281  

int main (void )  
{        
     int n = 7;       
     double s = 0;       
     double a = 0; 
         
        for (int i = 0;   i < n;   i++ ) 
       { 
            a = n*n*pow(M_E, -sqrt(n));            
            s = s + a; 
       }        
       printf("s =  %lf\n" , s);
} 
