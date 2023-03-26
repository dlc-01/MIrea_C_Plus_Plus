#include <iostream>
#include <cmath>
#include <windows.h>


using namespace std;

const double pi = 3.14159265;

// Класс конуса.
class Cone {
    double x, y, z;        // трехмерные координаты
    double radius;         // радиус
    double height;         // высота
public:
    // Конструктор по умолчанию
    Cone() { x=y=z=radius=height=0; }
    // Конструктор с центром в начале координат
    Cone(double r, double h) {
        x = y = z = 0.0;
        radius = r;
        height = h;
    }
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }

    // Функции доступа
    void setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
    void setRadius(double r) { radius = r; }
    void setHeight(double h) { height = h; }
    double getRadius() { return radius; }
    double getHeight() { return height; }

    // Площадь полной поверхности
    double area() {
        double l = sqrt(height*height + radius*radius);
        return pi*radius*(radius+l);
    }
    // Объем
    double volume() {
        return pi*radius*radius*height/3;
    }

    // Перегрузка оператора вывода
    friend ostream &operator<<(ostream &stream, Cone obj);
};

// Вывод данных конуса
ostream &operator<<(ostream &stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Cone c1(3, 7);              // Конус с центром в начале координат с радиусом 3 и выотой 7
    Cone c2(1, 2, 3, 5, 10);    // Произвольный конус

    cout << "Конус 1: " << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";

    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";


    return 0;
}