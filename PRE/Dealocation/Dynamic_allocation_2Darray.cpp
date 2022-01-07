// #include<iostream>
// using namespace std;

// int main(){
//     int **p = new int*[10];
//     for(int i=0;i<10;i++){
//      p[i] = new int[5];
//      for(int j =0;j<5; j++){
//          cin>>p[i][j];
//      }
//     }

//     for(int i=0;i<10;i++){
//         delete p[i]; //First delete the array of the values as 
//                      //if we delete the pointer array first then we don't know the address of the arrays of the values

//     }

//     delete[]p; //Now the array of the pointer

// return 0;
// }




// #include<iostream>
// using namespace std;
// #define  PI 3.14
// int main(){
//     int r;
//     cin>>r;
//     cout<< PI*r*r<<endl;
// return 0;
// }







// Questiion------------------------------------------->



#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}