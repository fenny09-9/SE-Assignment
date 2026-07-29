#include <iostream>
using namespace std;
main() {
    int n, sum=0;

    cout<<"Enter the number of elements: ";
    cin>>n;

    int a[n];

    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }

    float average = (float)sum / n;

    cout << "\nSum = " << sum;
    cout << "\nAverage = " << average;

}
