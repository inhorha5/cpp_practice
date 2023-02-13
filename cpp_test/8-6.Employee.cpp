//
//  8-6.Employee.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/12/23.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;


class Employee {
private:
    char name[100];
    
public:
    Employee(const char* name) {
        strcpy(this->name, name);
    }
    
    void showYourName() const {
        cout << "name: " << name << endl;
    }
    
    virtual int getPay() const = 0;
    virtual void showSalaryInfo() const = 0;
};


class PermanentWorker : public Employee {
private:
    int salary;
    
public:
    PermanentWorker(const char* name, int money) : Employee(name), salary(money) {};
    
    int getPay() const {
        return salary;
    }
    
    void showSalaryInfo() const {
        showYourName();
        cout << "salary: " << getPay() << endl << endl;
    }
};


class TemporaryWorker : public Employee {
private:
    int workTime;
    int payPerHour;
    
public:
    TemporaryWorker(const char* name, int pay)
        : Employee(name), workTime(0), payPerHour(pay) {};
    
    void addWorkTime(int time) {
        this->workTime += time;
    }
    
    int getPay() const {
        return this->workTime * this->payPerHour;
    }
    
    void showSalaryInfo() const {
        showYourName();
        cout << "salary: " << getPay() << endl << endl;
    }
};


class SalesWorker : public PermanentWorker {
private:
    int salesResult;
    double bonusRatio;
    
public:
    SalesWorker(const char* name, int money, double ratio)
        : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {};
    
    void addSalesResult(int value) {
        this->salesResult += value;
    }
    
    int getPay() const {
        return PermanentWorker::getPay() + (int)(this->salesResult * this->bonusRatio);
    }
    
    void showSalaryInfo() const {
        showYourName();
        cout << "salary: " << getPay() << endl << endl;
    }
};


class EmployeeHandler {
private:
    Employee* employeeList[50];
    int numOfEmployee;
    
public:
    EmployeeHandler() : numOfEmployee(0) { };
    
    void addEmployee(Employee* employee) {
        this->employeeList[this->numOfEmployee++] = employee;
    }
    
    void showAllSalaryInfo() const {
        for (int i = 0; i < this->numOfEmployee; i++)
             this->employeeList[i]->showSalaryInfo();
    }
    
    void showTotalSalary() const {
        int sum = 0;
        
        for (int i = 0; i < this->numOfEmployee; i++)
            sum += this->employeeList[i]->getPay();
        
        cout << "Total salary: " << sum << endl;
    }
    
    ~EmployeeHandler() {
        for (int i = 0; i < this->numOfEmployee; i++)
            delete this->employeeList[i];
    }
};


int main_8_6() {
    EmployeeHandler handler;
    
    handler.addEmployee(new PermanentWorker("Kim", 1000));
    handler.addEmployee(new PermanentWorker("Lee", 1500));
    
    TemporaryWorker* alba = new TemporaryWorker("Park", 500);
    alba->addWorkTime(5);
    handler.addEmployee(alba);
    
    SalesWorker* seller = new SalesWorker("Choi", 1000, 0.2);
    seller->addSalesResult(10000);
    handler.addEmployee(seller);
    
    handler.showAllSalaryInfo();
    
    handler.showTotalSalary();
    
    return 0;
}
