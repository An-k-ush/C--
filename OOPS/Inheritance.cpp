#include<bits/stdc++.h>
using namespace std;

class Bird {
private:                                     //   Parent Class pointer can point to the object any of its descendant class
    bool eating = false;                     //   But Converse is not True
    bool flying  = false;
public:
    string name;
    string color;
    int age;
    float weight;
    void eat() {
        if(this->eating) {
            this->eating = false;
            cout << name <<" stopped eating"<<endl;
        }
        else {
            this->eating = true;
            cout << name <<" is eating"<<endl;
        }
        
    }
    void fly() {
        if(this->flying) {
            this->flying = false;
            cout <<name <<" stopped flying "<<endl;
        }
        else {
            this->flying = true;
            cout << name << " is flying"<<endl;
        }
    }
    Bird() {
        cout << "Simple Parent Constructor is called" <<endl;
    }
    Bird(string name, string color, int age, float weight) {
        cout << "Parameterised Parent Constructor is called"<<endl;
        this->name = name;
        this->color = color;
        this-> age = age;
        this->weight = weight;
    }
    ~Bird(){
    }
};

class Pigeon : public Bird {                 // Modes of Abstraction if Public : Only Public information will come as Public
private:                                     // if Protected : Only Public and Protected information will come as Protected
    bool guttering = false;                  // if Private :  Only Protected, Public Information will come as Private
public :                                     // No Private inforamtion can be derived from the Parent Class
    void gutter() {
        if(this->guttering) {
            this->guttering = false;
            cout << this->name<<" stopped guttering"<<endl;
        }
        else {
            this->guttering = true;
            cout << this->name << " started guttering" <<endl;
        }
    }
    Pigeon() {
        cout << "Simple Derived Constructor"<<endl;
    }
    Pigeon(string name, string color) : Bird(name,color , 2, 2.5)   {                       // Parameterised constructors
        cout << "Parameterised Derived Constructor"<<endl;                                      //using inheritance VERY IMPORTANT
        
    }
    //    We can combine Constructor of derived class with Constructor of Parent Class by 
    //    >>>> Derived_Class_Name(xxxxxx) : Parent_Class_Name(xxxxx) {} 



    Pigeon(string name, string color, int age, float weight) {
        cout << "2nd Parameterised COnstructor of Child Class"<<endl;
        this->name = name;
        this->color = color;
        this->age = age;
        this->weight = weight;
    }
};

int main() {
    Pigeon Alex("Alex","Blue",2,1.2);
    cout << Alex.weight<<endl;
}