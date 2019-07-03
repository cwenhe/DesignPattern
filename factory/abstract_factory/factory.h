#pragma once
#include <memory>

#include "product/Telephone.h"

namespace factory
{
    class factory
    {
        public:
            virtual std::shared_ptr<Telephone> make_telephone() const = 0;
    };
}
