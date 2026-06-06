#include<iostream>
using namespace std;

class Product{

    public:

    virtual void upload()=0;
};

class Electronics : public Product{

    public:

    void upload(){

        cout<<"\nElectronics Product Uploaded";
    }
};

class Clothing : public Product{

    public:

    void upload(){

        cout<<"\nClothing Product Uploaded";
    }
};

main(){

    Electronics e1;
    Clothing c1;

    e1.upload();
    c1.upload();
}
