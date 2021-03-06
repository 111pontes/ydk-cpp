#ifndef _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_
#define _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_show_fpd_loc_ng_oper {

class ShowFpd : public Entity
{
    public:
        ShowFpd();
        ~ShowFpd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Locations : public Entity
    {
        public:
            Locations();
            ~Locations();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Location : public Entity
        {
            public:
                Location();
                ~Location();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value location_name; //type: string


            class Fpd : public Entity
            {
                public:
                    Fpd();
                    ~Fpd();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value fpd_name; //type: string


                class FpdInfoDetaile : public Entity
                {
                    public:
                        FpdInfoDetaile();
                        ~FpdInfoDetaile();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value location; //type: string
                        Value card_name; //type: string
                        Value fpd_name; //type: string
                        Value hw_version; //type: string
                        Value secure_boot_attr; //type: string
                        Value status; //type: string
                        Value running_version; //type: string
                        Value programd_version; //type: string




                }; // ShowFpd::Locations::Location::Fpd::FpdInfoDetaile


                    std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location::Fpd::FpdInfoDetaile> > fpd_info_detaile;


            }; // ShowFpd::Locations::Location::Fpd


                std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location::Fpd> > fpd;


        }; // ShowFpd::Locations::Location


            std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations::Location> > location;


    }; // ShowFpd::Locations


    class HwModuleFpd : public Entity
    {
        public:
            HwModuleFpd();
            ~HwModuleFpd();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class FpdInfoDetaile : public Entity
        {
            public:
                FpdInfoDetaile();
                ~FpdInfoDetaile();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value location; //type: string
                Value card_name; //type: string
                Value fpd_name; //type: string
                Value hw_version; //type: string
                Value secure_boot_attr; //type: string
                Value status; //type: string
                Value running_version; //type: string
                Value programd_version; //type: string




        }; // ShowFpd::HwModuleFpd::FpdInfoDetaile


            std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpd::FpdInfoDetaile> > fpd_info_detaile;


    }; // ShowFpd::HwModuleFpd


    class HelpLocations : public Entity
    {
        public:
            HelpLocations();
            ~HelpLocations();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class HelpLocation : public Entity
        {
            public:
                HelpLocation();
                ~HelpLocation();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value location_name; //type: string


            class HelpFpd : public Entity
            {
                public:
                    HelpFpd();
                    ~HelpFpd();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class FpdName : public Entity
                {
                    public:
                        FpdName();
                        ~FpdName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value location; //type: string
                        Value fpd_name; //type: string




                }; // ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName


                    std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation::HelpFpd::FpdName> > fpd_name;


            }; // ShowFpd::HelpLocations::HelpLocation::HelpFpd


                std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation::HelpFpd> help_fpd;


        }; // ShowFpd::HelpLocations::HelpLocation


            std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations::HelpLocation> > help_location;


    }; // ShowFpd::HelpLocations


    class HwModuleFpdHelpFpd : public Entity
    {
        public:
            HwModuleFpdHelpFpd();
            ~HwModuleFpdHelpFpd();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class FpdName : public Entity
        {
            public:
                FpdName();
                ~FpdName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value location; //type: string
                Value fpd_name; //type: string




        }; // ShowFpd::HwModuleFpdHelpFpd::FpdName


            std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpdHelpFpd::FpdName> > fpd_name;


    }; // ShowFpd::HwModuleFpdHelpFpd


    class Package : public Entity
    {
        public:
            Package();
            ~Package();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class FpdPkgData : public Entity
        {
            public:
                FpdPkgData();
                ~FpdPkgData();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value card_type; //type: string
                Value fpd_desc; //type: string
                Value upgrade_method; //type: string
                Value fpd_ver; //type: string
                Value min_sw_ver; //type: string
                Value min_hw_ver; //type: string




        }; // ShowFpd::Package::FpdPkgData


            std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Package::FpdPkgData> > fpd_pkg_data;


    }; // ShowFpd::Package


    class LocationHelp : public Entity
    {
        public:
            LocationHelp();
            ~LocationHelp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LocationName : public Entity
        {
            public:
                LocationName();
                ~LocationName();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value location_name; //type: string




        }; // ShowFpd::LocationHelp::LocationName


            std::vector<std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::LocationHelp::LocationName> > location_name;


    }; // ShowFpd::LocationHelp


        std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HelpLocations> help_locations;
        std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpd> hw_module_fpd;
        std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::HwModuleFpdHelpFpd> hw_module_fpd_help_fpd;
        std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::LocationHelp> location_help;
        std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Locations> locations;
        std::unique_ptr<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd::Package> package;


}; // ShowFpd



}
}

#endif /* _CISCO_IOS_XR_SHOW_FPD_LOC_NG_OPER_ */

