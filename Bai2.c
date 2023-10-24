#include <stdio.h>

int main(){

    long long int num;

    printf("Nhap so nguyen n (-1018 =< n =< 1018): ");
    scanf("%llf", &num);
    
    
    if (num <= 10 && num >= 9) 
    {
        printf("Xuat Xac\n");
    } else if (num < 9 && num >= 8 ){
        printf("Gioi\n");

    } else if (num < 8 && num >= 6.5 ){
        printf("Kha\n");

    } else if (num < 6.5 && num >= 5 ){
        printf("Trung Binh\n");

    } else if (num < 5 && num >= 0 ){
        printf("Yeu\n");
    }
    else {
        printf("nhap sai so");
    }
    

    return 0;
}