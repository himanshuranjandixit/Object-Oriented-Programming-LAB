#include<iostream>
#include<string>
using namespace std;
class BankAccount {
private:
    string customer_Name;
    long long accountNumber;
    string accountType;
    double balance;
public:
    BankAccount(string name, long long accountNumber, string type, double bal) {
        customer_Name = name; 
        accountNumber = accountNumber;
        accountType = type;
        balance = bal;
    }
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        }
		else cout << "Invalid deposit amount." << endl;
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
		else cout<<"Insufficient balance or invalid withdrawal amount."<<endl;  
    }
    void display() {
        cout << "Depositor Name: " << customer_Name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount customers[10] = {
        BankAccount("Himanshu Dixit", 2312041, "Savings", 5000),
        BankAccount("chhota bheem", 2312042, "Current", 3000),
        BankAccount("Oggy",2312043, "Savings", 7000),
        BankAccount("jack",2312044, "Current", 2000),
        BankAccount("doreamon",2312045, "Savings", 6000),
        BankAccount("nobita",2312046, "Current", 4000),
        BankAccount("sizuka",2312047, "Savings", 8000),
        BankAccount("soneo",2312048, "Current", 1500),
        BankAccount("jian",2312049, "Savings", 9000),
        BankAccount("raju",2312050, "Current", 2500)
    };
    for (int i = 0; i < 10; i++) {
        cout <<"Customer"<< i + 1 << ":" << endl;
        customers[i].display();
        customers[i].deposit(10000);
        customers[i].withdraw(4500);
        customers[i].display();
    }
    return 0;
}
