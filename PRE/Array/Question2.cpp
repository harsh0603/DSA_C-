// To search the number in a sorted 2-D array using the stair-case apporch




#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size][size];
    for(int i=0;i<size;i++){
      for(int j=0;j<size;j++){
        cin>>arr[i][j];
      }
    }

    int num;
    cout<<"enter the search number: ";
    cin>>num;

    int i=0,j=size-1;

    while(i<size && j>=0){
        if(arr[i][j]==num){
            cout<<"the number is on the position :"<<i<<" row and "<<j<<" coln"<<endl;
        
        break;
        }else if(arr[i][j]>num){
            j--;
        }else if(arr[i][j]<num){
            i++;
        }
    }

   


return 0;
}