#include<iostream>
using namespace std;

class FoodOrder{

    public:

    int orderId;
    string restaurantName;
    int isDelivered;

    FoodOrder(int id,string name,int delivered){

        orderId=id;
        restaurantName=name;
        isDelivered=delivered;
    }
};

main(){

    FoodOrder f1(101,"Dominos",0);

    cout<<"\nOrder Id = "<<f1.orderId;
    cout<<"\nRestaurant = "<<f1.restaurantName;
    cout<<"\nDelivered = "<<f1.isDelivered;
}
