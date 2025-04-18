#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

// // single inheritance
class Student : public Person{
public:
    int rollno;

    Student(string name,int age, int rollno) : Person(name,age){
        this-> rollno = rollno;
    }
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

//multilevel inheritance
class Person {
public:
    string name;
    int age;
};
// single inheritance
class Student : public Person{
public:
    int rollno;  
};

class GradStudent : public Student{
public:
    string researchTopic;
};




    // multiple inheritance
class Student{
public:
    string name;
        int rollno;  
    };
class Teacher{
public:
    string subject;
        double salary;  
    };

    
class TA : public Student,public Teacher{

    };

// hierarchical inheritance

class Person {
public:
    string name;
    int age;
};
class Student : public Person{
public:
    int rollno;  
}
class Teacher : public Person{
public:
    string subject;
}

// hybrid inheritance(mixed of all types of inheritance) 



int main(){
    TA t1;
    t1.name = "John";
    t1.subject = "Maths";
    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    return 0;
} 

// private member can't be inherited in derived class 