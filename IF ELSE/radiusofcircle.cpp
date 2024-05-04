#include<iostream>
using namespace std;
int main()
{
    int r,circumfrence,area;
    cout<<"enter the value";
    cin>>r;
    area=3.14*r*r;
    circumfrence=2*3.14*r;
    if(area<circumfrence)
    {
        cout<<"circumfrence is greater";

    }
    else if(area>circumfrence)
    {
        cout<<"area is greater";

    }
    else{
        cout<<"circumfrence and area is not greater ";

    }
    return 0;
}

    
