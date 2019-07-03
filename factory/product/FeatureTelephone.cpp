#include <iostream>

#include "FeatureTelephone.h"


namespace factory
{
    void FeatureTelephone::call()
    {
        std::cout<<"FeatureTelephone Call"<<std::endl;
    }

    std::string FeatureTelephone::name()
    {
        return std::string("FeatureTelephone");
    }
}

