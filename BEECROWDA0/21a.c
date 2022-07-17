#include<stdio.h>

int main() {
    
    int n, i, j, k;
    
    while (scanf("%i", &n) != EOF) {
        
        if (n == 0)
            break;
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                k = i + 1;
                if (j + 1 < k)
                    k = j + 1;
                if (n - i < k)
                    k = n - i;
                if (n - j < k)
                    k = n - j;
                if (j)
                    printf(" ");
                printf("%3i", k);
            }
            printf("\n");
        }
        printf("\n");
        
    }
    
    return 0;
}