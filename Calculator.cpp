#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
cout<<"Enter First Number: ";
cin>> num1;
cout<<"Enter Second Number: ";
cin>> num2; 
int add = num1+num2;
int minus = num1-num2;
int product = num1*num2;
int divide = num1/num2;
int modulo = num1%num2;

cout<<"Sum: " <<add;
cout<<"\nDifference: " <<minus;
cout<<"\nProduct: " <<product;
cout<<"\nQuotient: " <<divide;
cout<<"\nRemainder: " <<modulo;
   return 0;
}
