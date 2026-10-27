#include <stdio.h>
int main() {
  int i;
  int marks[5];
  
  
  for(i=0;i<=4;i++)
  {
    printf("input marks of %d is: \n",i);
    scanf("%d",&marks[i]);
  }
  printf("Data is\t");
  for(i=0;i<=4;i++)
  {
    printf("%d\t",marks[i]);
  }
  return 0;

  
}
    
