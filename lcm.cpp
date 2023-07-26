//
//  lcm.cpp
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
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cin.ignore();
    
    for(int i = a; i > 0; i++)
    {
        if(i%a == 0 && i%b == 0)
        {
            cout<<"LCM between "<<a<<" and "<<b<<" is "<<i<<endl;
            i = -1;
        }
    }
}

