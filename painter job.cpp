//
// Created by Utkarsh on 19-07-2025.
//


#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
int valid(vector<int> &arr,int pai,int n,int min) {
    int pa=1;
    int t=0;
    for (int i=0;i<n;i++) {
        if (arr[i]>min) {
            return false;
        }
        else{
            if (arr[i]+t<=min) {
                t=+arr[i];
            }
            else {
                pai=+1;
            }

        }
    }
    return pa>pai ? false:true;
}
int mintime(vector<int> &arr,int painter,int n) {
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=+arr[i];

    }
    int st=0,end=n,ans=-1;
    while (st<=end) {
        int mid=st+(st-end)/2;
        if (valid(arr,painter,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else {
            st=mid+1;

        }
    }
    return ans;
}
int main() {
    int painter=2,n=4;
    vector<int> arr={40,30,10,20};
    cout<<mintime(arr,painter,n)<<endl;
    return 0;
}
