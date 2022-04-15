#ifndef PROJECT_INVOICE_H
#define PROJECT_INVOICE_H
#include <bits/stdc++.h>
#include "Brand.h"
#include "Car.h"
using namespace std;

class Invoice :public Brand {
    Car car1;
    Car car2;
    Car car3;
    Car car4;
    Car car5;
    Car cars[5] = {car1 , car2 , car3 ,car4 , car5};
private: double total=0;

public: void addCar(string name,int NO , double price) {
        for (int i = 0; i < 5; ++i) {
            cout << "enter name " <<endl;
            cin>>name;
            cars[i].Enter(name ,NO,price);
        }
    }

public: void editCar(int No) {
        cout << "enter NO " <<endl;
        cin >> No;
        for (int i = 0; i < 5; ++i) {
            if(cars[i].getNo()==No){
                int price ;
                cout << "enter price " <<endl;
                cin >> price;
                cars[i].setPrice(price);
            }
        }
    }

public: void ReadPrices(){
        for (int i = 0; i < 5; ++i) {
            cout << "car " << cars[i].getNo()<< " " <<cars[i].getName() << "Price " << cars[i].getPrice()<<endl;
        }
    }
public: void GetTotal(){
        for (int i = 0; i < 5; ++i) {
            total+= cars[i].getPrice();
        }
        cout << "total = "<< total << endl;
    }

public: void GetMin(){
        double min=99999999;
        for (int i = 0; i < 5; ++i) {
            if (cars[i].getPrice()<min){
                min=cars[i].getPrice();
            }
        }
        cout << "min = "<< min << endl;
    }
};


#endif //PROJECT_INVOICE_H
