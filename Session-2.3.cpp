#include<iostream>
using namespace std;

class FoodOrder{

    public:

    int orderId;
    string restaurantName;
    int isDelivered;

    void markDelivered(){

        isDelivered=1;

        cout<<"\n Order Delivered";
    }
};

main(){

    FoodOrder f1;

    f1.orderId=101;
    f1.restaurantName="Dominos";
    f1.isDelivered=0;

    f1.markDelivered();
}
