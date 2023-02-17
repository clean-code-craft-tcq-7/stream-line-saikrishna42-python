#include "BMSParameter_DataGen.hpp"

void Send()
{
    Data soc_data;
    Data cr_data;

    soc_data.gen_Data(1);
    cout<<"SOC :";
    soc_data.send_Data_2cmd();
    cout<<endl;    
    cr_data.gen_Data(0.1);
    cout<<"ChargingRate : ";
    cr_data.send_Data_2cmd();
    cout<<endl;  
}