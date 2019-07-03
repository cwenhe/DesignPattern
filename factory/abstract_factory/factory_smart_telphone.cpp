#include "factory_smart_telphone.h"
#include "product/SmartTelephone.h"

namespace factory
{
    std::shared_ptr<Telephone> factory_smart_telephone::make_telephone() const
    {
        return std::make_shared<SmartTelephone>();
    }

}
