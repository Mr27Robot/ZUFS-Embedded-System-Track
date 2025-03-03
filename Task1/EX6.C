#include <stdio.h>
int main(){
    float a , b ;
    printf("#########Console_output######\nEnter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("After swapping, value of a = %f\nAfter swapping, value of b = %f\n#############################\n########################################################################",a,b);
    return 0 ;
}
