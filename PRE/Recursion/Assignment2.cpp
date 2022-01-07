#include <bits/stdc++.h>
using namespace std;

void replace(string st, int start){
    // base case
    if(st.length()<=1){
       return;
    }
    //recursive case
    replace(st,start+1);
    if(st[start]=='p',st[start+1]=='i'){
      for(int i = st.length(); i>=start+2 ; i--){
          st[i+2]=st[i];
      }

      st[start] = '3';
      st[start+1] = '.';
      st[start+2] = '1';
      st[start+3] = '4';


    }
    return;
}

int main(){
    string st ="xpixpix";
    replace(st,0);
    cout<<st<<endl;
  return 0;
}