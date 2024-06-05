#include<bits/stdc++.h>
using namespace std;
class Triangle {
private:
    float side1,side2,side3;
public:
    Triangle(float s1,float s2,float s3) {
        side1 =s1;
        side2 =s2;
        side3 = s3;
    }
    float perimeter() {
        return side1 + side2 + side3;
    }
    float area() {
        float s = perimeter() / 2;
        return sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    cout << "Area: " << triangle.area()<<endl;
    cout << "Perimeter: " << triangle.perimeter()<<endl;
}
