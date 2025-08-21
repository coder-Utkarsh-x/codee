//
// Created by Utkarsh on 21-08-2025.
//
#include<iostream>
using namespace std;
void insertion(int ar[],int n) {
    for(int i=0;i<n;i++) {
        int pr=ar[i];
        for (int j=i+1;j<n;j++) {
            if (ar[j]<pr) {
                swap(ar[i],ar[j]);

            }
        }

    }

}
int main() {
    int ar[]={5,6,3,9,1,7};
    int n=6;
    insertion(ar,n);
    for (int i=0;i<n;i++) {
        cout<<ar[i]<<"";

    }
}