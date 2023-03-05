#include <iostream>


class Vector {
    public: 
        double x, y; 
        Vector(double x, double y) : x(x), y(y) {}

        // Overload the '+' operator
        Vector operator+(const Vector& other) const {
            return Vector(x + other.x, y + other.y);          
        }

        // Overload the '-' operator
        Vector operator-(const Vector& other) const {
            return Vector(x - other.x, y - other.y); 
        }

        // Overload the '*' operator (scalar multiplication)
        Vector operator*(double scalar) const {
            return Vector(x * scalar, y * scalar); 
        }
}; 
    