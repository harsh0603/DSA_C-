#include<iostream>
using namespace std;

int main(){
    int i =10;
    cout<<&i; // hexaDecimal address of the i
    
    //pointers are variables which store the address of the variables 
    
    int * p = &i; //"p "is the pointer of intger type

    // there is no difference b/w the *p and i (both poingt the 4 byte storage)
    
    
    cout<<p<<endl;

    
    
    cout<<*p<<endl; //this is the derefference operator (give the value pointed by p) 


    
    cout<< sizeof(p)<<endl; //size of the pointer 

    
    i++; //change in the value
    
  
    cout<<i<<endl;
    cout<<*p<<endl;

    //change in the value not in the pointer


    int a = *p;
    a++; //change the refferance of the pointer p


    cout<<a<<endl;
    cout<<*p<<endl;

   //the a will chnge but the pointer will not change 

   i =12;

   
    cout<<i<<endl;
    cout<<*p<<endl;

   *p = 23;

   
    cout<<i<<endl;
    cout<<*p<<endl;
    //by the *p we can change the value of i

    int * q = 0;

//* this is important -> always initialize the pointer with the required address of the variable or with null pointer(0) not empty

   cout<<q<<endl;
   cout<<*q<<endl;
return 0;
}