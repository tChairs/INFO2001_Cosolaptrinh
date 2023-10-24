#include <stdio.h>
#include <stdbool.h>

bool Prime(int o){
    for (int i = 2; i <= o; i++)
    {
        if (o % i ==0)
        {
            return false;
        }
        
    }
    return true;
}


int main(){

    int n, sum=0;

    printf("nhap so nguyen N: \n");
    scanf("%d", &n);
    
    if (Prime(n))
    {
        printf("%d la so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }
    
    
    return 0;
}