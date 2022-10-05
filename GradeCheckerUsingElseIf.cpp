#include <iostream>
using namespace std;
 
int main () {
  int grade;
  cout<<"Enter Grade: ";
  cin>>grade;
  if(grade > 100){
      cout<<"Invalid Grade";
  }else if(grade >= 95){
      cout<<"High Honor";
  }else if(grade >= 90){
      cout<<"Honor";
  }else if(grade >= 75){
      cout<<"Passed";
  }else{
      cout<<"Failed";
  }
   return 0;
}
