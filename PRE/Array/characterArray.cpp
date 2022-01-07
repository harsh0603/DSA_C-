#include<iostream>
using namespace std;

int main(){
    char arr[5] = {'h','a','r','s','h'};
    cout<<arr<<endl;
    cout<<sizeof(arr)<<endl;

    //Right way to intialise the array is ->
    char brr[6]={'h','a','r','s','h','\0'};
    cout<<brr<<endl;
    cout<<sizeof(brr)<<endl;


char crr[] = "harsh"; //this is the string which will automatically terminate at the end of the string
cout<<crr<<endl;
cout<<sizeof(crr)<<endl; //the size of the string will be 6 as adding the null char..


char c[100];
//cin>>c;

cin.getline(c,100); //in this the deliminator is newline by default
cout<<c<<endl;


//if we want to write a paragraph then the deliminatior is .

char para[1000];
cin.getline(para,1000,'.');
cout<<para<<endl;
return 0;
}