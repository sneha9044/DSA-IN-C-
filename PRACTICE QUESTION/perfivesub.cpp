#include<iostream>
using namespace std;
int main()
{
    int hindi,eng,bio,maths,chem,per;
    cout<<"enter the all subject marks";
    cin>>hindi>>eng>>bio>>maths>>chem;
    per=((hindi+eng+bio+maths+chem)*100/500);
    cout<<per<<"%";
}