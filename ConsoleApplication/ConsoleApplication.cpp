#include <iostream>
#include <cmath>
#define y 2
#define z 4
#define t sin(2 + z)
#define x 6*pow(t, 2) - (1 / tan(z) + 1) / pow(y, 2)
using namespace std;

int main() {
    printf("%f", x);
   
    return 0;
}