#pragma once

#include <string>

#include "Telephone.h"

namespace factory
{

    class SmartTelephone: public Telephone
    {
        public:
            void call();

            static std::string name();

    };
}
