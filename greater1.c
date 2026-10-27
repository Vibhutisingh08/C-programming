#include <stdio.h>

int greater(int p, int q)
{
    if (p > q)
        return p;
    else
        return q;
}

int main() {
    int a, b;
    printf("Input value of a: ");
    scanf("%d", &a);
    printf("Input value of b: ");
    scanf("%d", &b);
    printf("Greater is: %d\n", greater(a, b));

    return 0;
}
