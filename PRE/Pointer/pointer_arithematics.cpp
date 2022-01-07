#include<iostream>
using namespace std;


// size of all data types(char,int,float, etx) are same 8 bytes


int main(){
    
  int i =10;
  int *ptr = &i;

  cout<<ptr<<endl;
  //arithematic increament in the pointer

 ptr =  ptr + 1; //increase 4 bit in the memory

 cout<<ptr<<endl;

 ptr--; //decrement in the memory for 4 bit

cout<<ptr<<endl;

double dp = 14.54;
double *dptr = &dp;

cout<<dptr<<endl;

dptr = dptr ++; //increment of 8 bytes in the memory 

cout<<dptr<<endl;

return 0;
}