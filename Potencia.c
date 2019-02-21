//Libreria
#include <stdio.h>

int main()
{
  //Este programa calcula la potencia de un numero


     //Declaro las variables
     int base,exp,pot,i;

	 printf ("Escribe un numero (base): ");
	 scanf ("%d", &base);

 	printf ("Escribe un exponente (exponente): ");
        scanf ("%d", &exp);


        //Compruebo que la base y el exponente son mayores que 1
        if ((base >=1) && (exp>=1))
       {
        
        //Inicializo las variables
        pot =1;
        i=1;
              
               while (exp>=1){

               pot= pot*base;
               exp= exp-1;
               }	
	
		printf ("La potencia es %d\n", pot);
        }
        else 
         {
          printf ("La base y el exponente tienen que ser mayores o iguales que 1");
         }
  //Fin del programa
  return 0;
}
