#include "Vector.hpp"

int main() {
    Vector v1(1, 1); 
    Vector v2(2, 2); 

    Vector v3 = v1 + v2; 

    std::cout << "x of the v3 is: " << v3.x << " AND " << "y of the v3: "<< v3.y << std::endl; 
}