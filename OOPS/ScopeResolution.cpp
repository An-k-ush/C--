#include<iostream>

class item {
    std::string name;
    int price;
public:
    void setPrice(int price);
    void setName(std::string name);
    std::string getName();
    int getPrice();
};

void item::setPrice(int price) {
    this->price = price;
}

void item::setName(std::string name) {
    this->name = name;
}

std::string item::getName() {
    return this->name;
}

int item::getPrice() {
    return this->price;
}

int main() {
    item laptop;
    laptop.setName("laptop");
    laptop.setPrice(49999);
    std::cout << laptop.getPrice();
    std::cout << "\n" << laptop.getName();
}