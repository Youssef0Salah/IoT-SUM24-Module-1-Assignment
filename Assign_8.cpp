#include <iostream>
#include <cmath>
using namespace std;
#define UNIVERSAL_GRAVITATIONAL_FORCE 6.673e-8

double gravitationalForce(float massInkg1 , float massInkg2,float distance){
  double result= UNIVERSAL_GRAVITATIONAL_FORCE*(massInkg1*1000)*(massInkg2*1000);
  double distanceInCm=distance*100;
  return result/pow(distanceInCm,2);
};
int main(){
    bool flag=true;
    float massInkg1,massInkg2,distance;
    string answer;
    while (flag)
    {
      cout<<"Enter the mass of first object in Kg : ";
      cin>>massInkg1;
      cout<<"Enter the mass of second object in kg : ";
      cin>>massInkg2;
      cout<<"Enter the distance between two objects : ";
      cin>>distance;
      cout<<"The gravitational force is : "<<gravitationalForce(massInkg1,massInkg2,distance)<<"\n";
      cout<<"Do you want to perform another calculation : (y/n)";
      cin>> answer;
      if(answer=="y"){
        flag=true;
      }
      else{
        flag=false;
      }
    }
    


  return 0;
}
