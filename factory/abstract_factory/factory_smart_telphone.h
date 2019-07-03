#pragma once
#include "factory.h"

namespace factory
{
    class factory_smart_telephone: public factory
    {
        public:
            std::shared_ptr<Telephone> make_telephone() const;

    };
    
} /* factory */ 

