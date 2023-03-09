#include <stdio.h>
#include <math.h>

double varzyera_Anyezi(double x){
    return pow(1, 3) / (pow(1, 2) + pow(x, 2));
}

double lemniscate_Bernulli(double x){
    return sqrt(sqrt(pow(1, 4) + 4 * pow(x, 2) * pow(1, 2)) - pow(x, 2) - pow(1, 2));
}

double quad_giperbol(double x){
    return 1 / pow(x, 2);
}

int main()
{
    for (size_t i = 0; i < 42; i++)
    {
        double x = -M_PI + i * (2 * M_PI / 41.0);
        double v_A = varzyera_Anyezi(x);
        double l_B = varzyera_Anyezi(x);
        double q_q = quad_giperbol(x);
        v_A = isnan(v_A) == 0? v_A : '-';
        l_B = isnan(l_B) == 0? l_B : '-';
        q_q = isnan(q_q) == 0? q_q : '-';

        printf("%.7f | %.7f | %.7f | %.7f\n", x, v_A, l_B, q_q);

    }
 
    return 0;
}