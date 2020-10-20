#include <cstdio>
#include <cmath>

/*
 * Вычисляемая функция
 */
double f(double x) {
    return ((pow(x, 2) + log(pow(x, 2) + 1)) / (x + pow(3.2, x * 2))) * (x - sin(x));
}

int main() {
    int choice = 0;

    printf("=============================\n");
    printf("|   Functional Calculator   |\n");
    printf("=============================\n");

    do {
        printf("Select option:\n");
        printf("1. Calculate single value\n");
        printf("2. Calculate tabulation value\n");
        printf("0. Exit from program\n");
        printf("> ");
        scanf("%d", &choice);

        switch (choice) {
            case 0: {
                break;
            }

            case 1: {
                double x;

                printf("Enter value of argument\n");
                printf("x = ");
                scanf("%lf", &x);

                printf("Result: %g\n\n", f(x));

                break;
            }

            case 2: {
                double min, max, step;

                printf("For tabulation, you need to enter next values:\n");
                printf("Min value > ");
                scanf("%lf", &min);
                printf("Max value > ");
                scanf("%lf", &max);
                printf("Tabulation step > ");
                scanf("%lf", &step);
                printf("Calculating...\n");

                for (double x = min; x <= max; x += step) {
                    printf("[x = %g]: %g\n", x, f(x));
                }

                printf("\n");

                break;
            }

            default: {
                printf("Incorrect command\n\n");
            }
        }
    } while (choice != 0);

    return 0;
}
