#include<stdio.h>// libreria de E/s
int num1,num2;
int main()
{
	printf("ingrese un numero \n");
	scanf("%d",&num1);
	printf("ingrese otro numero\n");
	scanf("%d",&num2);
	if(num1<=num2)
	{while(num1<=num2)
	{
		printf("%d\n",num1);
		num1=num1+1;
	}
	}else if(num2<=num1);
		{while(num2<=num1);
		
			printf("%d\n",num1);
			num1=num1-1;
	}
}
