#include <stdio.h>
int main() {
  int i;
  int n;
  printf("input nth value:");
  scanf("%d",&n);
  int marks[100];
  
  
  for(i=0;i<=n;i++)
  {
    printf("input marks: \n");
    scanf("%d",&marks[i]);
  }
  printf("Data is\t");
  for(i=0;i<=n;i++)
  {
    printf("%d\t",marks[i]);
  }
  return 0;

  
}
    
