#ifndef _OPENCONFIG_INTERFACES_
#define _OPENCONFIG_INTERFACES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "openconfig_if_aggregate.hpp"
#include "openconfig_if_ethernet.hpp"
#include "openconfig_if_ip.hpp"
#include "openconfig_vlan.hpp"
#include "ydk_ietf/ietf_interfaces.hpp"

namespace ydk {
namespace openconfig_interfaces {

class Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Interface : public Entity
    {
        public:
            Interface();
            ~Interface();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            //type: string (refers to openconfig_interfaces::Interfaces::Interface::Config::name)
            Value name;


        class Config : public Entity
        {
            public:
                Config();
                ~Config();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: InterfaceTypeIdentity
                Value mtu; //type: uint16
                Value name; //type: string
                Value description; //type: string
                Value enabled; //type: boolean




        }; // Interfaces::Interface::Config


        class State : public Entity
        {
            public:
                State();
                ~State();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: InterfaceTypeIdentity
                Value mtu; //type: uint16
                Value name; //type: string
                Value description; //type: string
                Value enabled; //type: boolean
                Value ifindex; //type: uint32
                Value admin_status; //type: AdminStatusEnum
                Value oper_status; //type: OperStatusEnum
                Value last_change; //type: uint32
                //type: leafref (refers to openconfig_platform::Components::Component::name)
                Value hardware_port;


            class Counters : public Entity
            {
                public:
                    Counters();
                    ~Counters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value in_octets; //type: uint64
                    Value in_unicast_pkts; //type: uint64
                    Value in_broadcast_pkts; //type: uint64
                    Value in_multicast_pkts; //type: uint64
                    Value in_discards; //type: uint64
                    Value in_errors; //type: uint64
                    Value in_unknown_protos; //type: uint32
                    Value out_octets; //type: uint64
                    Value out_unicast_pkts; //type: uint64
                    Value out_broadcast_pkts; //type: uint64
                    Value out_multicast_pkts; //type: uint64
                    Value out_discards; //type: uint64
                    Value out_errors; //type: uint64
                    Value last_clear; //type: string




            }; // Interfaces::Interface::State::Counters


                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::State::Counters> counters;
                class AdminStatusEnum;
                class OperStatusEnum;


        }; // Interfaces::Interface::State


        class HoldTime : public Entity
        {
            public:
                HoldTime();
                ~HoldTime();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value up; //type: uint32
                    Value down; //type: uint32




            }; // Interfaces::Interface::HoldTime::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value up; //type: uint32
                    Value down; //type: uint32




            }; // Interfaces::Interface::HoldTime::State


                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::HoldTime::Config> config;
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::HoldTime::State> state;


        }; // Interfaces::Interface::HoldTime


        class Subinterfaces : public Entity
        {
            public:
                Subinterfaces();
                ~Subinterfaces();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Subinterface : public Entity
            {
                public:
                    Subinterface();
                    ~Subinterface();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    //type: uint32 (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Config::index_)
                    Value index_;


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value index_; //type: uint32
                        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
                        Value unnumbered;
                        Value name; //type: string
                        Value description; //type: string
                        Value enabled; //type: boolean




                }; // Interfaces::Interface::Subinterfaces::Subinterface::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value index_; //type: uint32
                        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
                        Value unnumbered;
                        Value name; //type: string
                        Value description; //type: string
                        Value enabled; //type: boolean
                        Value ifindex; //type: uint32
                        Value admin_status; //type: AdminStatusEnum
                        Value oper_status; //type: OperStatusEnum
                        Value last_change; //type: uint32


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value in_octets; //type: uint64
                            Value in_unicast_pkts; //type: uint64
                            Value in_broadcast_pkts; //type: uint64
                            Value in_multicast_pkts; //type: uint64
                            Value in_discards; //type: uint64
                            Value in_errors; //type: uint64
                            Value in_unknown_protos; //type: uint32
                            Value out_octets; //type: uint64
                            Value out_unicast_pkts; //type: uint64
                            Value out_broadcast_pkts; //type: uint64
                            Value out_multicast_pkts; //type: uint64
                            Value out_discards; //type: uint64
                            Value out_errors; //type: uint64
                            Value last_clear; //type: string




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::State::Counters


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::State::Counters> counters;
                        class AdminStatusEnum;
                        class OperStatusEnum;


                }; // Interfaces::Interface::Subinterfaces::Subinterface::State


