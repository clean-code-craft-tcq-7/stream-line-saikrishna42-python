#include "BMSParameter_DataGen.hpp"

int main()
{
    SOC soc_data;
    ChargingRate cr_data;

    soc_data.gen_socData(1);
    cout<<"SOC :";
    soc_data.send_socData_2cmd();
    cout<<endl;    
    cr_data.gen_chargingRateData(0.1);
    cout<<"ChargingRate : ";
    cr_data.send_chargingRateData_2cmd();
    cout<<endl;  
}