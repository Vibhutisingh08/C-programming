
#include <stdio.h>


int Angles(int a, int b, int c) {
    int d = a + b + c;
    if (d==180 || a == 0 || b == 0 || c == 0){
       printf("I");}
    else if (a <= 90 || b <= 90 || c <=90) {
        printf("A");}
    else if (a==90 || b==90 || c == 90){
        printf("R");
    }
    else {
        printf("Obtuse");}
    }

       

int main() {

    int a, b, c;
   
    
    printf("Input a=");
    scanf("%d", &a);
    
    printf("Input b=");
    scanf("%d", &b);
    
    printf("Input c=");
    scanf("%d", &c);
    
    
    printf("result is ");
    Angles(a, b, c);
    printf("\n");
    
    return 0;
}


