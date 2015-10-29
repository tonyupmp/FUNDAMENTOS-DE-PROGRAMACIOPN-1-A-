#include<stdio.h>//libreria de E/s
int i,total,suma;
int main()
{
	printf("dame el numero\n");
	scanf("%d",&total);
	while(i<=total)
	{
		printf("%d\n",i);
		suma=suma+i;
		i=i+1;
	}
	printf("la suma de los numero  es %d\n",suma);
	
}
