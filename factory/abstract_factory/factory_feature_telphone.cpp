#include "factory_feature_telphone.h"

#include "product/FeatureTelephone.h"

namespace factory
{
    std::shared_ptr<Telephone> factory_feature_telphone::make_telephone() const
    {
        return std::make_shared<FeatureTelephone>();
    }

}
