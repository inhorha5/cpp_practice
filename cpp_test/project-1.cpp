//
//  project-1.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/26/23.
//

#include <iostream>
#include <stdio.h>

using namespace std;

const int NAME_NAME_LEN = 10;

class Account {
private:
    int accountID = 0;
    int balance = 0;
    char customerName[NAME_NAME_LEN] = "";
public:
    Account(){
        this->accountID = 0;
        this->balance = 0;
        strcpy(this->customerName, "");
    }
    Account(int accountID, int balance, char customerName[NAME_NAME_LEN]){
        this->accountID = accountID;
        this->balance = balance;
        strcpy(this->customerName, customerName);
    }
    Account(Account& copy) : accountID(copy.accountID), balance(copy.balance){
        strcpy(this->customerName, copy.customerName);
    }
    
    void deposit(int deposit){
        if(deposit < 0) {
            cout << "입금액은 양수 이어야 합니다." << endl;
        }
        else{
            this->balance += deposit;
            cout << "입금완료." << endl;
        }
    }
    
    void withdraw(int withdraw){
        if(withdraw < 0) {
            cout << "출금액은 양수 이어야 합니다." << endl;
        }
        else if(withdraw > this->balance){
            cout << "잔액이 부족합니다." << endl;
        }
        else{
            this->balance -= withdraw;
            cout << "출금완료." << endl;
        }
    }
    const void showAccountInformation(){
        cout << "계좌ID: " << this->accountID << endl;
        cout << "이  름: " << this->customerName << endl;
        cout << "잔  액: " << this->balance << endl << endl;
    }
    const int getAccountID(){
        return this->accountID;
    }
    ~Account(){
//        delete[] this->customerName;
//        cout << "Account Deleted" << endl;
    }
};


class AccountHandler{
private:
    Account Accounts[50];
public:
    AccountHandler(){
        for(int i = 0; i<sizeof(this->Accounts); i++){
//            this->Accounts[i](0,0,"");
        }
    }
    void showMenu(){
        cout << "\n-----Menu------\n";
        cout << "1. 계좌개설" << endl;
        cout << "2. 입   금" << endl;
        cout << "3. 출   금" << endl;
        cout << "4. 계좌정보 전체 출력" << endl;
        cout << "5. 프로그램 종료" << endl;
    }
    void makeAccount(){
        int accountID;
        int balance;
        char customerName[NAME_NAME_LEN];
        int validAccountFlag = 0;
        cout << "[계좌 개설]" << endl;
        cout << "계좌ID: ";
        cin >> accountID;
        while(getchar()!='\n');
        
        // Add code. accountID cannot be 0 or negative
        validAccountFlag = 1;
        
        cout << "이  름: ";
        cin >> customerName;
        while(getchar()!='\n');
        
        // Add code. Make it accept Korean.
        
        cout << "입금액: ";
        cin >> balance;
        while(getchar()!='\n');
        
        // Add code. deposit must be positive.
        
        if (validAccountFlag == 1){
            Account new_account(accountID, balance, customerName);
            
            for(int i = 0; i < sizeof(Accounts); i++){
                if(Accounts[i].getAccountID() == 0){
                    Accounts[i] = new_account;
                    cout << "계좌개설 완료." << endl;
                    break;
                }
                else{
                    // Add code to address Accounts array being full.
                }
            }
        }
        else{
            cout << "계좌개설 실패." << endl;
        }
        
        
    }
    void depositMoney(){
        int deposit, accountID, index = -1;
        cout << "[입   금]" << endl;
        cout << "계좌ID: ";
        cin >> accountID;
        while(getchar()!='\n');
        
        for(int i = 0; i < sizeof(Accounts); i++){
            if(accountID == Accounts[i].getAccountID()){
                index = i;
                break;
            }
            else{
                index = -1;
            }
        }
        
        if (index == -1){
            cout << "유효하지 않는 ID입니다." << endl;
        }
        else{
            cout << "입금액: ";
            cin >> deposit;
            while(getchar()!='\n');
            
            Accounts[index].deposit(deposit);
        }
    }
    
