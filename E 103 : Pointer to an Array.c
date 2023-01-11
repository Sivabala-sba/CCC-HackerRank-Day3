#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int i;
    double arr[5];
    for(i=0; i<5; i++) scanf("%lf", &arr[i]);
    double* p = arr;
    for(i=0; i<5; i++) printf("%.4lf ", sqrt(arr[i]));
    return 0;
}
