#include<bits/stdc++.h>
using namespace std;
class Account {
private :
    string accountNo;
    double balance;
public:
    Account(string accountNo, double balance) {
        this->accountNo = accountNo;
        this->balance = balance;
    }
    void deposit(double amount) {
        this->balance += amount;
    }
    bool withdraw(double amount) {
        if(amount <= this->balance) {
            this->balance -= amount;
            return true;
        }
        else {
            return false;
        }
    }
    virtual void printStatement() {
        cout<<"Your AccountNo: "<<this->accountNo<<endl;
        cout<<"Your Balance: "<<this->balance<<endl;
    }
    double get_balance() {
        cout<<"Your Balance: "<<this->balance<<endl;
        return this->balance;
    }
    string get_accountNo() {
        cout<<"Your AccountNo: "<<this->accountNo<<endl;
        return this->accountNo;
    }
};
class SavingsAccount : public Account {
private:
    double interestRate;
public:
    SavingsAccount(string accountNo, double balance, double interestRate) : Account(accountNo,balance) {
        this->interestRate = interestRate;
    }
    void printStatement() override {
        this->get_accountNo();
        this->get_balance();
        cout<<"Your Interest Rate: "<<this->interestRate<<endl;
    }
    double get_interestRate() {
        cout<<"Your Interest Rate: "<<this->interestRate<<endl; 
        return this->interestRate;
    }
};
class CheckingAccount : public Account {
private:
    double overdraftLimit;
public:
    CheckingAccount(string accountNo, double balance, double overdraftLimit) : Account(accountNo,balance) {
        this->overdraftLimit = overdraftLimit;}
    void printStatement() override {
        this->get_accountNo();
        this->get_balance();
        cout<<"Your Overdraft Limit: "<<this->overdraftLimit<<endl;}
    bool withdraw(double amount) {
        if(amount <= this->get_balance() + this->overdraftLimit) {
            this->deposit(-amount);
            return true;
        }
        else return false;
    }
};
int main() {
    SavingsAccount A("12456ABC",24000,1.5);
    A.get_accountNo();
    A.get_balance();
    A.get_interestRate();
    A.printStatement();
    CheckingAccount B("ABCDXYZ",10000, 10000);
    B.printStatement();
    B.deposit(200);
    B.printStatement();
    B.withdraw(20200);
    B.printStatement();
}