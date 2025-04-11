#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:

    void leng(float a) {
        length = a;
    }

    void bread(float b) {
        breadth = b;
    }


     float   area() {
       return  length * breadth;
    }


    float leng() {
        return length;
    }

    float bread() {
        return breadth;
    }



};

int main() {

    Rectangle rec;


    float a, b;

    cout << "length of the rectangle ";
    cin >> a;
    cout << "breadth of the rectangle  ";
    cin >> b;


    rec.leng(a);
    rec.bread(b);


    cout << "area of the rectangle is" << rec.area() << endl;


}
