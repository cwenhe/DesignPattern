#pragma once

#include <string>

namespace factory
{
    class Telephone;

    class SimpleFactory
    {
        public:
            static Telephone* makePhone(std::string const& type);

            template< typename _PhoneType >
            static Telephone* makePhoneByClass()
            {
                return new _PhoneType;
            }
    };
}
