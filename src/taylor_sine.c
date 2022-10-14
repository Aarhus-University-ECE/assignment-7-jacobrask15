#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>
#include <assert.h>


/* need a faculty function for tayler series*/ 
double fac(double k) {
 double temp = k; /* previous factorial*/
 double final; /* final factorial*/

assert(k>0); /*precondition*/

    for (int i=k-1; i>1; i--) {
        final = temp*i; 
        temp = final;
    }
return final;
}


double taylor_sine(double x, int n)
{

int i = 1; /* loop counter determine when to + or - */
int j = 3; /* pow and fac counter */
double result = x;

while (i<=n) {

    if (i%2==1) {   /* first and then every second step */
        result -= pow(x, j)/fac(j);   
    }

    else {      /* i%2==0 for second and then every second step */
        result += pow(x, j)/fac(j); 
    }

    i++; /* to do next step */
    j+=2; /* this counter increases with 2 each time*/

}

return result;

}
