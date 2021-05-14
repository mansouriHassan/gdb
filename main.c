#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int somme (int a, int b)
{
return a + b;
}

int produit (int a, int b)
{
return a * b;
}

int cree(int a)
{
return produit(a,a);
}

void affiche()
{
	for (int i =0;i<10; i++)
	{
		printf("affiche i =%d\n" ,i);
	}
}
void swap(int* a, int* b)
{
	printf("befor swap : a= %d, b= %d \n", *a, *b);
	int c; 
	c = *a;
	*a = *b;
	*b = c;
	printf("after swap : a= %d, b= %d \n", *a, *b);
}


int main()
{

	affiche1();
	int* pt;

	printf("first gcc exemple\n");
	int a =10;
	int b =5;
int s = somme(a,b);
int p = produit (a,b);
int car = cree(b);
printf("a= %d ",a);

printf("a= %d, b= %d \n", a, b);
printf("la somme = %d\n", s );
printf("le produit = %d\n" , p);
printf("le carre = %d\n", car);

pt =(int*)malloc(sizeof(int));
*pt = a;
printf("pt = %ls\n", pt);
printf("*pt = %d\n", *pt);
int tab1[] = {1, 2, 3, 4, 5};

swap(&a, &b);
printf("a= %d, b= %d \n", a, b);

return 0;

}
