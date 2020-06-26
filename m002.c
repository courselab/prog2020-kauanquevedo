/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a, int *b, int *c)
{ 
  int x, y;
  if ((*c>*a) && (*c>*b) && (*b>*a))
       {
           *a = *a; *b = *b; *c = *c;
      }else
            if ((*c>*a) && (*c>*b) && (*a>*b))
            {
                *c = *c; x = *b; *b = *a; *a = x;
            }else
                if ((*b>*a) && (*b>*c) && (*c>*a))
                {
                    *a = *a; x = *b; *b = *c; *c = x;
                }else
                    if ((*b>*a) && (*b>*c) && (*a>*c))
                    {
                     x = *a; y = *b; *a = *c; *b = x; *c = y;
                    }else
                        if ((*a>*b) && (*a>*c) && (*c>*b))
                        {
                            x = *a; *a = *b; *b = *c ; *c = x;
                        }   else
                         if((*a>*b) && (*a>*c) && (*b>*c))
                            {x = *a; *a = *c; *b = *b; *c = x;
                        }else
                            if ((*a == *b) && (*a == *c) & (*c == *b))
                                {
                                    *a = *a; *b = *b; *c = *c;
                                }
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
