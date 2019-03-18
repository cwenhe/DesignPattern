#include <cassert>

#include "SimpleFactory.h"

#include "FeatureTelephone.h"
#include "SmartTelephone.h"


namespace factory
{

    Telephone* SimpleFactory::makePhone(std::string const& type)
    {

        Telephone* ret = NULL;
        if( type == FeatureTelephone::name())
            ret = new FeatureTelephone;
        else if(type == SmartTelephone::name())
            ret = new SmartTelephone;
        else
            assert(false);


        return ret;
    }

}
