#include<stdio.h >
#include<stdlib.h>
int Porch(int a, int b)
{
int Porch;	
Porch=a*100/b;
return Porch;
}
int Porcm(int a, int b)
{
int Porcm;	
Porcm=a*100/b;
return Porcm;
}
void main()
{
int h, m, Total;
printf("Ingrese la cantidad de hombres ");
scanf("%d",&h);
printf("Ingrese la cantidad de mujeres ");
scanf("%d",&m);
Total=h+m;
printf("el porcentaje de hombres postulados es %d\n",Porch(h,Total));
printf("el porcentaje de mujeres postuladas es %d\n",Porch(m,Total));
return 0;
}
