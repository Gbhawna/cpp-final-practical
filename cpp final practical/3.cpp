#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float x, y, z, q;

public:
    Triangle() {}

    Triangle(float a, float b, float c)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Triangle(float b, float h)
    {
        this->y = y;
        this->q = q;
    }

    float area()
    {
        return area(this->x, this->y, this->z);
    }

    float area(float x, float y, float z)
    {
        float p = (x + y + z) / 2;
        return sqrt(p * (p - x) * (p - y) * (p - z));
    }

    // overloaded functions
    float area(float y, float q)
    {
        return (y + q) / 2;
    }
    // Overload assignment operator
    Triangle &operator=(const Triangle &triangle)
    {
        // do the copy
        this->x = triangle.x;
        this->y = triangle.y;
        this->z = triangle.z;
        return *this;
    }

    // equality operator.
    friend bool operator==(const Triangle &t1, const Triangle &t2)
    {
        return (t1.x == t2.x && t1.y == t2.y && t1.z == t2.z);
    }
};

int main()
{
    Triangle t1(15, 24, 32);
    cout << "Area of the tringle with sides : " << t1.area(15, 24, 32) << "\n";

    Triangle t2;
    cout << "Area of the tringle with base and height : " << t2.area(32, 15) << "\n";
    ;

    Triangle tCopy = t1;

    cout << "Area of the copy tringle " << tCopy.area(15,24,32) << "\n";

    if (t1 == tCopy)
    {
        cout << "The triangles are equal.\n";
    }
    else
    {
        cout << "The triangles are not equal.\n";
    }

    return 0;
}  