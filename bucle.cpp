#include <stdio.h>
#include <math.h>

int main() {
    int inicio = 1;
    int fin = 20;

    for (int a = inicio; a <= fin; a++) {
        for (int b = a; b <= fin; b++) {
            double c = sqrt(a * a + b * b);

            // Verificar si los lados forman un triple pitagórico
            if (c == (int)c) {
                // Verificar si cumplen las condiciones de un triángulo
                if (a + b > c && a + c > b && b + c > a) {
                    printf("%d - %d - %.0lf\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
