#include "factory/Telephone.h"
#include "factory/SimpleFactory.h"

#include "factory/SmartTelephone.h"


int main()
{
    auto phone = factory::SimpleFactory::makePhone("FeatureTelephone");
    auto phone_by_class  = factory::SimpleFactory::makePhoneByClass<factory::SmartTelephone>();
    phone->call();
    phone_by_class->call();

    return 0;
}
