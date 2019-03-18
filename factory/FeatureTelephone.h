#pragma once

#include <string>

#include "Telephone.h"

namespace factory
{
    class FeatureTelephone: public Telephone
    {
        public:
            virtual void call();

            static std::string name();
    };
}
