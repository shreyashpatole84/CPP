#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit( UINT iNo)
{
    UINT iMask = 0X00102040;
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
        cout<<"14th, 7th and 21th bits are ON"<<"\n";
    }
    else
    {
        cout<<"14th, 7th and 21th bits are OFF"<<"\n";
    }

    return 0;
}