#include<stdio.h>
// #include<math.h>
int main(){
    float p,r,t,amt,CI;
    printf("\nenter principle:");
    scanf("%f",&p);
    printf("\nenter rate: ");
    scanf("%f",&r);
    // printf("\nenter number of times interest is compounded per year: ");
    // scanf("%f",&n);
    printf("\nenter time (in years): ");
    scanf("%f",&t);
    amt=(p*r*t)/100;
    printf("\n amt:%f",amt);
    CI=amt-p;
    printf("\ncoumpund interst:%f",CI);
    return 0;



}