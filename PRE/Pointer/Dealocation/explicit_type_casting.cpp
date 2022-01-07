#include<iostream>
using namespace std;

int main(){
    int i = 65;
    char c= i; //implicit type casting
    cout<<i<<endl<<c<<endl;

    int *p =&i;
    char *pc = (char*)p; //explicit typecasting
   
   void* dc = pc;//it can point to any data type
   
    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;


    cout<<p<<endl;
    cout<<pc<<endl;
return 0;
}

//Question-------------------------------->

// #include <iostream>
// using namespace std;

// void updateValue(int *p){
//     *p = 610 % 255;
// }

// int main()
// {
//     char ch = 'A';
//     updateValue((int*)&ch);
//     cout << ch;
//     return 0;
// }