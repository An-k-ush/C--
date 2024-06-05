#include<bits/stdc++.h>
using namespace std;
class Book {
private:
    string title,author;
    int publ_year;
public:
    Book(string title, string author, int publ_year) {
        this->title = title;
        this->author = author;
        this->publ_year = publ_year;}
    void get_title() {
        cout<<this->title<<endl;}
    void get_author() {
        cout<<this->author<<endl;}
    void get_publ_year() {
        cout<<this->publ_year<<endl;}
};
class Fiction : public Book {
private:
    string genre;
public:
    Fiction(string t, string a, int p, string g) : Book(t,a,p) {
        this->genre = g;}
    void get_genre() {
        cout<<this->genre<<endl;}
};
class NonFiction : public Book {
private :
    string topic;
public:
    NonFiction(string t, string a, int p, string to) : Book(t,a, p) {
        this->topic = to;
    }
    void get_topic() {
        cout<<this->topic<<endl;}
};
int main() {
    Fiction TalesFromShakespeare("Tales from Shakespeare","Charles & Mary Lamb",1807,"Tragedy & Comedy");
    TalesFromShakespeare.get_author();
    TalesFromShakespeare.get_title();
}