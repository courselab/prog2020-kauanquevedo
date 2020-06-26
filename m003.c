/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{
 int cont;          /*Contar quantas restos deram 0.*/
 int primo;         /*Verificar se é primo ou não. */
 int i, resto;  
 if (a == 1)
    {primo = 0;}
    
  else 
  {  
     cont = 0;
     for (i = a ; i > 1; i--)
     {
         resto = a%i;
            if (resto == 0)
                {cont = cont + 1;}
     }
     if (cont > 1)           
     {primo = 0;}
     else
     {primo = 1;}
  }

  return primo;
}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
