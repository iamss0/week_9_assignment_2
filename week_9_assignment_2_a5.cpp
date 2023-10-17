#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string arr[]= {"Shubhi","Shubham","Anmol","Anam"};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n;i++){
        bool flag = true;
        for(int j =0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
            else flag = true;
        }
        if(flag) break;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}