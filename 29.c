#include<stdio.h>
int main()
{
int a,hr,m;
scanf("%d",&a);
m=a%60;
hr=a/60;
printf("%d %d",hr,m);
return 0;
}
