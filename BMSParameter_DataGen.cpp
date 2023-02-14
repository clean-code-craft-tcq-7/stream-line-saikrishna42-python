#include "BMSParameter_DataGen.hpp"

void SOC::gen_socData(float incr)
{
    float j=0;
    for(int i=0;i<50;i++)
    {
        j+=incr;
        soc[i]=j;
        
    }
}

void SOC::send_socData_2cmd()
{
     for(int i=0;i<50;i++)
    {
        cout<<soc[i]<<" ";
    }
}


void ChargingRate::gen_chargingRateData(float incr)
{
    float j=0;
    for(int i=0;i<50;i++)
    {
        j+=incr;
        chargingRate[i]=j;
        
    }
}

void ChargingRate::send_chargingRateData_2cmd()
{
     for(int i=0;i<50;i++)
    {
        cout<<chargingRate[i]<<" ";
    }
}

