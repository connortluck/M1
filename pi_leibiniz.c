#include <stdio.h>

//Uses the Leibniz series to calculate pi

double pi_leibiniz (int z);

double pi_leibiniz (int z)
{
    double a = 0.;
    int b = 1;

    for (int i = 0; i < z; i++)
    {
        double c = 4. * b / (2. * i + 1);

        b = -b;
        a = a + c;
    }
    return a;
}

