#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit( UINT iNo)
{
    UINT iMask = 0X4;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet= CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"3rd bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rsd bit is OFF"<<"\n";
    }

    return 0;
}