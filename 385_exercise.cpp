// Ejercicio 385 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <vector>
int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    if (n <= 0) { std::cout << '\n'; return 0; }
    std::vector<unsigned long long> f(n);
    f[0] = 0;
    if (n > 1) f[1] = 1;
    for (int i = 2; i < n; ++i) f[i] = f[i-1] + f[i-2];
    for (int i = 0; i < n; ++i) {
        if (i) std::cout << ' ';
        std::cout << f[i];
    }
    std::cout << '\n';
    return 0;
}
