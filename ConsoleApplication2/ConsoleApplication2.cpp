#include <iostream>
#include <cmath>

#define x -2.75
#define y -1.42
#define func_w(x, y) (1 / (x * log(pow((x + y), 2))))
#define func_f(x, y, z) pow(cos(z), 2) + pow(abs(x), 3) + pow(y, 2);
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double z = func_w(x, y);
    double b = func_f(x, y, z);
    cout << b << endl;
    return 0;
}
