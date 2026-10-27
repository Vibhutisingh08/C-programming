#include <stdio.h>
int Factorial(int p) // p for receiving the value
{
    int x = 1, i;
    for (i = 1; i <= p; i++) {
        x =x*i;
    }
    return x;
}


int main() {
    int a;
    printf("Input value of a: ");
    scanf("%d", &a);
    printf("factorial is: %lld", Factorial(a));
    
    
    return 0;
}
