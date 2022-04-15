#ifndef PROJECT_CAR_H
#define PROJECT_CAR_H
#include <bits/stdc++.h>
#include "Brand.h"
using namespace std;

class Car :public Brand{
    Brand bb;
private: int No=0;
    double price=0;
public: void Enter(string name ,int NO , double price) {
        bb.setName(name);
        cout << "enter No " <<endl;
        cin>>No;
        cout << "enter price " <<endl;
        cin>>price;
        this->No = No;
        this->price = price;
    }
public: double getPrice() {
        return price;
    }
public: int getNo() {
        return No;
    }
public: void setPrice(double price) {
        this->price = price;
    }

};


#endif //PROJECT_CAR_H
