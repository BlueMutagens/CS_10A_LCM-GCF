//
//  main.cpp
//  Lab8
//
//  Created by Sean Belingheri on 10/13/22.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, i;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cin.ignore();
    
    for(i = b; !(a%i == 0 && b%i == 0) > 0; i--)
    {
    }
    
        
    cout<<"GCF between "<<a<<" and "<<b<<" is "<<i<<endl;
    

    
}

