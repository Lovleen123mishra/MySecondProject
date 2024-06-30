#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"\n-----------------------------------------\n";
    cout<<"````````WELCOME TO CALCULATOR````````";
    cout<<"\n-----------------------------------------\n";

    cout<<" \n enter the two nos to be calculated: ";
    cin>>a>>b;
    cout<<"\n Select 1 for addition: \n select 2 for multiplication: \n select 3 for subtraction: \n select 4 for division:";
    cout<<"\n select your choice: ";
    cin>> n;
    if(n==1)
    {
        cout<<"The sum of the entered nos is : "<<(a+b);
    }
   else if(n==2)
    {
        cout<<"The product of the entered nos is : "<<(a*b);
    }
   else if(n==3)
    {
        cout<<"The difference of the entered nos is : "<<(a-b);
    }
    else if(n==4)
    {
        cout<<"The quotient of the entered nos is : "<<(a/b);
    }
    else
    {
        cout<<"you entered an invalid no";
    }
    return 0;
}