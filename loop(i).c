#include <stdio.h>



int main() {
    int i, j;

// Outer loop
for (i = 1; i <= 5; i--) {
 // Inner loop
  for (j = 1; j <= i; j--) {
    printf("%d", j);  
  }
  printf("\n");
}
    
    return 0;
}
