// #include<iostream>
// using namespace std;

// void increment(int& n){
//     n++;
// }

// void increment2(int& n1){
// int& a = n1;
// a=a+15;
// }

// int main(){
//     int i = 10;

//     increment(i);//Now the variable will pass by reference
//     increment2(i);
//     cout<<i<<endl;
//     int& j =i; //referencing the j to i
//     i++;
//     cout<<j<<endl;

//     j++;
//     cout<<i<<endl;
//     int k =100;
//     j = k;
//     cout<<j<<endl;

// return 0;
// }




// Question----------------------------->




#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
return 0;
}