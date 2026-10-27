#include <stdio.h>
int main() {
  int i;
  int marks[5];
  
  
  for(i=0;i<=4;i++)
  {
    printf("input marks: \n");
    scanf("%d",&marks[i]);
  }
  printf("Data is\t");
  for(i=4;i>=0;i--)
  {
    printf("%d\t",marks[i]);
  }
  return 0;

  
}
    
