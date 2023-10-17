#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int arr[] = {1,2,3,9,2,9,0,5,7};
    int len =9 ;
    //inbuilt sort
    sort(arr, arr+len);

    //first sor6t the array as it is and if the first num is 0 the replace it will arr[1];
    if(arr[0]==0){
        swap(arr[0],arr[1]);
    }

    //making first number:
    int first_num = 0;
    for(int i =0; i<len; i++){
        first_num *= 10;
        first_num += arr[i];
    }
    cout<<first_num<<endl;

    //first changing the arr to make digits oif second num
    int a = len -1;
    while(a>=1){
        if(arr[a]==arr[a-1]) a--;
        else{
            swap(arr[a],arr[a-1]);
            break;
        }
    }

    int sec_num = 0;
    for(int i =0; i<len; i++){
        sec_num *= 10;
        sec_num += arr[i];
    }
    cout<<sec_num<<endl;
}