// Ejercicio 433 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <string>
#include <cctype>
int main() {
    std::string s;
    if (!std::getline(std::cin, s)) return 0;
    std::string t;
    for (char c : s) if (!std::isspace(static_cast<unsigned char>(c))) t.push_back(std::tolower(static_cast<unsigned char>(c)));
    bool pal = true;
    for (size_t i = 0; i < t.size()/2; ++i) if (t[i] != t[t.size()-1-i]) { pal = false; break; }
    std::cout << (pal ? "Palindrome\n" : "No palindrome\n");
    return 0;
}
