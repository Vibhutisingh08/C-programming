#include <stdio.h>

// Function to calculate the sum of two numbers
int addition(int p, int q) {
    int x = p + q;
    return x;
}

// Function to calculate the product of two numbers
int product(int p, int q) {
    int x = p * q;
    return x;
}

int main() {
    int a, b;
    
    // Prompts the user to input two values (e.g., 20 and 4)
    printf("Enter one numbers: ");
    scanf("%d", &a);
     printf("Enter two numbers: ");
    scanf("%d", &b);
    
    // Calls functions and prints the results
    // Added '\n' at the end of the strings so they print on new lines
    printf("Sum is %d\n", addition(a, b));
    printf("product is %d\n", product(a, b));
    
    return 0;
}
