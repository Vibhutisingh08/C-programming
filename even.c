#include <stdio.h>

int main() {
    int i, e = 0, o = 0;
    for (i = 1 ; i <= 1000; i++)
    {
       if (i % 2 == 0)
           e++;
       else
           o++;
    }
    printf("Total Even Numbers: %d\n", e);
    printf("Total Odd Numbers: %d\n", o);
    
    return 0;
}
