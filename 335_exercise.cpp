// Ejercicio 335 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <vector>
int main() {
    int n; if (!(std::cin >> n)) return 0;
    long long sum = 0;
    for (int i = 0; i < n; ++i) { long long x; std::cin >> x; sum += x; }
    std::cout << sum << '\n';
    return 0;
}
