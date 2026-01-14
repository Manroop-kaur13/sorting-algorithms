#include<iostream>
using namespace std;
#include<vector>
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int partition(vector<int>&arr,int st,int end){
    int idx=st-1,pivot=arr[end];
    for(int i=st;i<end;i++){
        if(arr[i]<pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
}
idx++;
swap(arr[idx],arr[end]);
return idx; 
}


void quicksort(vector<int>&arr,int st,int end){
    if(st<end){
        int pivot=partition(arr,st,end);
        quicksort(arr,st,pivot-1);
        quicksort(arr,pivot+1,end);
    }
}

int main(){
    vector<int>arr={38,27,43,3,9,82,10};
    int n=arr.size();
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}