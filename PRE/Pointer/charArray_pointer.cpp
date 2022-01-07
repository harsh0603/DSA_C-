#include<iostream>
using namespace std;

int main(){
 int arr[] = {1,2,3};
 char brr[] = "abc";
 
 cout<<arr<<endl; //if we print this then it will print the address of the arr
 
 cout<<brr<<endl; //but if we print this then it will print -> abc till the NULL character

 char *ptr = &brr[0];

 cout<<ptr <<endl ; //this will also print the full item in the char array

char crr = 'a';
char *btr = &crr;

cout<<btr<<endl; //this will print first the a and then a garbage value till 0/(null char)


//never initialize poiinter in the char array as it give it a temporary memory ->

char str[] = "acfe";
char *pd = "acfe"; //-> this is wrong

return 0;
}