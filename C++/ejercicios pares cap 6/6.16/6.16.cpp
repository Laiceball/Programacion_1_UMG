#include <cstdlib>   // para rand() y srand()
#include <ctime>     // para time()

// Asumiendo que ya se llamó srand(time(0)) para randomizar

a) n = 1 + rand() % 2;                    // 1 ≤ n ≤ 2
b) n = 1 + rand() % 100;                  // 1 ≤ n ≤ 100
c) n = rand() % 10;                       // 0 ≤ n ≤ 9
d) n = 1000 + rand() % (1112 - 1000 + 1); // 1000 ≤ n ≤ 1112
e) n = -1 + rand() % 3;                   // -1 ≤ n ≤ 1
f) n = -3 + rand() % 15;                  // -3 ≤ n ≤ 11  (rango = 15 valores)
