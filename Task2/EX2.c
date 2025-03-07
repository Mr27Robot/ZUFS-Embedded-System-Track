
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int main() {
    int sum_int , dif_int , x1, y1;
    float sum_f , dif_f ,x2, y2;
    scanf("%d %d ",&x1,&y1);
    scanf("%f %f", &x2 ,&y2);
    sum_int = x1 + y1 ;
    dif_int = x1 - y1 ;
    sum_f = x2 + y2;
    dif_f = x2 - y2;
    printf("%i%i\n",sum_int,dif_int);
    printf("%.1f %.1f" , sum_f , dif_f);

    return 0;
}
