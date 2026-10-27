#include <stdio.h>

int main() {
    long long n;
    int count = 0;
    
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    if (n == 0) {
        count = 1;
    } else {
        // Changing to != 0 handles negative numbers correctly
        while (n != 0) { 
            count++;
            n = n / 10;
        }
    }
    
    printf("Total digits: %d\n", count);
    return 0;
}
