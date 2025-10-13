// Ejercicio 194 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <string>
int main() {
    std::string s;
    if (!std::getline(std::cin, s)) return 0;
    int cnt = 0;
    for (char c : s) {
        char lc = std::tolower(static_cast<unsigned char>(c));
        if (lc=='a'||lc=='e'||lc=='i'||lc=='o'||lc=='u') ++cnt;
    }
    std::cout << cnt << '\n';
    return 0;
}
