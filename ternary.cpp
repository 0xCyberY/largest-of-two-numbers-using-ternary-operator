#include<iostream>
using namespace std;

class Largest
{
public:
int a, b , c;
void cl(){
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
//cin>>b;
c = (a > b) ? a : b;
}
void display()
{
cout<<"the largest number is :"<<c<<endl;
}
};
int main()
{
Largest ten;
ten.cl();
ten.display();
return 0;
}

