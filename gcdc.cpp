
// Created by Utkarsh on 18-08-2025.

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a=32,b=48,c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
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
    if (a==0) {
        cout<<"gcd---"<<b<<endl;
    }
    else {
        cout<<"gcd---"<<a<<endl;
    }

}

