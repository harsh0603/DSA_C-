#include<iostream>
using namespace std;

// void print(int* ptr){
//     cout<<*ptr<<endl;
// }

// void increment(int* ptr){
//     ptr++;

// }

// void increment2(int* ptr){
//   (*ptr)++;
// }

// int main(){
//     int i =10;
//     int* ptr = &i;
    
//     print(ptr); //it will send the copy of the ptr pointer
//     cout<<ptr<<endl; //same 
     
//     increment(ptr);  //therefore change in the copy pointer will not change the pointer in the main

    
//     cout<<ptr<<endl; //same 

//     cout<<*ptr<<endl;

//     increment2(ptr); //as now the value is change then it will also going to increase the value by one


//     cout<<*ptr<<endl;

// return 0;
// }


void sum1(int arr[],int size){
    cout<<sizeof(arr)<<endl;  //here the size is 8 bytes as the pointer
}

int  sum2(int* arr,int size){ //we can write it like this as well
   int ans = 0;
   for (int i =0;i<size ;i++){
      ans+= arr[i];
   }
   return ans;
}

int main(){
    int arr[10];
    cout<<sizeof(arr)<<endl; //this will give the size of the array that is 40

    sum1(arr,7);

    cout<<sum2(arr+3,7)<<endl; // this will print the sum of value from the 3 index in the array 
}


