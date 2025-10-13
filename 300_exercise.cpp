// Ejercicio 300 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <string>
int main() {
    unsigned long long n; if (!(std::cin >> n)) return 0;
    if (n == 0) { std::cout << 0 << '\n'; return 0; }
    std::string s;
    while (n) { s.push_back(char('0' + (n & 1))); n >>= 1; }
    for (int i = (int)s.size()-1; i>=0; --i) std::cout << s[i];
    std::cout << '\n';
    return 0;
}
