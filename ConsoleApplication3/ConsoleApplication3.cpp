#include <iostream>
#include <cmath>

using namespace std;

double calculateFunction(double alpha) {
    double pi = 3.14159265358979323846;
    double numerator = sin(pi / 2 + 3 * alpha);
    double denominator = 1 - sin(3 * alpha - pi);
    return numerator / denominator;
}

int main() {
    setlocale(LC_ALL, "ru");
    double alpha;
    cout << "Введите значение a: ";
    cin >> alpha;
    cout << "Значение функции: " << calculateFunction(alpha) << endl;
    return 0;
}