    void withdrawMoney(){
        int withdraw, accountID, index = -1;
        cout << "[출   금]" << endl;
        cout << "계좌ID: ";
        cin >> accountID;
        while(getchar()!='\n');
        
        
        for(int i = 0; i < sizeof(Accounts); i++){
            if(accountID == Accounts[i].getAccountID()){
                index = i;
                break;
            }
            else{
                index = -1;
            }
        }
        
        if (index == -1){
            cout << "유효하지 않는 ID입니다." << endl;
        }
        else{
            cout << "출금액: ";
            cin >> withdraw;
            while(getchar()!='\n');
            
            Accounts[index].withdraw(withdraw);
        }
    }
    
    void showAllAccountInformation(){
        for(int i = 0; i < sizeof(Accounts); i++){
            if(this->Accounts[i].getAccountID() == 0)
                continue;
            Accounts[i].showAccountInformation();
        }
    }
    ~AccountHandler() {
        
    }
    
};

const void showMenu() {
    cout << "\n-----Menu------\n";
    cout << "1. 계좌개설" << endl;
    cout << "2. 입   금" << endl;
    cout << "3. 출   금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

Account makeAccount() {
    int accountID;
    int balance;
    char customerName[NAME_NAME_LEN];
    cout << "[계좌 개설]" << endl;
    cout << "계좌ID: ";
    cin >> accountID;
    while(getchar()!='\n');
    
    // Add code. accountID cannot be 0 or negative
    
    cout << "이  름: ";
    cin >> customerName;
    while(getchar()!='\n');
    
    // Add code. Make it accept Korean.
    
    cout << "입금액: ";
    cin >> balance;
    while(getchar()!='\n');
    
    // Add code. deposit must be positive.
    
    Account new_account(accountID, balance, customerName);
    
    return new_account;
}

void depositMoney(Account* Accounts) {
    int deposit, accountID, index = -1;
    cout << "[입   금]" << endl;
    cout << "계좌ID: ";
    cin >> accountID;
    while(getchar()!='\n');
    
    for(int i = 0; i < sizeof(Accounts); i++){
        if(accountID == Accounts[i].getAccountID()){
            index = i;
            break;
        }
        else{
            index = -1;
        }
    }
    
    if (index == -1){
        cout << "유효하지 않는 ID입니다." << endl;
    }
    else{
        cout << "입금액: ";
        cin >> deposit;
        while(getchar()!='\n');
        
        Accounts[index].deposit(deposit);
    }
}

void withdrawMoney(Account* Accounts) {
    int withdraw, accountID, index = -1;
    cout << "[출   금]" << endl;
    cout << "계좌ID: ";
    cin >> accountID;
    while(getchar()!='\n');
    
    
    for(int i = 0; i < sizeof(Accounts); i++){
        if(accountID == Accounts[i].getAccountID()){
            index = i;
            break;
        }
        else{
            index = -1;
        }
    }
    
    if (index == -1){
        cout << "유효하지 않는 ID입니다." << endl;
    }
    else{
        cout << "출금액: ";
        cin >> withdraw;
        while(getchar()!='\n');
        
        Accounts[index].withdraw(withdraw);
    }
}


const void showAllAccountInformation(Account* Accounts) {
    for(int i = 0; i < sizeof(Accounts); i++){
        if(Accounts[i].getAccountID() == 0)
            continue;
        Accounts[i].showAccountInformation();
    }
}


int main(){
    AccountHandler AH;

    int menu_option;
    Account Accounts[50];
    Account temp;
    
    while(1){
        AH.showMenu();
        cout << "메뉴 선택: ";
        cin >> menu_option;
        while(getchar()!='\n');
        cout << "-----------------" << endl;
        
        switch(menu_option){
                
            case 1:
                AH.makeAccount();
                break;
            case 2:
                AH.depositMoney();
                break;
            case 3:
                AH.withdrawMoney();
                break;
            case 4:
                AH.showAllAccountInformation();
                break;
            case 5:
                cout << "프로그램 종료. " << endl;
                return 0;
                break;
            default:
                cout << "잘못된 옵션입니다." << endl;
                cout << "--------------------" << endl;
        }
        
    }
    return 0;
}


/*
ver 0.2
내용: Account Class, Object Pointer Array
구현:
Class
계좌 정보를 위한 구조체를 클래스로 변경
Account
  attributes
    - accountID
    - balance
    - customerName
  function
    - Account()
    - getAccountID()
    - deposit()
    - withdraw()
    - showAccountInformation()
    - ~Account()
계좌 정보를 저장하기 위한 배열
  - Accounts
*/

/*------------------------------------------*/

