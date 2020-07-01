/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{ 
  char t[MAX];
  int i, j, k, l, m, n, o, p, q, r;
  int count1;
  int count2;
  int TAM;
  count1 = 0;
  count2 = 0;
  k = 0;
  l = 0;
  n = 0;
  p = 0;


  strcpy (t, s);
  TAM = strlen(t);
  
  
 for (i = 0; i <= MAX; i++)
      {  
          k = (t[i]);
          if (k == ' ' )   
              count1 = i;
      } 
  for(j = count1 + 1; j <= MAX ; j++)
  {
    if ((t[j] >= 'A') && (t[j] <= 'Z'))
    {
    s[l] = (t[j]) ;    
    l++;
    }else
    {
      s[l] = (t[j - 32]) ;    
      l++;

    }         
  }

  q = (TAM - 1 - count1 -1);
  (s[q]) = ',';
  (s[q + 1]) = ' ';
  
  for (m = 0; m <= MAX; m++)         
    { 
        n = (t[m]);
        if (n == ' '){
          count2 = m;
        break;}
    }  

  for(o = (count2 + 1); o < count1 ; o++)
  {
    s[o] = t[p] ;
    
    p++;

  }




  



  

}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
