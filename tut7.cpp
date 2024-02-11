#include<iostream>
using namespace std;

int main()
{
   // Define array

   /*
    Array aik aisa structure ha c++ jo ka multiple values ko store 
    karwanay ka liya use hota ha magar unki datatypes same honi cha-
    hiya
   */
    
    // {0, 1 ,2 ,3 }
    string cars [4] = {"BMW", "FORTUNER", "HONDA", "RANGE ROVER"}; 
    cout<<cars[2];
    string price [4] = {" Price Rs = ", " Price Rs = ", " Price Rs = ", " Price Rs = "}; 
    cout<<price[2];
    int amount [4] = {200000, 400000, 600000, 800000}; 
    cout<<amount[2];
    return 0;
}