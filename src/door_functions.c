#include <math.h>
#include <stdio.h>

double varzyera_Anyezi(double x) { return pow(1, 3) / (pow(1, 2) + pow(x, 2)); }

double lemniscate_Bernulli(double x) {
    return sqrt(sqrt(pow(1, 4) + 4 * pow(x, 2) * pow(1, 2)) - pow(x, 2) - pow(1, 2));
}

double quad_giperbol(double x) { return 1 / pow(x, 2); }

int main() {
    FILE* file = fopen("data/door_data.txt", "w");
    if (file == NULL) {
        printf("Error occured while opening file");
        return 1;
    }

    for (double x = -M_PI; x <= M_PI; x += (2 * M_PI) / 41.0) {
        double v_A = varzyera_Anyezi(x);
        double l_B = lemniscate_Bernulli(x);
        double q_q = quad_giperbol(x);

        fprintf(file, "%lf", x);
        fprintf(file, " | ");

        if (!isnan(v_A))
            fprintf(file, "%.7lf", v_A);
        else
            fprintf(file, " - ");

        fprintf(file, " | ");

        if (!isnan(l_B))
            fprintf(file, "%.7lf", l_B);
        else
            fprintf(file, " - ");

        fprintf(file, " | ");

        if (!isnan(q_q))
            fprintf(file, "%.7lf", q_q);
        else
            fprintf(file, " - ");

        fprintf(file, "\n");
    }

    fclose(file);

    return 0;
}
