// #include<iostream>
// using namespace std;

// int main(){
//     int* p = new int;
//     *p = 10;

//     cout<<*p<<endl;
//     double* pd = new double;


// // allocating array in dynamic way
// //first way 
// int* pa = new int[10];

// // second way
// int n;
// cin>>n;
// int* pa2 =new int[n];
// for(int i; i<n;i++){
//     cin>>pa2[i];
// }


// return 0;
// }




#include<iostream>
using namespace std;

int main(){
    while(true){
        int i=10; //In this case the scope of the previous i will get overwrite with new i in new loop
                  //therefore the memory usage will not increase 


   while(true){
       int*p=new int;//In this every loop will get its own memory
   }                 //therefore the memory usage will increase
    }
return 0;
}