#include<stdio.h>
int main() {
  
  float radius,height,volume;
  float pi=3.14;

  printf("Enter the radius of cylinder: ");
  scanf("%f", &radius);

  printf("Enter the height of cylinder: ");
  scanf("%f", &height);

  volume = pi*radius*radius*height;

  printf("The volume of cylinder is %f",volume);
  return 0;
}
    
    


   
