// Ejercicio 028 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n; if (!(std::cin >> n)) return 0;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    long long target; std::cin >> target;
    std::sort(a.begin(), a.end());
    int l = 0, r = n-1; bool found = false;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == target) { found = true; break; }
        if (a[m] < target) l = m + 1; else r = m - 1;
    }
    std::cout << (found ? "Encontrado\n" : "No encontrado\n");
    return 0;
}
