#include<iostream>
using namespace std;
void increment(int** pr){
    pr = pr+1 ; //this is not valid because it changing its own address
}

void increment2(int** pr){
    *pr = *pr+1; //this is correct because it will change the address in the pointer *ptr(address of i)
    cout<<endl;
    cout<<*pr<<endl;
}

void increment3(int** pr){
    **pr =**pr +1; //this will change the interger i into 11 from 10
    cout<<endl;
    cout<<**pr<<endl;
}
int main(){
 int i =10;
 int *ptr = &i;
 int ** pr = &ptr;

 // The double pointer save address of the pointer   

 cout<<&ptr<<endl; //this will give the same output   
 cout<<pr<<endl;
 cout<<endl;

cout<<ptr<<endl;
cout<<*pr<<endl; //this will give the address of i (all)
cout<<&i<<endl;
cout<<endl;

cout<<i<<endl;
cout<<*ptr<<endl; //this will give the integer of the i(10)
cout<<**pr<<endl;
cout<<endl;


increment2(pr);
increment3(pr);
return 0;
}