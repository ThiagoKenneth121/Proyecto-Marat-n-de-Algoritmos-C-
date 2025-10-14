// Ejercicio 349 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
long long gcd(long long a, long long b) {
    while (b) { long long t = a % b; a = b; b = t; }
    return a < 0 ? -a : a;
}
int main() {
    long long a, b;
    if (!(std::cin >> a >> b)) return 0;
    std::cout << gcd(a, b) << '\n';
    return 0;
}
