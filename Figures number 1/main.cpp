//
//  main.cpp
//  Figures number 1
//
//  Created by Александр Нестеров on 8/1/24.
//

#include <iostream>

class Figure {
protected:
    std::string name;
    int sides_count;
protected:
    Figure(std::string name, int sides_count) : name(name), sides_count(sides_count) {}
public:
    Figure() : Figure("Фигура", 0) {}
    int get_sides_count() const {
        return sides_count;
    }
    std::string get_name() const {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure("Треугольник", 3) {}
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure("Четырёхугольник", 4) {}
};

int main() {
    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;
    std::cout << "Количество сторон:\n";
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;
    return 0;
}
