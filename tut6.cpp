#include<iostream>
#include<math.h>
using namespace std;
int rem(int a,int b); //prototype
int main()
{
    int num1; int num2;
   cout<<"Enter first number: ";
   cin>>num1;
   cout<<"Enter second number: ";
   cin>>num2;
   cout<<"rem of these two numbers: "<<rem(num1,num2);


}

int rem(int a,int b){
    int c = a % b;}