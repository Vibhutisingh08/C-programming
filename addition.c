#include <stdio.h>

// Function definition
int addition(int p, int q) {
    int x = p + q;
    return x;
}

int main() {
    int a, b, c;
    
    printf("Input value a = ");
    scanf("%d", &a);
    
    printf("Input value b = ");
    scanf("%d", &b);
    
    // Function call
    c = addition(a, b); 
    
    printf("Sum is %d\n", c);
    
    return 0;
}
