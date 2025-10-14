// Ejercicio 387 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n; if (!(std::cin >> n)) return 0;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    for (int i = 0; i + 1 < n; ++i)
        for (int j = 0; j + 1 < n - i; ++j)
            if (a[j] > a[j+1]) std::swap(a[j], a[j+1]);
    for (int i = 0; i < n; ++i) { if (i) std::cout << ' '; std::cout << a[i]; }
    std::cout << '\n';
    return 0;
}
