



// The Multiplication recursively using only addition and subtraction








// #include<iostream>
// using namespace std;

// int Multiplication(int num,int mul){
// // Base Case 
// if(mul==0){
//     return 0;
// }

// int ans  ;

// if(mul!=0){
//     ans = num + Multiplication(num,mul-1);
// }
// return ans;


// }



// int main(){
//     int num,mul;
//     cin>>num>>mul;
//   int result = Multiplication(num,mul);
//   cout<<result<<endl;
// return 0;
// }









// Count the Number of 0 in the given number 








// #include<iostream>
// using namespace std;

// int Count_Zero(int Num){
// if(Num==0){  //This statement is for the one 0 only 
//     return 1;
// }else if(Num<=9){
//     return 0;
// }else{
//     return ((Num%10==0)? 1:0) + Count_Zero(Num/10); //here the first statement is for the short problem and the
//                                                     //Second one is for recurssion
// }
// }


// int main(){
//     int Num;
//     cin>>Num;
//    int result = Count_Zero(Num);

//    cout<<result<<endl;
// return 0;
// }








// Find the Sum of th Geometric Sum till the given number 







// #include <bits/stdc++.h>
// using namespace std;

// double Find_GM(int k){
// // Base Case
// if(k==0){
//     return 1;
// }
// double ans;
// ans = 1/(double)pow(2,k) + Find_GM(k-1); //here the first one is for the short problem and the second is for recurrsion 
// return ans;

// }

// int main(){
//     int k;
//     cin>>k;
//     cout<<"The answer is : "<< Find_GM(k) <<endl;
// return 0;
// }









// Palindrome Question ------------------------->









//  #include <bits/stdc++.h>
// using namespace std;


// bool checkPalindrome(string st,int start,int end){
//     // Base Case 
    
//     if(sizeof(st)==0){
//         return true;
//     }
//     else if(sizeof(st)== 1){
//          return true;
//     }

//     if(end-start==0 || end==start){ //this is for the number of the letter is odd then the end and start will come to a single letter
//         return true;
//     }

//     if(st[start]==st[end]){
//         return checkPalindrome(st, start+1,end-1);
//     }else {
//     return false;
//     }
// }



// int main(){
//     string st;
//     cin>>st;
//     int n = st.length();
//     if(checkPalindrome(st,0,n-1)){
//         cout<<"yes"<<endl;
//     }else{
//         cout<<"No"<<endl;
//     }
    
// return 0;
// }






// Sum of the digit in a number ----------------------------------------------->





#include<iostream>
using namespace std;

int Sum(int num){
// Base Case
    if(num/10==0){
        return num;
    }

int ans = num%10 + Sum(num/10);

return ans;

}

int main(){
    int NUM;
    cin>>NUM;

    cout<<Sum(NUM)<<endl;
return 0;
}
