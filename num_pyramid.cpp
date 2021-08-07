/*
1
2 1
3 2 1
4 3 2 1
3 2 1
2 1
1
*/
#include<iostream>
using namespace std;

int main(){
for(int i=4;i>0;i--){
    for(int j=4-(i-1);j>0;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
for(int i=4;i>0;i--){
    for(int j=i-1;j>0;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
}
  
