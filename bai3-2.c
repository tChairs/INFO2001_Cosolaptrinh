#include <stdio.h>

int main() {
    int i=2, j;

    while (i <= 9)
    {
        printf("Bang cuu chuong %d\n", i);    
        int j = 1;
        while (j <= 10)
        {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }
        i++;
        printf("\n");
    }
    
    return 0;
}