#include "cone.h"
#include <cmath>

using namespace std;

TruncatedCone::TruncatedCone() : Cone(), r2(2) {}

TruncatedCone::TruncatedCone(float x, float y, float z, float r1, float r2, float h) :
        Cone(x, y, z, r1, h), r2(r2) {}

void TruncatedCone::input() {
    std::cout << "Enter the center of the base (x y z): ";
    std::cin >> x >> y >> z;
    std::cout << "Enter the radius of the top: ";
    std::cin >> r2;
    std::cout << "Enter the radius of the base: ";
    std::cin >> r;
    std::cout << "Enter the height: ";
    std::cin >> h;
}

void TruncatedCone::output() const {
    std::cout << "Truncated cone with center (" << x << ", " << y << ", " << z
              << "), top radius " << r2 << ", base radius " << r << ", and height " << h << std::endl;
}

float TruncatedCone::surfaceArea() const {
    float slant_height1 = std::sqrt(r * r + h * h);
    float slant_height2 = std::sqrt(r2 * r2 + h * h);
    return M_PI * (r + r2) * slant_height1 + M_PI * r * r - M_PI * r2 * r2;
}

float TruncatedCone::volume() const {
    return M_PI * h * (r * r + r * r2 + r2 * r2) / 3;
}

bool TruncatedCone::operator==(const TruncatedCone& other) const {
    return x == other.x && y == other.y && z == other.z &&
           r == other.r && r2 == other.r2 && h == other.h;
}

bool TruncatedCone::operator!=(const TruncatedCone& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const TruncatedCone& cone) {
    os << cone.x << " " << cone.y << " " << cone.z << " " << cone.r << " " << cone.r2 << " " << cone.h;
    return os;
}

std::istream& operator>>(std::istream& is, TruncatedCone& cone)
{
    is >> cone.x >> cone.y >> cone.z >> cone.r >> cone.r2 >> cone.h;
    return is;
}