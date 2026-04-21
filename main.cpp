#include <iostream>
#include <cmath>

class GeometryCalc {
public:

    virtual double squareCircle(double r) {
        return M_PI * std::pow(r, 2);
    }   // Учасник 1

    virtual double squareRectangle(double a, double b) {
    return a * b;
}
    virtual double squareTriangle(double a, double h) { return 0; }  // Учасник 3
    virtual double squareTrapezoid(double a, double b, double h) { return 0; } // Учасник 4
};

int main() {
    GeometryCalc calc;
    std::cout << "--- Geometry Calculator ---" << std::endl;

    // Функціонал Кирила
    std::cout << "Circle Area (r=5): " << calc.squareCircle(5) << std::endl;

    // Перевірка Стаса
    std::cout << "Rectangle Area (5x4): " << calc.squareRectangle(5, 4) << std::endl;
    return 0;
}