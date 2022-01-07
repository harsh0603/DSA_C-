// Q1------->  The question is to invert the given NUM into a small NUM by subtracting 9 from the
//NUM digits. Note that if the first digit is 9 then skip --->Eg:- 4615-> 4314.



#include<iostream>
using namespace std;

int main(){
    char NUM[10];
    cin>>NUM;
    int i=0;
        if(NUM[0]=='9'){
            i++;
        }
    for(;NUM[i] !='\0';i++){

        int digit = NUM[i]-'0';
        if(digit>=5){ //this is important as if the digit is greater than 5 then the Subtraction will come less then 5
            digit = 9-digit;
            NUM[i] = digit + '0';
        }            
  
    }

      cout<<NUM<<endl;
return 0;
}