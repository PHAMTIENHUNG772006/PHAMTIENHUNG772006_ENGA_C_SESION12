#include<stdio.h>
int tong(int a, int b) {
    int sum = 0;
    for (int i = 0; i < a + b; i++) {
        sum  =a +b;
    }
    return sum;
}
int main() {
    int a, b;
    printf("Moi ban nhap a: ");
    scanf("%d", &a);
    printf("Moi ban nhap b: ");
    scanf("%d", &b);
    int sum = tong(a, b);
    printf("Tong gia tri cua a va b la: %d\n", sum);

    return 0;
}

