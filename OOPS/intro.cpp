#include<bits/stdc++.h>
using namespace std;
// Class is user defined data type template
class hero {
    // By Default it is private
    // If a property is private we can't access it from outside the class
    // Class already have one default constructor but you can make one of your own
    int health;
    int level;
    public:
    hero() {
        // Simple Constructor
        cout << "Constructor is called"<<endl;           // Note that constructor dont have any return type not even void
    }
    hero(int health, int level) {
        // Parameterised Constructor
        this->health = health;
        this->level = level;                             // You can create multiple constructor 
    }
    void setlevel(int level) {              // Note when you create any constructor default constructor no longer exist
        this->level = level;                // So it cant be used again
    }
    int getlevel() {
        return level;
    }
    void sethealth(int health) {
        this->health = health;
    }
    int gethealth() {
        return health;
    }
};  // Notice this semicolon
int main() {
    hero h1(50, 10);
    cout << h1.gethealth()<<endl;
    h1.sethealth(100);
    cout << h1.gethealth()<<endl;
    h1.setlevel(15);
    cout <<h1.getlevel();
}