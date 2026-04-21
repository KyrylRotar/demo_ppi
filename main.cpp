#include <iostream>
#include <cmath>

class GeometryCalc {
public:

    virtual double squareCircle(double r) { return 0; }    // Учасник 1
    virtual double squareRectangle(double a, double b) { return 0; } // Учасник 2
    virtual double squareTriangle(double a, double h) { return 0; }  // Учасник 3
    virtual double squareTrapezoid(double a, double b, double h) { return 0; } // Учасник 4
};

int main() {
    GeometryCalc calc;
    std::cout << "--- Geometry Calculator ---" << std::endl;
    // Сюди учасники будуть додавати виклик своїх методів
    return 0;
}