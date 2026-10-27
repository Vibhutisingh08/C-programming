#include <stdio.h>



int main() {
    int i, j;

// Outer loop
for (i = 5; i >= 1; i--) {
 // Inner loop
  for (j = 1; j <= i; j++) {
    printf("%d", j);  
  }
  printf("\n");
}
    
    return 0;
}
