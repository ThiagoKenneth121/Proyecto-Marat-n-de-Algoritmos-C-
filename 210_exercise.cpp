// Ejercicio 210 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
long long gcd(long long a, long long b) {
    while (b) { long long t = a % b; a = b; b = t; }
    return a < 0 ? -a : a;
}
int main() {
    long long a, b;
    if (!(std::cin >> a >> b)) return 0;
    if (a == 0 || b == 0) { std::cout << 0 << '\n'; return 0; }
    long long l = (a / gcd(a,b)) * b;
    if (l < 0) l = -l;
    std::cout << l << '\n';
    return 0;
}
