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
   virtual double squareTriangle(double a, double h) {
    return 0.5 * a * h;
}

virtual double squareTrapezoid(double a, double b, double h) {
    return 0.5 * (a + b) * h;
}
};

int main() {
    GeometryCalc calc;

    std::cout << "Geometry Calculator by Stas and Kyryl";

    // Функціонал Кирила
    std::cout << "Circle Area (r=5): " << calc.squareCircle(5) << std::endl;

    // Перевірка Стаса
    std::cout << "Rectangle Area (5x4): " << calc.squareRectangle(5, 4) << std::endl;

    //Функціонал Іллі
    std::cout << "Trapezoid Area (a=4, b=6, h=3): " << calc.squareTrapezoid(4, 6, 3) << std::endl;

    // Функціонал Дениса
    std::cout << "Triangle Area (a=6, h=3): " << calc.squareTriangle(6, 3) << std::endl;

    return 0;
}
