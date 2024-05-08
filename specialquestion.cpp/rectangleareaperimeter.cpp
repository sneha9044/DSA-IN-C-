#include<iostream>
using namespace std;
int main()
{
    int l,b,area,perimeter;
    cout<<"enter the l";
    cin>>l;
    cout<<"enter the b";
    cin>>b;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter)
    {
        cout<<"area is greater";
    }
    else{
        cout<<"perimeter is greater";
    }
    return 0;
}