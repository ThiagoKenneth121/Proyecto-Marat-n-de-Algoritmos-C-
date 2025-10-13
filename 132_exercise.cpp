// Ejercicio 132 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string s;
    if (!std::getline(std::cin, s)) return 0;
    std::reverse(s.begin(), s.end());
    std::cout << s << '\n';
    return 0;
}
