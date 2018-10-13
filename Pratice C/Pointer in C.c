/* ###Pointers in C### */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int update(int*, int*);
int main() {
    int a, b, val, sub;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    val = update(pa, pb);
    printf("%d\n", val);
    sub = abs((*pa - *pb));
    printf("%d", sub);


    return 0;
}
int update(int *pa,int *pb) {
    // Complete this function

    int sum;
    sum = *pa + *pb;
    return sum;


}
