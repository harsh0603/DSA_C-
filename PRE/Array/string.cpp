

#include<iostream>
#include<cstring>
#include<algorithm> //to sort the string
using namespace std;

bool compare(string a,string b){
    return a.length()>b.length(); //this will sort according to the length of the strings
}

int main(){
    string s("Hello world");
    cout<<s<<endl;

    //another way is-> 2
    string s1 = "hello another world";
    cout<<s1<<endl;

    // cout<<s1.length()<<endl;
    // for(int j=0;j<s1.length();j++){
    //       cout<<s1[j]<<"-";
    // }
    // cout<<endl;

   //another way -> 3

//    string s2;
//    getline(cin,s2);
//    cout<<s2<<endl;


//array of the string->

string arr[] = {"Apple","Bannnanana","Mango","Pineapple","orange"};
// sort(arr,arr+5);
//this is sorting the string by the length
sort(arr,arr+5,compare);
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}

    
return 0;
}