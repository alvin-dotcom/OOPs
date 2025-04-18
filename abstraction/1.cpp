 #include <iostream>
 #include <string.h>

 using namespace std;

class Shape{ // abstract class
    virtual void draw() = 0; // pure virtual function
};
class Circle : public Shape{
    public:
        void draw(){
            cout << "drawing circle\n";
    }
};
 
//static keyword and friend function and friend class




 int main(){
    Circle c1;
    c1.draw();
    
    return 0;

 }