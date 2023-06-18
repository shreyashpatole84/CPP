#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit( UINT iNo)
{

   return iResult(iNo & 0XFFFFFFBF);
}
int main()
{
    UINT iValue = 0;
    
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    
    iRet= OffBit(iValue);
    
    cout<<"Result is :"<<iRet<<"\n";
    return 0;
}

/*

    0   1   1   1   0   1   0   0



*/