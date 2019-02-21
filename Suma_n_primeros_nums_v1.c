//Libreria que contiene las funciones scanf y printf
#include <stdio.h>

//Funcion principal del programa
int main()
{
  //Este programa calcula la suma de los primeros n números

  //Declaro las variables de mi función
  int Num,Total,i;
  
  //Sustituyo la funcion ESCRIBA "cadena" por printf
  printf("Escribe cuantos numeros quieres sumar: ");
  
  //Sustituyo la funcion LEA Num por scanf
  scanf("%d", &Num);  //Guarda el numero leido en la variable Num


  //Inicializo las variables
  Total = 0 ;
  i = 1;
  
  //Compruebo si el numero introducido es mayor o igual que 1
  if (Num >= 1) {
    //Hago el bucle para sumar hasta que i valga n
    while (i <= Num) {
      //calculo la suma parcial
      Total = Total + i;
      i= i+ 1;
    }
    
    //Sustituyo la funcion ESCRIBA "cadena" por printf
    printf("La suma es: %d\n", Total);
   }
 
   else{
    printf("El numero ha de ser mayor o igual que 1");
    }
   //Fin del programa
     return 0;
}
