#include<stdio.h>//libreria de E/s
int a,b,c,d,e,f,g,h,i,j;
int mayor;
int menor;
int main()
{//incio
	printf("dame el valor a\n");
	scanf("%d", &a);
	printf("dame el valor b\n");
	scanf("%d" ,&b);
	printf("dame el valor c\n");
	scanf("%d", &c);
	printf("dame el valor d\n");
	scanf("%d", &d);
	printf("dame el valor e\n");
	scanf("%d", &e);
	printf("dame el valor f\n");
	scanf("%d", &f);
	printf("dame el valor g\n");
	scanf("%d", &g);
	printf("dame el valor h\n");
	scanf("%d", &h);
	printf("dame el valor i\n");
	scanf("%d", &i);
	printf("dame el valor j\n");
	scanf("%d", &j);
	
	if(a>b&& a>c && a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j){
		printf("si el resultado fueron valores %d\n",a);	
	}else if(b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j){
		printf("si el resultado fueron valores %d\n",b);
	}else if(c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j){
		printf("si el resultado fueron valores %d\n",c);
	}else if(d>b&& d>c &&d>e&&d>f&&d>g&&d>h&&d>i&&d>j){
		printf("si el resultado fueron valores %d\n",d);
	}else if(e>b&& e>c && e>d&&d>f&&d>g&&d>h&&d>i&&d>j){
		printf("si el resultado fueron valores %d\n",e);
	}else if(f>a&&f>b&&f>c&&f>d&&f>e&&f>g&&f>h&&f>i&&f>j){
		printf("si el resultado fueron valores %d\n",f);
	}else if(g>a&&g>b&&g>c&&g>d&&g>e&&g>h&&g>i&&g>j){
		printf("si el resultado fueron valores %d\n",g);
	}else if(h>a&&h>c&&h>d&&h>e&&h>f&&h>g&&h>i&&h>j){
		printf("si el resultado fueron valores %d\n",h);
	}else if(i>a&&i>c&&i>d&&i>e&&i>f&&i>g&&i>h&&i>j){
		printf("si el resultado fueron valores %d\n",i);
	}else if(j>a&&j>c&&j>d&&j>e&&j>f&&j>g&&j>h&&j>i){
		printf("si el resultado fueron valores %d\n",j);
	}
	
	
	if(a<b&&a<c&&a<d&&a<e&&a<f&&a<g&&a<h&&a<i&&a<j){
	
		printf("si el resultado fueron valores %d\n",a);
	
	}else if(b<a&&b<c&&b<d&&d<e&&b<f&&b<g&&b<h&&b<i&&b<j){

		printf("si el resultado fueron valores %d\n",b);
	}else if(c<b&&e<c&&c<d&&c<e&&e<f&&e<g&&e<h&&e<i&&e<j){
	
		printf("si el resultado fueron valores %d\n",c);

	}else if(d<b&&d<c&&d<e&&d<f&&d<g&&d<h&&d<i&&d<j){
		printf("si el resultado fueron valores %d\n",d);
		
	}else if(e<b&& e<c && e<d&&d<f&&d<g&&d<h&&d<i&&d<j){
		printf("si el resultado fueron valores %d\n",e);
	}else if(f<a&&f<b&&f<c&&f<d&&f<e&&f<g&&f<h&&f<i&&f<j){
		printf("si el resultado fueron valores %d\n",f);
	}else if(g<a&&g<b&&g<c&&g<d&&g<e&&g<h&&g<i&&g<j){
		printf("si el resultado fueron valores %d\n",g);
	}else if(h<a&&h<c&&h<d&&h<e&&h<f&&h<g&&h<i&&h<j){
		printf("si el resultado fueron valores %d\n",h);
	}else if(i<a&&i<c&&i<d&&i<e&&i<f&&i<g&&i<h&&i<j){
		printf("si el resultado fueron valores %d\n",i);
	}else if(j<=a&&j<b&&j<c&&j<d&&j<e&&j<f&&j<g&&j<h&&j<i){
	
	printf("si el resultado fueron valores %d\n",j);
	}

}

	



