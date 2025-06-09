#include <iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        // getter 
        double getBalance() const {
            return balance;
        }

        // Methid to deposite money 
        void deposite(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposite amount";
            }
        }

        void withdraw(double amount) {
            if(amount > 0 && amount <= balance){
                balance -= amount;
            } else {
                cout << "Invalid withdrawn amount" << endl;
            }
        }
};

int main(){
    BankAccount myAccount("12345557", 500);
    
    myAccount.getBalance();
    myAccount.deposite(200);
    myAccount.withdraw(100);
    return 0;
}