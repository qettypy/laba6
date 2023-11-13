#include <iostream>

using namespace std;

void drawIsoscelesTriangle(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawIsoscelesTrapezoid(int height, int base) {
    int width = 2 * base - 1;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < (width - (2 * i + 1)) / 2; ++j) {
            cout << "    ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "****";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "");
    int height, base;

    cout << "Введите высоту треугольника и трапеции: ";
    cin >> height;

    cout << "Введите основание трапеции: ";
    cin >> base;

    cout << "Равнобедренный треугольник:\n";
    drawIsoscelesTriangle(height);

    cout << "\nРавнобедренная трапеция:\n";
    drawIsoscelesTrapezoid(height, base);

    return 0;
}