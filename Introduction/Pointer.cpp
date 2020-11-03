#include <stdio.h>

void update(int *a,int *b) {
    int sum; 
    sum = *a + *b; 
    int temp = *b - *a;  
    if (temp < 0) {temp = 0 - temp;}   
    *b = temp; 
    *a = sum;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
