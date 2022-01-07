// #include<iostream>
// using namespace std;

// int main(){
//     // Constant integer 
//     int const i =10;
//     const int i2 = 20; //ok to write
    
    
//     // Constant Ref from a non const int
//      int j =12;
//     int const &k = j;
//     k++; //Not allowed as only can reaf the value of the j
//     j++;//allowed 
    
//     // constant reference from a const int 
//     int const j2 = 14;
//     int const &k2 = j2;
//     j2++; //Not allowed
//     k2++;  //Not allowed

//     // ref of Constant int
//     int const j3 = 16;
//     int &k3 = j3; //this is not allowed as 
//                   //only the int can read then the reference can't write



// return 0;
// }







// Const with the pointer---------------------------->




// #include<iostream>
// using namespace std;

// void f(int const *p){
//     (*p)++; //this is not allowed 
// }

// void g(int const &a){
//     a++; //By the pass of the ref not allowed to change the j2
// }
// int main(){
//     int const i = 10;
//     int *p = &i; //Not allowed 

//     int const *p = &i; //This is allowed

//    int j =12;
//    int const *p2 = &j; //This can only read the j
//    j++; //this is allowed
//    (*p2)++; //Not allowed 


//    int j2 = 14;
//    int * p3 = &j2;
//    f(p3);
//    g(j2);
// return 0;
// }






#include<iostream>
using namespace std;

int main(){
    int i =10;
    int j = 21;
    int const *p = &i;
    p = &j;   //this is allowed as the pointer is having constant path but can point to any interger
    /*but*/ (*p)++; //this is not allowed 
    int *const p2 = &i; //this is also allowed which mean the pointer is const
    (*p2)++; //this is allowed 
    /*But*/ p2 = &j; //this is not allowed 

    int const * const p3 = &i;
    // Both the argument can't be allowed->
    (*p3)++;
    p3 = &j;
return 0;
}