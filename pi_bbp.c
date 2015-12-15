#include <stdio.h>

// Uses the BBP method to calculate pi

double pi_bbp (int z);

double pi_bbp (int z)
{
    double a = 0.;
    double b;
    double c = 0;
    double d = 16;

    for (int i = 0; i < z; i++)
    {
        d = (1. / 16.) * d;
        c = 8. * ((double) i);
        b =
            d * ((4. / (c + 1.)) - (2. / (c + 4.)) - (1. / (c + 5.)) -
            (1. / (c + 6.)));
        a = b + a;
    }
    return a;
}
 
