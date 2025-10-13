// Ejercicio 266 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <limits>
int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    long long mx = std::numeric_limits<long long>::min();
    long long mn = std::numeric_limits<long long>::max();
    for (int i = 0; i < n; ++i) {
        long long x; std::cin >> x;
        if (x > mx) mx = x;
        if (x < mn) mn = x;
    }
    std::cout << mx << " " << mn << '\n';
    return 0;
}
