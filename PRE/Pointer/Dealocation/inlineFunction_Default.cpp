// #include<iostream>
// using namespace std;
// inline int max(int a,int b){
//      return (a>b)? a:b;// this line will copy at the place where 
//                       //the fuction is called

// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int c = max(a,b);
//     cout<<c<<endl;
// return 0;
// }





// Default argument----------------------------------------->


#include<iostream>
using namespace std;

void sum(int a[],int size,int start=0){ //Default argument
int Sum = 0;
for(int i=start;i<size;i++){
    Sum+= a[i];
}
cout<<Sum<<endl;
}

void Sum2(int a,int b = 0,int c = 0){  //Always start the default argument from the rightmost way
    int ans = a+b+c;
}

int main(){
    int a[10];
    sum(a,10);
    int A = 15;
    Sum2(A);
return 0;
}