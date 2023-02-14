#include<iostream>

using namespace std;

class SOC
{
    private:
        float soc[50];
    public:
        void gen_socData(float);
        void send_socData_2cmd();
};


class ChargingRate
{
    private:
        float chargingRate[50];
    public:
        void gen_chargingRateData(float);
        void send_chargingRateData_2cmd();
};