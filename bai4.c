#include <stdio.h>

int main(){

    long long int n, sum=0;

    printf("nhap so nguyen N: \n");
    scanf("%lld", &n);
    
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        sum+=i;
    }
    printf("Tong cac so le cua %lld la %lld", n, sum);

    return 0;
}