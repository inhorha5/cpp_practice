
#include <iostream>

using namespace std;


class Fibonacci {
private:
    long first_num;
    long second_num;
    long last_num;
    long result;
public:
    Fibonacci(int a, int b) : first_num(a), second_num(b) {};
    
    long getResult(int c) {
        if(c <= 0){
            cout << "Error, input value less than 0" << endl;
        }
        else if (c == 1) {
            cout << "Result: " << this->first_num << endl;
        }
        else if (c == 2) {
            cout << "Result: " << this->second_num << endl;
        }
        else{
            this->result = first_num + second_num;
            this->last_num = second_num;
            for(int i=3; i < c; i++){
                long temp = this->result;
                this->result = this->result + this->last_num;
                this->last_num = temp;
            }
        }
        return this->result;
    }
};



int main_0_0() {
    
    Fibonacci fibonacci(1,2);
    cout << fibonacci.getResult(4) << endl;
    
    return 0;
    
}
