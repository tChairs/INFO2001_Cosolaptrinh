#include <stdio.h>

int main(){

    long long int num;

    printf("Nhap so nguyen: ");
    scanf("%lld", &num);

    if (num % 2 == 0)
    {
        printf("even munber");
    } else {
        printf("odd number");
    }
   
   
    return 0;
}
