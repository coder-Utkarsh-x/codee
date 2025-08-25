//
// Created by Utkarsh on 25-08-2025.
//
//
// Created by Utkarsh on 18-08-2025.
//
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a=32,b=48,c;
    while (a!=0&&b!=0) {
        if (a>b) {
            c=b;
            b=a%b;
            a=c;
        }
        else {
            c=a;
            a=b%a;
            b=c;
        }

    }
    cout<<a<<" "<<b<<endl;

}

