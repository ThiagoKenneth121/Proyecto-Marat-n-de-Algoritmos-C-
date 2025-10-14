// Ejercicio 457 - Programa C++ compilable. Entrada: consulte el programa.
#include <iostream>
#include <vector>
int main() {
    int n,m; if (!(std::cin >> n >> m)) return 0;
    std::vector<std::vector<long long>> A(n, std::vector<long long>(m));
    std::vector<std::vector<long long>> B(n, std::vector<long long>(m));
    for (int i=0;i<n;++i) for (int j=0;j<m;++j) std::cin >> A[i][j];
    for (int i=0;i<n;++i) for (int j=0;j<m;++j) std::cin >> B[i][j];
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            if (j) std::cout << ' ';
            std::cout << (A[i][j] + B[i][j]);
        }
        std::cout << '\n';
    }
    return 0;
}
