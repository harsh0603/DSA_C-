#include<iostream>
using namespace std;

int main(){
    int arr[10];

    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
 
 // both wiil show the same address

 arr[0] = 5;
 arr[1] = 10;
 cout<<*arr<<endl;
 cout<<*(arr+1)<<endl;

 //derefferencing the next interger in the array


 //difference in the array & pointer--->

 //1 (sizeof())

 int*p = 0;
 
  cout<<p<<endl;  
 
  //pointer will have 8 bytes of different memory but the array are not given any 8 bytes memory it will only have the memory of the first interger(arr[0])
 
  cout<<arr<<endl;

//2 (&)

//&arr -> will print the memory on which it is stored same as the first(arr[0])
//&p -> will print the given 8 bytes memory 

//3 (array can't be re-assign)

p = p+1; // we can re-assign the pointer 

arr = arr +2; //this is not allowed because the address of arr is stored once which can't be change

cout<<p<<endl;
cout<<arr<<endl;

return 0;
}