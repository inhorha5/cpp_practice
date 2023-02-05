//
//  3-3.object_oriented_programming.cpp
//  cpp_test
//
//  Created by InHo Rha on 2/5/23.
//

#include <iostream>

using namespace std;

class FruitSeller {
private:
    int APPLE_PRICE;
    int numOfApples;
    int sales;
    
public:
    void initVariables(int price, int numOfApples, int sales) {
        this->APPLE_PRICE = price;
        this->numOfApples = numOfApples;
        this->sales = sales;
    }
    
    int saleApples(int money) {
        int soldAppleNum = money / APPLE_PRICE;
        this->numOfApples -= soldAppleNum;
        sales += money;
        
        return soldAppleNum;
    }
    
    void showSalesResult() {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << sales << endl << endl;
    }
};

class FruitBuyer {
private:
    int money;
    int numOfApples;
    
public:
    void initVariables(int money) {
        this->money = money;
        numOfApples = 0;
    }
    
    void buyApples(FruitSeller& seller, int money) {
        numOfApples += seller.saleApples(money);
        this->money -= money;
    }
    
    void showBuyResult() {
        cout << "현재 잔액: " << money << endl;
        cout << "사과 개수: " << numOfApples << endl << endl;
    }
};


int main_3_3() {
    FruitSeller seller1;
    seller1.initVariables(1000, 20, 0);
    FruitBuyer buyer1;
    
    int money;
    cin >> money;
    if (money > 1000)
        buyer1.initVariables(money);
    
    buyer1.buyApples(seller1, 3000);
    
    cout << "과일 판매자의 현황" << endl;
    seller1.showSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer1.showBuyResult();
    
    return 0;
}
