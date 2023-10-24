#include <stdio.h>


int main(){

    int n, sum=0;

    printf("nhap so nguyen N: \n");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("sai so");
            break;
        }
        
    }
    
    
    return 0;
}