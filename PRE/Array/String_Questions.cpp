

// Reverse the given string to the numbers of characters---->






// #include<iostream>
// #include<cstring>
// using namespace std;

// void rotate(char *ch,int k){
//     int i = strlen(ch);  //this is the length of the string including NULL

//     while(i>=0){
//         ch[i+k] = ch[i];
//         i--;
//     }
//     i = strlen(ch);
//     int j = i-k; //j is on second last
//     int s = 0;
//     while(j<i){
//       ch[s] = ch[j];
//       s++;
//       j++;
//     }

//     ch[i-k] = '\0'; //Here the i-kth is changed by the NULL to end the string

    
// }

// int main(){
//     char ch[10] = "HELLO";
//     int k;
//     cin>>k;
//     rotate(ch,k);
//     cout<<ch<<endl;
    
// return 0;
// }










// Chech if two string is permutation of each other or not---->










// #include<iostream>
// using namespace std;

// bool checkisPalindrome(char ch1[],char ch2[],int k1,int k2){

// if(k1!=k2){return false;}

// int frq[26] = {0} ;
// // Frequency of the first string 
// for (int i = 0;i<k1;i++){

// frq[ch1[i]- 'a']++;

// }

// // Frequenc(y of the second string

// for (int i = 0;i<k1;i++){

// frq[ch1[i]- 'a']--;

// }


// // Check whether the Frequency array is 0 or not

// for(int i = 0;i<26;i++){
//     if(frq[i]!=0){
//         return false;
//     }
// }
//     return true;
// }
// int main(){
    
//     int k1,k2;
//     cin>>k1>>k2;
//     char ch1[k1],ch2[k2];
//     for(int i = 0;i<k1;i++){
//         cin>>ch1[i];
//     }
    
//     for(int j = 0;j<k2;j++){
//         cin>>ch1[j];
//     }

// if(checkisPalindrome(ch1,ch2,k1,k2)){
//     cout<<"Yes"<<endl;}
//     else{
//         cout<<"NO"<<endl;
//     }
// return 0;
// }








// Substring of the given string--------->


// #include<iostream>
// using namespace std;

// int main(){
//     int k;
//     cin>>k;
//     char ch[k];
//     for(int i = 0;i<k;i++){
//         cin>>ch[i];
//     }

//     for(int i = 0;i<k;i++){
//         for(int j=i;j<k;j++){
//             for(int k =i;k<j;k++){
//             cout<<ch[k];
//             }
//         cout<<endl;
//         }
//     }

// return 0;
// }


