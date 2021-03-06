#include<iostream>
using namespace std;

int recursivePower(int x,int y)                               //Making a recursive Power function
{
    if(y!=0) return(x*recursivePower(x,y-1));
    else return 1;
}

int main()
{
int n,p;                                                     //Declaring variables
cout<<"Enter a Number to get it's power"<<endl;
cin>>n;

cout<<"Enter the number to be the power"<<endl;
cin>>p;

cout<<n<<" ^ "<<p<<" is "<<recursivePower(n,p);;

return 0;
}
