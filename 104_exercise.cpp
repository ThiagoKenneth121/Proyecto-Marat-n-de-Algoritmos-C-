// Ejercicio 104 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
unsigned long long factorial(unsigned int n) {
    unsigned long long res = 1;
    for (unsigned int i = 2; i <= n; ++i) res *= i;
    return res;
}
int main() {
    unsigned int n;
    if (!(std::cin >> n)) return 0;
    std::cout << factorial(n) << '\n';
    return 0;
}
