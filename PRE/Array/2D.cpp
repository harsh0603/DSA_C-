// #include<iostream>
// using namespace std;
// void inputOfarr(int arr[][10], int row ,int colm){
//     for(int i=0;i<row;i++){
//         for(int j =0;j<colm;j++){
//             cin>>arr[i][j];
//         }
//     }
   
// }

// void printOfarr(int arr[][10],int row ,int colm){
//     for(int i=0;i<row;i++){
//         for(int j =0;j<colm;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[10][10];
//     int R,C;
//     cin>>R>>C;
//     inputOfarr(arr,R,C);
//     printOfarr(arr,R,C);

// return 0;
// }







// Print the output in the waveForms--------------->






#include<iostream>
using namespace std;
void inputOfarr(int arr[][10], int row ,int colm){
    for(int i=0;i<row;i++){
        for(int j =0;j<colm;j++){
            cin>>arr[i][j];
        }
    }
   
}

void printOfarr(int arr[][10],int row ,int colm){
    
}
int main(){
    int arr[10][10];
    int R,C;
    cin>>R>>C;
    inputOfarr(arr,R,C);
    printOfarr(arr,R,C);

return 0;
}