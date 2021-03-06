#ifndef _CISCO_IOS_XR_BUNDLEMGR_CFG_
#define _CISCO_IOS_XR_BUNDLEMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_cfg {

class Lacp : public Entity
{
    public:
        Lacp();
        ~Lacp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value system_mac; //type: string
        Value system_priority; //type: uint32




}; // Lacp


class BundleMaximumActiveLinksModeEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value hot_standby;

};

class BundleCiscoExtTypesEnum : public Enum
{
    public:
        static const Enum::Value lon_signaling_off;
        static const Enum::Value lon_signaling_on;

};

class BundleModeEnum : public Enum
{
    public:
        static const Enum::Value on;
        static const Enum::Value active;
        static const Enum::Value passive;

};

class BundleLoadBalanceEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value efp_auto;
        static const Enum::Value efp_value;
        static const Enum::Value source_ip;
        static const Enum::Value destination_ip;

};

class ChurnLoggingEnum : public Enum
{
    public:
        static const Enum::Value actor;
        static const Enum::Value partner;
        static const Enum::Value both;

};

class MlacpSwitchoverEnum : public Enum
{
    public:
        static const Enum::Value brute_force;
        static const Enum::Value revertive;

};

class MlacpMaximizeParameterEnum : public Enum
{
    public:
        static const Enum::Value links;
        static const Enum::Value bandwidth;

};

class BfdModeEnum : public Enum
{
    public:
        static const Enum::Value no_cfg;
        static const Enum::Value cisco;
        static const Enum::Value ietf;

};

class PeriodShortEnumEnum : public Enum
{
    public:
        static const Enum::Value true_;

};

class BundlePeriodEnum : public Enum
{
    public:
        static const Enum::Value true_;

};

class BundlePortActivityEnum : public Enum
{
    public:
        static const Enum::Value on;
        static const Enum::Value active;
        static const Enum::Value passive;
        static const Enum::Value inherit;

};


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_CFG_ */

