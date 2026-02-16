#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0)
            cout << "* * * * * * * *" << endl;
        else
            cout << " * * * * * * * *" << endl;
    }
    return 0;
}
