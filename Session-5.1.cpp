#include<iostream>
using namespace std;

class PaymentProcessor{

    public:

    void processPayment(float amount){

        cout<<"\nWithout Coupon";
        cout<<"\nFinal Amount = "<<amount;
    }

    void processPayment(float amount,string coupon){

        cout<<"\nWith Coupon";
        cout<<"\nCoupon = "<<coupon;
        cout<<"\nFinal Amount = "<<amount-100;
    }
};

main(){

    PaymentProcessor p1;

    float amount;
    string coupon;

    cout<<"Enter Amount: ";
    cin>>amount;

    p1.processPayment(amount);

    cout<<"\nEnter Coupon Code: ";
    cin>>coupon;

    p1.processPayment(amount,coupon);
}
