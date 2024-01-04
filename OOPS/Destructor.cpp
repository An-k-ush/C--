#include<iostream>
#include<string>
using namespace std;


class Student {
    string name;
    int age;
    int id;
    int* marks;
public:
    Student() {
        cout << "Simple Constructor"<<endl;
    }
    Student(int age,int id,string name,int marks) {
        cout <<"Parameterised Constructor is called"<<endl;
        this->age=age;
        this->id=id;
        this->name = name;
        this->marks = new int(marks);                   // Memory Dynamically allocated should be deleted in the destructor
    }
    Student(const Student &s) {
        cout << "Copy Constructor is Called"<<endl;
        this->age = s.age;
        this->id = s.id;                      // This is just a Shallow Copy Constructor
        this->name = s.name;   
    }
    int getAge() const {
        return this->age;
    }
    int getID() const {
        return this->id;
    }
    string getName() const {
        return this->name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setID(int id){
        this->id = id;
    }
    void setName(string name) {
        this->name = name;
    }
    void printDet() {
        cout << "Name : "<<this->name<<endl;
        cout << "age : "<<this->age<<endl;
        cout << "id : "<<this->id<<endl;
    }
    ~Student() {                               // No Return Type is for Destructor/Constructor and this is how you do it
        cout << "Destructor is called"<<endl;
        delete this->marks;
    }
};

int main() {
    {
        Student s1(18,21,"Ankush",43);                 // Destructor is called as this Student doesnt exist outside this scope
    }
    Student s2;                         
//                                                    // Destructor is also called when the main function ends if there is
//                                                    // one object alive
}