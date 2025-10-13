// Ejercicio 139 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
int main() {
    long long n; if (!(std::cin >> n)) return 0;
    if (n == 0) { std::cout << 1 << '\n'; return 0; }
    if (n < 0) n = -n;
    int cnt = 0;
    while (n) { n /= 10; ++cnt; }
    std::cout << cnt << '\n';
    return 0;
}
