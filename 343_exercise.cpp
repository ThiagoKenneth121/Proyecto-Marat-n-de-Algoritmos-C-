// Ejercicio 343 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
    std::cout << (n % 2 == 0 ? "Par\n" : "Impar\n");
    return 0;
}
