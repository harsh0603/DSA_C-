// Any continues part of an array which start from a index i and end at an index j is subarray

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[9] = {1,4,5,8,7,9,2,6,3};
//     for(int i =0;i<9;i++){
//         for(int j=i;j<9;j++){
//             for(int k =i;k<j;k++){
//                 cout<<arr[k]<<",";
//             }
//             cout<<endl;
//         }
//     }
// return 0;
// }




// Maximum Subarray Sum----------------------->

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[8] = {1,5,2,-10,-4,3,-5,10};
//     int l = -1;
//     int r = -1;
//     int max =INT_MIN;
//     for(int i=0;i<8;i++){
//         for (int j=i;j<8;j++){
//             int curr = 0;
//             for(int k=i;k<j;k++){
//               curr += arr[k];
//             }
//             if(curr>max){
//                 max = curr;
//                 l=i;
//                 r=j;
//             }
//         }
//     }

//     cout<<"the biggest sum is: "<<max<<endl;
    
//     for(int i=l;i<=r;i++){
//         cout<<arr[i]<<","; 
//     }
// return 0;
// }








// best of finding the sum of the subarray------------------>


// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] ={1,4,-4,5,-8,9,15,4,8,0};
//     int curr[10];
//     curr[0] = arr[0];

//     for(int i=1;i<10;i++){
//         curr[i] = curr[i-1] + arr[i];
//     }

//     int currSum ;
//     int MaxSum = -1111;
//     int left=-1;
//     int right=-1;

//     for(int i=0;i<10;i++){
//         for(int j=i;j<10;j++){
//             currSum=0;
//           currSum = curr[j] - curr[i-1];
        
//         if(currSum>MaxSum){
//             MaxSum = currSum;
//             left=i;
//             right = j;
//         }
//         }
//     }

//     cout<<"the Max Sum is "<<MaxSum<<endl;
//     for(int i=left;i<=right;i++){
//         cout<<arr[i]<<",";
//     }

// return 0;
// }








// Kardane theorm------------------------------------->



#include<iostream>
using namespace std;

int main(){
    int arr[10] ={1,4,-4,5,-8,9,15,4,8,0};

    int currSum = 0 ;
    int MaxSum = 0;
      
      for(int i=0;i<10;i++){
          currSum += arr[i];
          if(currSum<0){
              currSum = 0;
          }
          MaxSum = max(MaxSum,currSum);
      }

cout<<"the max Sum of the subarray is : "<<MaxSum;
return 0;
}




