#include <stdio.h>

double sqrt(double r)
{
    double g=0,temp,last,dt,dl;
    while (g * g < r)
    {
        g += 0.03125f;
        if (g * g == r)
            return g;
    }
    g -= 0.03125f;
     last = (r < 1) ? 1 : r;
    for (int i = 0; i < 1000; i++)
    {
         temp = g;
        g = g + ((last - g) / 2);
         dt = r - (temp * temp);
         dl = r - (last * last);
        dt = (dt < 0) ? -dt : dt;
        dl = (dl < 0) ? -dl : dl;
        if (dt < dl)
        {
            last = temp;
        }
    }
    return g;
}

int main()
{
    double num;
    scanf_s("%lf", &num);
    sqrt(num);
    printf("%lf", sqrt(num));

    return 0;
}