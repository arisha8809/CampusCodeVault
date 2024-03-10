#include <stdio.h>

void main() {
    int i, n, max, even_c = 0, odd_c = 0, prime_c = 0, p, l = 0;
    int even[10], odd[10], prime[10];
    printf("Enter maximum numbers in array: ");
    scanf("%d", &max);
    for (i = 0; i < max; i++) {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n % 2 == 0) 
            even[even_c++] = n;
        else 
            odd[odd_c++] = n;
        
        for (p = 0, l = 2;l < n; l++) {
            if (n % l == 0) {
                p = 1;
                break;
            }
        }
        if (p == 0) {
            prime[prime_c++] = n;
        }
    }
    printf("There are %d odd numbers:\n", odd_c);
    for (i = 0; i < odd_c; i++)
        printf("%d\n", odd[i]);

    printf("There are %d even numbers:\n", even_c);
    for (i = 0; i < even_c; i++)
        printf("%d\n", even[i]);

    printf("There are %d prime numbers:\n", prime_c);
    for (i = 0; i < prime_c; i++)
        printf("%d\n", prime[i]);
}

