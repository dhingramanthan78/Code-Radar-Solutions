#include <stdio.h>
int main(){
    double r,area;
    const double pi=3.14;
    scanf("%lf", &r);
    area=pi*r*r;
    printf("Area: %.2lf\n", area);

    return 0;
}