                class Vlan : public Entity
                {
                    public:
                        Vlan();
                        ~Vlan();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value global_vlan_id; //type: one of uint16, string
                            Value vlan_id; //type: one of uint16, string




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value global_vlan_id; //type: one of uint16, string
                            Value vlan_id; //type: one of uint16, string




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config> config;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State> state;


                }; // Interfaces::Interface::Subinterfaces::Subinterface::Vlan


                class Ipv4 : public Entity
                {
                    public:
                        Ipv4();
                        ~Ipv4();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Address : public Entity
                    {
                        public:
                            Address();
                            ~Address();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::ip)
                            Value ip;


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value prefix_length; //type: uint8




                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value prefix_length; //type: uint8
                                Value origin; //type: IpAddressOriginEnum


                                class IpAddressOriginEnum;


                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State


                        class Vrrp : public Entity
                        {
                            public:
                                Vrrp();
                                ~Vrrp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VrrpGroup : public Entity
                            {
                                public:
                                    VrrpGroup();
                                    ~VrrpGroup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
                                    Value virtual_router_id;


                                class Config : public Entity
                                {
                                    public:
                                        Config();
                                        ~Config();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value virtual_router_id; //type: uint8
                                        Value priority; //type: uint8
                                        Value preempt; //type: boolean
                                        Value preempt_delay; //type: uint16
                                        Value accept_mode; //type: boolean
                                        Value advertisement_interval; //type: uint16
                                        ValueList virtual_address; //type: list of  string




                                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config


                                class State : public Entity
                                {
                                    public:
                                        State();
                                        ~State();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value virtual_router_id; //type: uint8
                                        Value priority; //type: uint8
                                        Value preempt; //type: boolean
                                        Value preempt_delay; //type: uint16
                                        Value accept_mode; //type: boolean
                                        Value advertisement_interval; //type: uint16
                                        Value current_priority; //type: uint8
                                        ValueList virtual_address; //type: list of  string




                                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State


                                class InterfaceTracking : public Entity
                                {
                                    public:
                                        InterfaceTracking();
                                        ~InterfaceTracking();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Config : public Entity
                                    {
                                        public:
                                            Config();
                                            ~Config();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                            Value track_interface;
                                            Value priority_decrement; //type: uint8




                                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


                                    class State : public Entity
                                    {
                                        public:
                                            State();
                                            ~State();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                            Value track_interface;
                                            Value priority_decrement; //type: uint8




                                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State


                                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;


                                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking


                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config> config;
                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State> state;


                            }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup


                                std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup> > vrrp_group;


                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp


                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config> config;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State> state;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp> vrrp;


                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address


                    class Neighbor : public Entity
                    {
                        public:
                            Neighbor();
                            ~Neighbor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::ip)
                            Value ip;


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value link_layer_address; //type: string




                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value link_layer_address; //type: string
                                Value origin; //type: NeighborOriginEnum


                                class NeighborOriginEnum;


                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State


                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config> config;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State> state;


                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enabled; //type: boolean
                            Value mtu; //type: uint16




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enabled; //type: boolean
                            Value mtu; //type: uint16




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State


                        std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address> > address;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config> config;
                        std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor> > neighbor;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State> state;


                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv4


                class Ipv6 : public Entity
                {
                    public:
                        Ipv6();
                        ~Ipv6();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Address : public Entity
                    {
                        public:
                            Address();
                            ~Address();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::ip)
                            Value ip;


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value prefix_length; //type: uint8




                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value prefix_length; //type: uint8
                                Value origin; //type: IpAddressOriginEnum
                                Value status; //type: StatusEnum


                                class IpAddressOriginEnum;
                                class StatusEnum;


                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State


                        class Vrrp : public Entity
                        {
                            public:
                                Vrrp();
                                ~Vrrp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VrrpGroup : public Entity
                            {
                                public:
                                    VrrpGroup();
                                    ~VrrpGroup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
                                    Value virtual_router_id;


                                class Config : public Entity
                                {
                                    public:
                                        Config();
                                        ~Config();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value virtual_router_id; //type: uint8
                                        Value priority; //type: uint8
                                        Value preempt; //type: boolean
                                        Value preempt_delay; //type: uint16
                                        Value accept_mode; //type: boolean
                                        Value advertisement_interval; //type: uint16
                                        Value virtual_link_local; //type: string
                                        ValueList virtual_address; //type: list of  string




                                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config


                                class State : public Entity
                                {
                                    public:
                                        State();
                                        ~State();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value virtual_router_id; //type: uint8
                                        Value priority; //type: uint8
                                        Value preempt; //type: boolean
                                        Value preempt_delay; //type: uint16
                                        Value accept_mode; //type: boolean
                                        Value advertisement_interval; //type: uint16
                                        Value current_priority; //type: uint8
                                        Value virtual_link_local; //type: string
                                        ValueList virtual_address; //type: list of  string




                                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State


                                class InterfaceTracking : public Entity
                                {
                                    public:
                                        InterfaceTracking();
                                        ~InterfaceTracking();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Config : public Entity
                                    {
                                        public:
                                            Config();
                                            ~Config();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                            Value track_interface;
                                            Value priority_decrement; //type: uint8




                                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


                                    class State : public Entity
                                    {
                                        public:
                                            State();
                                            ~State();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                            Value track_interface;
                                            Value priority_decrement; //type: uint8




                                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State


                                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;


                                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking


                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config> config;
                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State> state;


                            }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup


                                std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup> > vrrp_group;


                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp


                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config> config;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State> state;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp> vrrp;


                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address


                    class Neighbor : public Entity
                    {
                        public:
                            Neighbor();
                            ~Neighbor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: string (refers to openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::ip)
                            Value ip;


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value link_layer_address; //type: string




                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ip; //type: string
                                Value link_layer_address; //type: string
                                Value origin; //type: NeighborOriginEnum
                                Value is_router; //type: empty
                                Value neighbor_state; //type: NeighborStateEnum


                                class NeighborStateEnum;
                                class NeighborOriginEnum;


                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State


                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config> config;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State> state;


                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enabled; //type: boolean
                            Value mtu; //type: uint32
                            Value dup_addr_detect_transmits; //type: uint32




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value enabled; //type: boolean
                            Value mtu; //type: uint32
                            Value dup_addr_detect_transmits; //type: uint32




                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State


                    class Autoconf : public Entity
                    {
                        public:
                            Autoconf();
                            ~Autoconf();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value create_global_addresses; //type: boolean
                                Value create_temporary_addresses; //type: boolean
                                Value temporary_valid_lifetime; //type: uint32
                                Value temporary_preferred_lifetime; //type: uint32




                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value create_global_addresses; //type: boolean
                                Value create_temporary_addresses; //type: boolean
                                Value temporary_valid_lifetime; //type: uint32
                                Value temporary_preferred_lifetime; //type: uint32




                        }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State


                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config> config;
                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State> state;


                    }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf


                        std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address> > address;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf> autoconf;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config> config;
                        std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor> > neighbor;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State> state;


                }; // Interfaces::Interface::Subinterfaces::Subinterface::Ipv6


                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Config> config;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv4> ipv4; // presence node
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Ipv6> ipv6; // presence node
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::State> state;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::Vlan> vlan;


            }; // Interfaces::Interface::Subinterfaces::Subinterface


                std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface> > subinterface;


        }; // Interfaces::Interface::Subinterfaces


        class Ethernet : public Entity
        {
            public:
                Ethernet();
                ~Ethernet();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value mac_address; //type: string
                    Value auto_negotiate; //type: boolean
                    Value duplex_mode; //type: DuplexModeEnum
                    Value port_speed; //type: EthernetSpeedIdentity
                    Value enable_flow_control; //type: boolean
                    //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                    Value aggregate_id;


                    class DuplexModeEnum;


            }; // Interfaces::Interface::Ethernet::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value mac_address; //type: string
                    Value auto_negotiate; //type: boolean
                    Value duplex_mode; //type: DuplexModeEnum
                    Value port_speed; //type: EthernetSpeedIdentity
                    Value enable_flow_control; //type: boolean
                    Value hw_mac_address; //type: string
                    //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                    Value aggregate_id;


                class Counters : public Entity
                {
                    public:
                        Counters();
                        ~Counters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value in_mac_control_frames; //type: uint64
                        Value in_mac_pause_frames; //type: uint64
                        Value in_oversize_frames; //type: uint64
                        Value in_jabber_frames; //type: uint64
                        Value in_fragment_frames; //type: uint64
                        Value in_8021q_frames; //type: uint64
                        Value in_crc_errors; //type: uint64
                        Value out_mac_control_frames; //type: uint64
                        Value out_mac_pause_frames; //type: uint64
                        Value out_8021q_frames; //type: uint64




                }; // Interfaces::Interface::Ethernet::State::Counters


                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::State::Counters> counters;
                    class DuplexModeEnum;


            }; // Interfaces::Interface::Ethernet::State


            class Vlan : public Entity
            {
                public:
                    Vlan();
                    ~Vlan();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_mode; //type: VlanModeTypeEnum
                        Value native_vlan; //type: one of uint16, string
                        Value access_vlan; //type: one of uint16, string
                        ValueList trunk_vlans; //type: list of  one of union, uint16, string


                        class VlanModeTypeEnum;


                }; // Interfaces::Interface::Ethernet::Vlan::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_mode; //type: VlanModeTypeEnum
                        Value native_vlan; //type: one of uint16, string
                        Value access_vlan; //type: one of uint16, string
                        ValueList trunk_vlans; //type: list of  one of union, uint16, string


                        class VlanModeTypeEnum;


                }; // Interfaces::Interface::Ethernet::Vlan::State


                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::Vlan::Config> config;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::Vlan::State> state;


            }; // Interfaces::Interface::Ethernet::Vlan


                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::Config> config;
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::State> state;
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet::Vlan> vlan;


        }; // Interfaces::Interface::Ethernet


        class Aggregation : public Entity
        {
            public:
                Aggregation();
                ~Aggregation();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value lag_type; //type: AggregationTypeEnum
                    Value min_links; //type: uint16


                    class AggregationTypeEnum;


            }; // Interfaces::Interface::Aggregation::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value lag_type; //type: AggregationTypeEnum
                    Value min_links; //type: uint16
                    //type: list of  leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                    ValueList members;


                    class AggregationTypeEnum;


            }; // Interfaces::Interface::Aggregation::State


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


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interval; //type: LacpPeriodTypeEnum
                        Value lacp_mode; //type: LacpActivityTypeEnum
                        Value system_id_mac; //type: string
                        Value system_priority; //type: uint16


                        class LacpPeriodTypeEnum;
                        class LacpActivityTypeEnum;


                }; // Interfaces::Interface::Aggregation::Lacp::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interval; //type: LacpPeriodTypeEnum
                        Value lacp_mode; //type: LacpActivityTypeEnum
                        Value system_id_mac; //type: string
                        Value system_priority; //type: uint16


                        class LacpPeriodTypeEnum;
                        class LacpActivityTypeEnum;


                }; // Interfaces::Interface::Aggregation::Lacp::State


                class Members : public Entity
                {
                    public:
                        Members();
                        ~Members();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Member : public Entity
                    {
                        public:
                            Member();
                            ~Member();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::Members::Member::State::interface)
                            Value interface;


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                Value interface;
                                Value activity; //type: LacpActivityTypeEnum
                                Value timeout; //type: LacpTimeoutTypeEnum
                                Value synchronization; //type: LacpSynchronizationTypeEnum
                                Value aggregatable; //type: boolean
                                Value collecting; //type: boolean
                                Value distributing; //type: boolean
                                Value system_id; //type: string
                                Value oper_key; //type: uint16
                                Value partner_id; //type: string
                                Value partner_key; //type: uint16


                            class Counters : public Entity
                            {
                                public:
                                    Counters();
                                    ~Counters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value lacp_in_pkts; //type: uint64
                                    Value lacp_out_pkts; //type: uint64
                                    Value lacp_rx_errors; //type: uint64
                                    Value lacp_tx_errors; //type: uint64
                                    Value lacp_unknown_errors; //type: uint64
                                    Value lacp_errors; //type: uint64




                            }; // Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters


                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters> counters;
                                class LacpActivityTypeEnum;
                                class LacpSynchronizationTypeEnum;
                                class LacpTimeoutTypeEnum;


                        }; // Interfaces::Interface::Aggregation::Lacp::Members::Member::State


                            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::Members::Member::State> state;


                    }; // Interfaces::Interface::Aggregation::Lacp::Members::Member


                        std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::Members::Member> > member;


                }; // Interfaces::Interface::Aggregation::Lacp::Members


                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::Config> config;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::Members> members;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp::State> state;


            }; // Interfaces::Interface::Aggregation::Lacp


