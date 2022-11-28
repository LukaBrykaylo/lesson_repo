#include <stdio.h>
#include <math.h>
/*First lab*/
int main()
{
   float x = 2.735;
   float z = 7.218;
   float i;

   // scanf("%f %f", &x, &z);
   
   i = pow((((z + x) / cos(x)) + sqrt(fabs(sin(x) * cos(x)))), 2) + 16 * z;

   printf("%f", i);

   return 0;
}