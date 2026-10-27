#include <stdio.h>
int main() 
{
    long long int i,n, sum =0;
printf("Enter a number:");
    scanf("%d",&n);
    for (long long i=1;i<=n;i++) {
        sum += i*i;
  }
  printf("%lld",sum);
  return 0;
}

