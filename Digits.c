#include<stdio.h>
#include<conio.h>
int main()
{
long long n;
int count = 0;
while(n!=0)
{
  n /= 10;
  ++count;
}
printf("%d",count);
return 0;
}
