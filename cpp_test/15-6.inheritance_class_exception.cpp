//
//  15-5.class_exception.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/25/23.
//

#include <iostream>
#include <cstring>

using namespace std;

class AccountException {
public:
    virtual void showExceptionReasons() = 0;
};


class DepositException : public AccountException {
private:
    int requestingDeposit;
    
public:
    DepositException(int money) : requestingDeposit(money) {};
    
    void showExceptionReasons() {
        cout << "[Exception Message] : " << this->requestingDeposit << " cannot be deposited" << endl;
    }
};


class WithdrawException : public AccountException {
private:
    int balance;
    
public:
    WithdrawException(int money) : balance(money) {};
    void showExceptionReasons () {
        cout << "[Exception Message]: " << "Money is not enough" << endl;
    }
};


class Account {
private:
    char accountNumber[50];
    long long balance;

public:
    Account(const char* accountNumber, long long money) : balance(money) {
        strcpy(this->accountNumber, accountNumber);
    }
    
    void deposit(long long money) noexcept(false) {
        if (money < 0) {
            DepositException expn(money);
            throw expn;
        }
        
        balance += money;
    }
    
    void withdraw(long long money) noexcept(false) {
        if (money > this->balance)
            throw WithdrawException(balance);
        
        this->balance -= money;
    }
    
    void showLeftMoney() {
        cout << "left money: " << this->balance << endl << endl;
    }
};

int main_15_6() {
    Account account1("1234-5678", 10000000000);
    
    try {
        account1.deposit(10000000000);
        account1.deposit(-100000000);
    }
    catch (DepositException& expn) {
        expn.showExceptionReasons();
    }
    account1.showLeftMoney();
    
    try {
        account1.withdraw(100000000);
        account1.withdraw(100000000000);
    }
    catch (WithdrawException& expn) {
        expn.showExceptionReasons();
    }
    account1.showLeftMoney();
    
    return 0;
}
