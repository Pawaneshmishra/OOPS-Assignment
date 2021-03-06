#include<iostream>
using namespace std;

int recursiveFact(int x)                               //Making a recursive Factorial function
{
    if(x!=0) return(x*recursiveFact(x-1));
    else return 1;
}

int main()
{
int n;                                                     //Declaring variables
cout<<"Enter a Number to get it's Factorial"<<endl;
cin>>n;

cout<<"Factorial of "<<n<<" is "<<recursiveFact(n);        //Getting results

return 0;
}
