#include <stdio.h>
int main ()
{
	//Este programa indica siel numero leido por teclado es 3
	
	int Num;

	printf("Escribe un numero: ");
	scanf ("%d",&Num); //Guarda el número leído en la variable Num
	if (Num==3){
	printf ("El número introducido es el 3\n");
	}
	else {
	printf ("El número introducido no es el 3\n");
	}
	printf ("Fin del algoritmo");

	//Fin del programa
	return 0;
}


