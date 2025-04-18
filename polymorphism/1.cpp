// compile time polymorphism
//eg is constructor overloading and function overloading

#include<iostream>
#include<string>
using namespace std;


class Print{
public:
    void show(int i){
        cout << "Integer: " << i << endl;
    }
    void show(double d){
        cout << "Double: " << d << endl;
    }
    void show(string s){
        cout << "String: " << s << endl;
    }
};

int main(){
//     Print p1;
// p1.show(5); // calls show(int)
// p1.show(5.5); // calls show(double) 
// p1.show("Hello"); // calls show(string)
// return 0 ;
}

// runtime polymorphism
//eg is function overriding
class Parent{
public:
    void getInfo(){
        cout << "Parent class" << endl;
    }

    virtual void hello(){
        cout << "Hello from Parent" << endl;
    }
};
class Child : public Parent{
public:
    void getInfo(){
        cout << "Child class" << endl;
    }
    void hello(){
        cout << "Hello from Child" << endl;
    }
};

int main(){
    // Parent p1;
    // Child c1;
    // c1.getInfo(); // calls child class getInfo() function
    Child c1;
    c1.hello(); // calls child class getInfo() function
    return 0;
}