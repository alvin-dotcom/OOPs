#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    //constructor(always in public)
    // ek class ke under diff constructors bana skte hai but unke types alag hone chahiye = constructor overloading
    //1.non parameterized constructor
    Teacher(){
        dept = "Computer Science";
    };
    //2.parameterized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    };
    //this prop 
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    };
    //types of constructors
    //1.non parameterized constructor
    //2.parameterized constructor
    //3.copy constructor(this prop)


    //properties/attributes
    // string name;
    // string dept;
    // string subject;

    //copy constructor
    Teacher(Teacher &orgObj){
        cout << "i am custom copy constructor"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;   
    }
    

     //methods/member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter function to set the value
    void setSalary(double s){
        salary = s;
    }
    //getter function to get the value
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<< "name: " << name <<endl;
        cout<< "subject: " << subject <<endl;
    }
};

//encapsulation
class Account{
private:
    double balance; //data hiding
    string password;
public:
    string accountId;
    string username;
};

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa; //dereferncing ptr
    }
    //copy constructor
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    //deep copy
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    //destructor
    ~Student(){
        cout << "Hi i am a destructor!!"; // auto. compiler bana deta hai
        delete cgpaPtr; //memory leak

    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};







int main(){
    //object
    // Teacher t1("Alvin","CSE","C++",25000); //constructor automatically called
    // // t1.getInfo();

    // Teacher t2(t1); //copy constructor
    // t2.getInfo();

    Student s1("Alvin",9.1);
    // Student s2(s1);
    s1.getInfo();
    // *(s2.cgpaPtr) = 9.2; // shallow copy
    // s1.getInfo();
    // s2.name = "Neha";
    // s2.getInfo();
    return 0; 
}