#include <bits/stdc++.h>
#include "Brand.h"
#include "Car.h"
#include "Invoice.h"
using namespace std;
int main() {
        
    Brand brand1;
    Car car1;
    Invoice i1;
    cout << "1 to add car" << endl;
    cout << "2 to edit car" << endl;
    cout << "3 to read car" << endl;
    cout << "4 to sum car" << endl;
    cout << "5 to get min" << endl;
    cout << "0 to exit" << endl;
    int cc; cin >>cc;
    int no=0;double pr=0;string n;
    while (cc!=0){
        if (cc==1) i1.addCar(n,no,pr);
        else if (cc==2) i1.editCar(no);
        else if (cc==3) i1.ReadPrices();
        else if (cc==4) i1.GetTotal();
        else if (cc==5) i1.GetMin();
        else if (cc==0) exit(0);
        cout << "1 to add car" << endl;
        cout << "2 to edit car" << endl;
        cout << "3 to read car" << endl;
        cout << "4 to sum car" << endl;
        cout << "5 to get min" << endl;
        cout << "0 to exit" << endl;
        cin >>cc;
    }
    return 0;
}
