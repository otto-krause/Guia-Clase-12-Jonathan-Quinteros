#include<stdio.h >
#include <stdlib.h>
int nmayor(int a, int b)
{
int nmayor;
if(a<b)
{
nmayor=b;
}
else
{
nmayor=a;
}
return (nmayor);
}
void main()
{
int num=0, num2=0;
printf("Ingrese un numero ");
scanf("%d",&num);
printf("Ingrese otro numero ");
scanf("%d",&num2);
if(num==num2)
{
printf("son iguales");
}
else
{
printf("El numero mayor es %d",nmayor(num, num2));
}
return 0;
}
