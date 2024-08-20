#include <iostream>
#include <cmath>
#include <string>
using namespace std;


void isPerfectSquare(int x){
    float squareNumber=sqrt(x);
    if((int)squareNumber==squareNumber){
      cout<<x<<" is a perfect square number.\n";
    }
    else{
      cout<<x<<" is not a perfect square number.\n";
    }
};

int reverseDigits(int num){
       int reversedNumber = 0;

    while (num != 0) {
        int digit = num % 10;           
        reversedNumber = reversedNumber * 10 + digit; 
        num /= 10;                      
    }

    return reversedNumber;

};
int sumDigits(int num){
  int sum=0;
  while (num != 0) {
        int digit = num % 10;           
        sum +=digit; 
        num /= 10;                      
    }

    return sum;
}

int main() {
  int number;
  cout<<"Enter your postive integer number : ";
  cin>>number;
  isPerfectSquare(number);
  
 cout<<"Your reversed number "<<reverseDigits(number)<<"\n";
 cout<<"Sum of digits of your number : "<<sumDigits(number)<<"\n";
  return 0;
}