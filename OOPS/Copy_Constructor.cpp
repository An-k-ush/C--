#include<bits/stdc++.h>
using namespace std;
class Milf {
    char milf_cup_size;
    int chest_size;

    public:
    char* pussy_color;
    Milf() {
        cout << "Constructor is Called : "<<endl;
        pussy_color = new char[100];
    }
    Milf(Milf* temp) {                                        // DEEP COPY CONSTRUCTOR
        cout << "Copy Constructor is called!!" << endl;
        char* ch = new char[strlen(temp->pussy_color) + 1];
        strcpy(ch, temp->pussy_color);
        this->chest_size = temp->chest_size;
        this->milf_cup_size = temp->milf_cup_size;
        this->pussy_color = ch;
    }
    void set_milf_cup(char ch) {
        milf_cup_size = ch;
    }
    void set_chest_size(int n) {
        chest_size = n;
    }
    void set_pussy_color(const char s[]) {
        strcpy(this->pussy_color,s);
    }
    void print_milf_details() {
        cout << "Cup Size --> " << milf_cup_size<<endl;
        cout << "Chest Size -->" << chest_size <<" cm" <<endl;
        cout << "Pussy Color -->" << pussy_color << endl;
    }
};
int main() {
    Milf Ankit;
    Ankit.set_chest_size(106);
    Ankit.set_milf_cup('E');
    Ankit.set_pussy_color("Pink");
    Milf Srijan(&Ankit);

    Srijan.print_milf_details();
    Ankit.set_chest_size(107);
    Srijan.print_milf_details();
    Ankit.print_milf_details();
    Ankit.set_milf_cup('A');
    Ankit.set_pussy_color("Red");
    Ankit.print_milf_details();
    Srijan.print_milf_details();
}