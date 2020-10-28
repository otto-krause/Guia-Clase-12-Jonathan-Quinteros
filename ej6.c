#include<stdio.h >
#include <stdlib.h>
int oct(int a)
{
int t;
t=a/8;
return t;
}
void main()
{
int num;
printf("Ingrese un numero ");
scanf("%d",&num);
printf("la octava parte es %d\n",oct(num));
return 0;
}
