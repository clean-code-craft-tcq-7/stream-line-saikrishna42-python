#include "BMSParameter_DataGen.hpp"

void Data::gen_Data(float incr)
{
    float j=0;
    for(int i=0;i<50;i++)
    {
        j+=incr;
        Data[i]=j;
        
    }
}

void Data::send_Data_2cmd()
{
     for(int i=0;i<50;i++)
    {
        cout<<Data[i]<<" ";
    }
}
