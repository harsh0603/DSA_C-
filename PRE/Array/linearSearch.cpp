#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,7,8,4,5};
    int find;
    cin>>find;
    int i;
    for(i=0;i<5;i++){
        if(find == arr[i]){
            cout<<"the index is :"<<i<<endl;
            break;
        }
    }

    if(i==6){
        cout<<"Not found"<<endl;
    }
   

    cout<<"Not found"<<endl;

return 0;
}