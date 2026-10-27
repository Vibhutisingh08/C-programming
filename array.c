#include <stdio.h>
int main() {
  int i;
  int marks[5];
 
  printf("input data=\n");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&marks[i]);
  }
  printf("Data is\t");
  for(i=0;i<=4;i++)
  {
    printf("%d\t",marks[i]);
  }
  return 0;

  
}
    