            class Vlan : public Entity
            {
                public:
                    Vlan();
                    ~Vlan();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_mode; //type: VlanModeTypeEnum
                        Value native_vlan; //type: one of uint16, string
                        Value access_vlan; //type: one of uint16, string
                        ValueList trunk_vlans; //type: list of  one of union, uint16, string


                        class VlanModeTypeEnum;


                }; // Interfaces::Interface::Aggregation::Vlan::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_mode; //type: VlanModeTypeEnum
                        Value native_vlan; //type: one of uint16, string
                        Value access_vlan; //type: one of uint16, string
                        ValueList trunk_vlans; //type: list of  one of union, uint16, string


                        class VlanModeTypeEnum;


                }; // Interfaces::Interface::Aggregation::Vlan::State


                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Vlan::Config> config;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Vlan::State> state;


            }; // Interfaces::Interface::Aggregation::Vlan


                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Config> config;
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Lacp> lacp; // presence node
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::State> state;
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation::Vlan> vlan;


        }; // Interfaces::Interface::Aggregation


        class RoutedVlan : public Entity
        {
            public:
                RoutedVlan();
                ~RoutedVlan();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value vlan; //type: one of uint16, string




            }; // Interfaces::Interface::RoutedVlan::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value vlan; //type: one of uint16, string




            }; // Interfaces::Interface::RoutedVlan::State


            class Ipv4 : public Entity
            {
                public:
                    Ipv4();
                    ~Ipv4();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Address : public Entity
                {
                    public:
                        Address();
                        ~Address();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::ip)
                        Value ip;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value prefix_length; //type: uint8




                    }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value prefix_length; //type: uint8
                            Value origin; //type: IpAddressOriginEnum


                            class IpAddressOriginEnum;


                    }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::State


                    class Vrrp : public Entity
                    {
                        public:
                            Vrrp();
                            ~Vrrp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class VrrpGroup : public Entity
                        {
                            public:
                                VrrpGroup();
                                ~VrrpGroup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
                                Value virtual_router_id;


                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_router_id; //type: uint8
                                    Value priority; //type: uint8
                                    Value preempt; //type: boolean
                                    Value preempt_delay; //type: uint16
                                    Value accept_mode; //type: boolean
                                    Value advertisement_interval; //type: uint16
                                    ValueList virtual_address; //type: list of  string




                            }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_router_id; //type: uint8
                                    Value priority; //type: uint8
                                    Value preempt; //type: boolean
                                    Value preempt_delay; //type: uint16
                                    Value accept_mode; //type: boolean
                                    Value advertisement_interval; //type: uint16
                                    Value current_priority; //type: uint8
                                    ValueList virtual_address; //type: list of  string




                            }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State


                            class InterfaceTracking : public Entity
                            {
                                public:
                                    InterfaceTracking();
                                    ~InterfaceTracking();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Config : public Entity
                                {
                                    public:
                                        Config();
                                        ~Config();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                        Value track_interface;
                                        Value priority_decrement; //type: uint8




                                }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


                                class State : public Entity
                                {
                                    public:
                                        State();
                                        ~State();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                        Value track_interface;
                                        Value priority_decrement; //type: uint8




                                }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State


                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;


                            }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking


                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config> config;
                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State> state;


                        }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup


                            std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup> > vrrp_group;


                    }; // Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Config> config;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::State> state;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp> vrrp;


                }; // Interfaces::Interface::RoutedVlan::Ipv4::Address


                class Neighbor : public Entity
                {
                    public:
                        Neighbor();
                        ~Neighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::ip)
                        Value ip;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value link_layer_address; //type: string




                    }; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value link_layer_address; //type: string
                            Value origin; //type: NeighborOriginEnum


                            class NeighborOriginEnum;


                    }; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config> config;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State> state;


                }; // Interfaces::Interface::RoutedVlan::Ipv4::Neighbor


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enabled; //type: boolean
                        Value mtu; //type: uint16




                }; // Interfaces::Interface::RoutedVlan::Ipv4::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enabled; //type: boolean
                        Value mtu; //type: uint16




                }; // Interfaces::Interface::RoutedVlan::Ipv4::State


                    std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Address> > address;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Config> config;
                    std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::Neighbor> > neighbor;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4::State> state;


            }; // Interfaces::Interface::RoutedVlan::Ipv4


            class Ipv6 : public Entity
            {
                public:
                    Ipv6();
                    ~Ipv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Address : public Entity
                {
                    public:
                        Address();
                        ~Address();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::ip)
                        Value ip;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value prefix_length; //type: uint8




                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value prefix_length; //type: uint8
                            Value origin; //type: IpAddressOriginEnum
                            Value status; //type: StatusEnum


                            class IpAddressOriginEnum;
                            class StatusEnum;


                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::State


                    class Vrrp : public Entity
                    {
                        public:
                            Vrrp();
                            ~Vrrp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class VrrpGroup : public Entity
                        {
                            public:
                                VrrpGroup();
                                ~VrrpGroup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                //type: uint8 (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::virtual_router_id)
                                Value virtual_router_id;


                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_router_id; //type: uint8
                                    Value priority; //type: uint8
                                    Value preempt; //type: boolean
                                    Value preempt_delay; //type: uint16
                                    Value accept_mode; //type: boolean
                                    Value advertisement_interval; //type: uint16
                                    Value virtual_link_local; //type: string
                                    ValueList virtual_address; //type: list of  string




                            }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value virtual_router_id; //type: uint8
                                    Value priority; //type: uint8
                                    Value preempt; //type: boolean
                                    Value preempt_delay; //type: uint16
                                    Value accept_mode; //type: boolean
                                    Value advertisement_interval; //type: uint16
                                    Value current_priority; //type: uint8
                                    Value virtual_link_local; //type: string
                                    ValueList virtual_address; //type: list of  string




                            }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State


                            class InterfaceTracking : public Entity
                            {
                                public:
                                    InterfaceTracking();
                                    ~InterfaceTracking();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Config : public Entity
                                {
                                    public:
                                        Config();
                                        ~Config();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                        Value track_interface;
                                        Value priority_decrement; //type: uint8




                                }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config


                                class State : public Entity
                                {
                                    public:
                                        State();
                                        ~State();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        //type: leafref (refers to openconfig_interfaces::Interfaces::Interface::name)
                                        Value track_interface;
                                        Value priority_decrement; //type: uint8




                                }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State


                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config> config;
                                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State> state;


                            }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking


                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config> config;
                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking> interface_tracking;
                                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State> state;


                        }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup


                            std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup> > vrrp_group;


                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Config> config;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::State> state;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp> vrrp;


                }; // Interfaces::Interface::RoutedVlan::Ipv6::Address


                class Neighbor : public Entity
                {
                    public:
                        Neighbor();
                        ~Neighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::ip)
                        Value ip;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value link_layer_address; //type: string




                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ip; //type: string
                            Value link_layer_address; //type: string
                            Value origin; //type: NeighborOriginEnum
                            Value is_router; //type: empty
                            Value neighbor_state; //type: NeighborStateEnum


                            class NeighborStateEnum;
                            class NeighborOriginEnum;


                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config> config;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State> state;


                }; // Interfaces::Interface::RoutedVlan::Ipv6::Neighbor


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enabled; //type: boolean
                        Value mtu; //type: uint32
                        Value dup_addr_detect_transmits; //type: uint32




                }; // Interfaces::Interface::RoutedVlan::Ipv6::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enabled; //type: boolean
                        Value mtu; //type: uint32
                        Value dup_addr_detect_transmits; //type: uint32




                }; // Interfaces::Interface::RoutedVlan::Ipv6::State


                class Autoconf : public Entity
                {
                    public:
                        Autoconf();
                        ~Autoconf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value create_global_addresses; //type: boolean
                            Value create_temporary_addresses; //type: boolean
                            Value temporary_valid_lifetime; //type: uint32
                            Value temporary_preferred_lifetime; //type: uint32




                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value create_global_addresses; //type: boolean
                            Value create_temporary_addresses; //type: boolean
                            Value temporary_valid_lifetime; //type: uint32
                            Value temporary_preferred_lifetime; //type: uint32




                    }; // Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State


                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config> config;
                        std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State> state;


                }; // Interfaces::Interface::RoutedVlan::Ipv6::Autoconf


                    std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Address> > address;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Autoconf> autoconf;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Config> config;
                    std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::Neighbor> > neighbor;
                    std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6::State> state;


            }; // Interfaces::Interface::RoutedVlan::Ipv6


                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Config> config;
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv4> ipv4; // presence node
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::Ipv6> ipv6; // presence node
                std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan::State> state;


        }; // Interfaces::Interface::RoutedVlan


            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Aggregation> aggregation; // presence node
            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Config> config;
            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Ethernet> ethernet;
            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::HoldTime> hold_time;
            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::RoutedVlan> routed_vlan;
            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::State> state;
            std::unique_ptr<openconfig_interfaces::Interfaces::Interface::Subinterfaces> subinterfaces;


    }; // Interfaces::Interface


        std::vector<std::unique_ptr<openconfig_interfaces::Interfaces::Interface> > interface;


}; // Interfaces


