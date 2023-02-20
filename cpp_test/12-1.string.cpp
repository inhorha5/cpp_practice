//
//  12-1.string.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/19/23.
//

#include <iostream>

using namespace std;


class String{
private:
    int len;
    char* str;
    
public:
    String();
    String(const char* string);
    String(const String& string);
    ~String();
    
    String& operator= (const String& string);
    String& operator+= (const String& string);
    bool operator== (const String& string);
    String operator+ (const String& string);
    String operator* (const String& string, int times);
    
    friend ostream& operator<< (ostream& os, const String& string);
    friend istream& operator>> (istream& is, String& string);
};

String:: String() {
    this->len = 0;
    this->str = NULL;
}

String::String(const char* string) {
    this->len = strlen(string) + 1;
    this->str = new char[this->len];
    strcpy(this->str, string);
}
    
String::String(const String& string) {
    this->len = string.len;
    this->str = new char[this->len];
    strcpy(this->str, string.str);
}

String::~String() {
    if (this->str != NULL)
        delete[] this->str;
}

String& String::operator= (const String& string) {
    if(this->str != NULL)
        delete[] this->str;
    
    this->len = string.len;
    this->str = new char[this->len];
    strcpy(this->str, string.str);
    
    return *this;
}

String& String::operator+= (const String& string) {
    this->len += (string.len - 1);
    char* tempStr = new char[this->len];
    strcpy(tempStr, this->str);
    strcat(tempStr, string.str);
    
    if(this->str != NULL)
        delete[] str;
    
    this->str = tempStr;
    
    return *this;
}

bool String::operator== (const String& string){
    return strcmp(this->str, string.str) ? false:true;
}

String String::operator+ (const String& string) {
    char* tempStr = new char[this->len + string.len - 1];
    strcpy(tempStr, this->str);
    strcpy(tempStr, string.str);
    
    String temp(tempStr);
    
    delete[] tempStr;
    
    return temp;
}

//String operator* (const String& string, int times){
//    len = strlen(string) * times;
//}

ostream& operator<< (ostream& os, const String& string) {
    os << string.str;
    
    return os;
}

istream& operator>> (istream& is, String& string) {
    char str[100];
    is >> str;
    string = String(str);
    
    return is;
}


int main() {
    String str1 = "I like ";
    String str2 = "string class";
    String str3 = str1 + str2;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    str1 += str2;
    
    if(str1 == str3)
        cout << "same string" << endl;
    else
        cout << "different string" << endl;
    
    String str4;
    cout << "Input any string" << endl;
    cin >> str4;
    cout << "string from user is: " << str4 << endl;
}
