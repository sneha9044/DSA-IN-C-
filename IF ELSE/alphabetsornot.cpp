#include<iostream>
using namespace std;
int main()
{
    char choice ;
    cout<<"enter an alphabets";
    cin>>choice;
    if(choice>'a'&&choice<'z'||choice>'A'&&choice<'z')
    {
        cout<<"its an alphabets";

    }
    else{
        cout<<"its not";
    }
    return 0;
}