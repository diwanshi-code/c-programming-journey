#include <stdio.h>
int main() {
    
    float C,F;
    
    printf("Enter the temp in celsius: ");
    scanf("%f", &C);
  
    F=(9/5)*C+32;
    
    printf("The value of temp in farenheit is %f",F);
    
    return 0;
}
