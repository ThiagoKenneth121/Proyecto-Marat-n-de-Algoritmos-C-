// Ejercicio 051 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <cmath>
int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
    if (n <= 1) { std::cout << "No primo\n"; return 0; }
    for (long long i = 2; i*i <= n; ++i) if (n % i == 0) { std::cout << "No primo\n"; return 0; }
    std::cout << "Primo\n";
    return 0;
}
