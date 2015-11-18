#include<stdio.h>
int arreglo [10];
int moda [10];
int mayor;
int posmayor;
int i;
int main()
{
	for(i=0; i<10;i++)
 {
	printf("dame la calificacion");
 	scanf("%d",&arreglo[i]);
}
for(i=0; i<10;i++)
{
	moda[arreglo[i]-1]++;
}
mayor=0;
for(i=0; i<10;i++)

{
	if(moda[i]>mayor)
	{
		mayor=moda[i];
		posmayor=i;
	}
}
	printf("la moda es %d",posmayor+1);
	
	return 0;
}

