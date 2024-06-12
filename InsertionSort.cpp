#include<iostream>
using namespace std;

int main(){

    int arr[6] = {6,5,4,3,2,1};

    for(int i=1;i<6;i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
    cout<<endl;

   return 0;
}
