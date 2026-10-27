#include <stdio.h>

int main() {
    int x;
    printf("Enter total number of elements: ");
    scanf("%d", &x);
    
    // Declare an array of size x to hold all the numbers
    int num[x];
    
    // Loop to take inputs from the user
    printf("Enter the values:\n");
    for (int i = 0; i < x; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &num[i]);
    }
   
    int i;
    int p = 0; // Positive counter
    int n = 0; // Negative counter
    int z = 0; // Zero counter

    // Loop through the array to check and count
    for (i = 0; i < x; i++) {
        if (num[i] == 0) {
            z++;
        } 
        else if (num[i] > 0) {
            p++;
        } 
        else if (num[i] < 0) {
            n++;
        }
    }

    // Display the final results
    printf("\npositive number is %d\n", p);
    printf("Negative number is %d\n", n);
    printf("zero is %d\n", z);

    return 0;
}
