#include <iostream>
using namespace std;

int main()
{
int Value=0;
int counter=0;
int i=0;

cout<<"Please enter your number";
cin>>Value ;
if(Value == 0)

cout<<"Number is not a prime number";

else{
for(i=2;i<Value;i++)
if(Value % i == 0)
counter=counter + 1;
}

if(counter > 0)
cout<<"Number is not prime";
else
cout<<"Number is a prime number";

return 0;
}
