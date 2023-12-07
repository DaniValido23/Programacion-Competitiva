# Pascal

```cpp
#include <iostream>

// Función para calcular el coeficiente binomial C(n, k)
int calcularCoeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return calcularCoeficienteBinomial(n - 1, k - 1) + calcularCoeficienteBinomial(n - 1, k);
    }
}

// Función para imprimir el triángulo de Pascal hasta el nivel dado
void imprimirTrianguloPascal(int niveles) {
    for (int i = 0; i < niveles; i++) {
        // Alinea los coeficientes binomiales en el centro de cada fila
        for (int espacio = 0; espacio < niveles - i - 1; espacio++) {
            std::cout << "   ";
        }

        // Calcula y muestra los coeficientes binomiales de la fila actual
        for (int j = 0; j <= i; j++) {
            std::cout << "   " << calcularCoeficienteBinomial(i, j);
        }

        std::cout << std::endl;
    }
}

int main() {
    int niveles;

    // Solicitar al usuario el número de niveles para el triángulo de Pascal
    std::cout << "Ingrese el número de niveles para el triángulo de Pascal: ";
    std::cin >> niveles;

    // Imprimir el triángulo de Pascal
    imprimirTrianguloPascal(niveles);

    return 0;
}
3+