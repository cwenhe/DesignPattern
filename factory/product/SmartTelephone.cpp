#include <iostream>

#include "SmartTelephone.h"


namespace factory
{
    void SmartTelephone::call()
    {
        std::cout<<"SmartTelephon Call"<<std::endl;
    }


    std::string SmartTelephone::name()
    {
        return std::string("SmartTelephone");
    }
}

