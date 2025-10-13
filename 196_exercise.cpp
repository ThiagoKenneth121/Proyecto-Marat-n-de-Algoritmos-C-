// Ejercicio 196 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <vector>
int main() {
    int n; if (!(std::cin >> n)) return 0;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    long long s = 0;
    for (int i = 0; i < n; ++i) { s += a[i]; if (i) std::cout << ' '; std::cout << s; }
    std::cout << '\n';
    return 0;
}