class Interfaces::Interface::State::AdminStatusEnum : public Enum
{
    public:
        static const Enum::Value UP;
        static const Enum::Value DOWN;
        static const Enum::Value TESTING;

};

class Interfaces::Interface::State::OperStatusEnum : public Enum
{
    public:
        static const Enum::Value UP;
        static const Enum::Value DOWN;
        static const Enum::Value TESTING;
        static const Enum::Value UNKNOWN;
        static const Enum::Value DORMANT;
        static const Enum::Value NOT_PRESENT;
        static const Enum::Value LOWER_LAYER_DOWN;

};

class Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatusEnum : public Enum
{
    public:
        static const Enum::Value UP;
        static const Enum::Value DOWN;
        static const Enum::Value TESTING;

};

class Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum : public Enum
{
    public:
        static const Enum::Value UP;
        static const Enum::Value DOWN;
        static const Enum::Value TESTING;
        static const Enum::Value UNKNOWN;
        static const Enum::Value DORMANT;
        static const Enum::Value NOT_PRESENT;
        static const Enum::Value LOWER_LAYER_DOWN;

};

class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum : public Enum
{
    public:
        static const Enum::Value PREFERRED;
        static const Enum::Value DEPRECATED;
        static const Enum::Value INVALID;
        static const Enum::Value INACCESSIBLE;
        static const Enum::Value UNKNOWN;
        static const Enum::Value TENTATIVE;
        static const Enum::Value DUPLICATE;
        static const Enum::Value OPTIMISTIC;

};

class Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::NeighborStateEnum : public Enum
{
    public:
        static const Enum::Value INCOMPLETE;
        static const Enum::Value REACHABLE;
        static const Enum::Value STALE;
        static const Enum::Value DELAY;
        static const Enum::Value PROBE;

};

class Interfaces::Interface::Ethernet::Config::DuplexModeEnum : public Enum
{
    public:
        static const Enum::Value FULL;
        static const Enum::Value HALF;

};

class Interfaces::Interface::Ethernet::State::DuplexModeEnum : public Enum
{
    public:
        static const Enum::Value FULL;
        static const Enum::Value HALF;

};

class Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum : public Enum
{
    public:
        static const Enum::Value PREFERRED;
        static const Enum::Value DEPRECATED;
        static const Enum::Value INVALID;
        static const Enum::Value INACCESSIBLE;
        static const Enum::Value UNKNOWN;
        static const Enum::Value TENTATIVE;
        static const Enum::Value DUPLICATE;
        static const Enum::Value OPTIMISTIC;

};

class Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::NeighborStateEnum : public Enum
{
    public:
        static const Enum::Value INCOMPLETE;
        static const Enum::Value REACHABLE;
        static const Enum::Value STALE;
        static const Enum::Value DELAY;
        static const Enum::Value PROBE;

};


}
}

#endif /* _OPENCONFIG_INTERFACES_ */

