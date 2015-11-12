#include <stdio.h>

float promedio(int valores[], int cantidad) {
	int i;
	float suma=0.0;
	
	for(i=0; i< cantidad;i++)
	suma += valores[i];
	
	return suma / (float) cantidad;

}

int main(){
int calificaciones[10];
int opcion;
int n,i;
{
	printf("cuantas calificacion tiene\n");
	scanf("%d", &n);
	 
	 for(i=0;i<n;i++)
	 {
		 printf("calificacion %d:", i+1);
		 scanf("%d", &calificaciones[i]);
	}
	printf("el promedio es %d\n es %.1f",opcion , promedio(calificaciones,n));
	
} 
return 0;
} 

