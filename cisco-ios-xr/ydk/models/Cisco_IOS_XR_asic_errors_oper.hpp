#ifndef _CISCO_IOS_XR_ASIC_ERRORS_OPER_
#define _CISCO_IOS_XR_ASIC_ERRORS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asic_errors_oper {

class AsicErrors : public Entity
{
    public:
        AsicErrors();
        ~AsicErrors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class AsicInformation : public Entity
            {
                public:
                    AsicInformation();
                    ~AsicInformation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value asic; //type: string


                class AllInstances : public Entity
                {
                    public:
                        AllInstances();
                        ~AllInstances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AllErrorPath : public Entity
                    {
                        public:
                            AllErrorPath();
                            ~AllErrorPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Summary : public Entity
                        {
                            public:
                                Summary();
                                ~Summary();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value legacy_client; //type: boolean
                                Value cih_client; //type: boolean


                            class SumData : public Entity
                            {
                                public:
                                    SumData();
                                    ~SumData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value num_nodes; //type: uint32
                                    Value crc_err_count; //type: uint32
                                    Value sbe_err_count; //type: uint32
                                    Value mbe_err_count; //type: uint32
                                    Value par_err_count; //type: uint32
                                    Value gen_err_count; //type: uint32
                                    Value reset_err_count; //type: uint32
                                    ValueList err_count; //type: list of  uint32
                                    ValueList pcie_err_count; //type: list of  uint32
                                    ValueList node_key; //type: list of  uint32




                            }; // AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary::SumData> > sum_data;


                        }; // AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary


                            std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath::Summary> summary;


                    }; // AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath


                        std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances::AllErrorPath> all_error_path;


                }; // AsicErrors::Nodes::Node::AsicInformation::AllInstances


                class Instances : public Entity
                {
                    public:
                        Instances();
                        ~Instances();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Instance : public Entity
                    {
                        public:
                            Instance();
                            ~Instance();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value asic_instance; //type: int32


                        class ErrorPath : public Entity
                        {
                            public:
                                ErrorPath();
                                ~ErrorPath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MultipleBitSoftErrors : public Entity
                            {
                                public:
                                    MultipleBitSoftErrors();
                                    ~MultipleBitSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors


                            class AsicErrorGenericSoft : public Entity
                            {
                                public:
                                    AsicErrorGenericSoft();
                                    ~AsicErrorGenericSoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft


                            class CrcHardErrors : public Entity
                            {
                                public:
                                    CrcHardErrors();
                                    ~CrcHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors


                            class AsicErrorSbeSoft : public Entity
                            {
                                public:
                                    AsicErrorSbeSoft();
                                    ~AsicErrorSbeSoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft


                            class HardwareSoftErrors : public Entity
                            {
                                public:
                                    HardwareSoftErrors();
                                    ~HardwareSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors


                            class AsicErrorCrcSoft : public Entity
                            {
                                public:
                                    AsicErrorCrcSoft();
                                    ~AsicErrorCrcSoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft


                            class AsicErrorParitySoft : public Entity
                            {
                                public:
                                    AsicErrorParitySoft();
                                    ~AsicErrorParitySoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft


                            class IoSoftErrors : public Entity
                            {
                                public:
                                    IoSoftErrors();
                                    ~IoSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors


                            class ResetSoftErrors : public Entity
                            {
                                public:
                                    ResetSoftErrors();
                                    ~ResetSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors


                            class BarrierHardErrors : public Entity
                            {
                                public:
                                    BarrierHardErrors();
                                    ~BarrierHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors


                            class UcodeSoftErrors : public Entity
                            {
                                public:
                                    UcodeSoftErrors();
                                    ~UcodeSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors


                            class AsicErrorResetHard : public Entity
                            {
                                public:
                                    AsicErrorResetHard();
                                    ~AsicErrorResetHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard


                            class SingleBitHardErrors : public Entity
                            {
                                public:
                                    SingleBitHardErrors();
                                    ~SingleBitHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors


                            class IndirectHardErrors : public Entity
                            {
                                public:
                                    IndirectHardErrors();
                                    ~IndirectHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors


                            class OutofResourceSoft : public Entity
                            {
                                public:
                                    OutofResourceSoft();
                                    ~OutofResourceSoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft


                            class CrcSoftErrors : public Entity
                            {
                                public:
                                    CrcSoftErrors();
                                    ~CrcSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors


                            class TimeOutHardErrors : public Entity
                            {
                                public:
                                    TimeOutHardErrors();
                                    ~TimeOutHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors


                            class BarrierSoftErrors : public Entity
                            {
                                public:
                                    BarrierSoftErrors();
                                    ~BarrierSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors


                            class AsicErrorMbeSoft : public Entity
                            {
                                public:
                                    AsicErrorMbeSoft();
                                    ~AsicErrorMbeSoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft


                            class BackPressureHardErrors : public Entity
                            {
                                public:
                                    BackPressureHardErrors();
                                    ~BackPressureHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors


                            class SingleBitSoftErrors : public Entity
                            {
                                public:
                                    SingleBitSoftErrors();
                                    ~SingleBitSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors


                            class IndirectSoftErrors : public Entity
                            {
                                public:
                                    IndirectSoftErrors();
                                    ~IndirectSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors


                            class GenericHardErrors : public Entity
                            {
                                public:
                                    GenericHardErrors();
                                    ~GenericHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors


                            class LinkHardErrors : public Entity
                            {
                                public:
                                    LinkHardErrors();
                                    ~LinkHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors


                            class ConfigurationHardErrors : public Entity
                            {
                                public:
                                    ConfigurationHardErrors();
                                    ~ConfigurationHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors


                            class InstanceSummary : public Entity
                            {
                                public:
                                    InstanceSummary();
                                    ~InstanceSummary();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value legacy_client; //type: boolean
                                    Value cih_client; //type: boolean


                                class SumData : public Entity
                                {
                                    public:
                                        SumData();
                                        ~SumData();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value num_nodes; //type: uint32
                                        Value crc_err_count; //type: uint32
                                        Value sbe_err_count; //type: uint32
                                        Value mbe_err_count; //type: uint32
                                        Value par_err_count; //type: uint32
                                        Value gen_err_count; //type: uint32
                                        Value reset_err_count; //type: uint32
                                        ValueList err_count; //type: list of  uint32
                                        ValueList pcie_err_count; //type: list of  uint32
                                        ValueList node_key; //type: list of  uint32




                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary::SumData> > sum_data;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary


                            class UnexpectedHardErrors : public Entity
                            {
                                public:
                                    UnexpectedHardErrors();
                                    ~UnexpectedHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors


                            class TimeOutSoftErrors : public Entity
                            {
                                public:
                                    TimeOutSoftErrors();
                                    ~TimeOutSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors


                            class AsicErrorGenericHard : public Entity
                            {
                                public:
                                    AsicErrorGenericHard();
                                    ~AsicErrorGenericHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard


                            class ParityHardErrors : public Entity
                            {
                                public:
                                    ParityHardErrors();
                                    ~ParityHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors


                            class DescriptorHardErrors : public Entity
                            {
                                public:
                                    DescriptorHardErrors();
                                    ~DescriptorHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors


                            class InterfaceHardErrors : public Entity
                            {
                                public:
                                    InterfaceHardErrors();
                                    ~InterfaceHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors


                            class AsicErrorSbeHard : public Entity
                            {
                                public:
                                    AsicErrorSbeHard();
                                    ~AsicErrorSbeHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard


                            class AsicErrorCrcHard : public Entity
                            {
                                public:
                                    AsicErrorCrcHard();
                                    ~AsicErrorCrcHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard


                            class AsicErrorParityHard : public Entity
                            {
                                public:
                                    AsicErrorParityHard();
                                    ~AsicErrorParityHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard


                            class AsicErrorResetSoft : public Entity
                            {
                                public:
                                    AsicErrorResetSoft();
                                    ~AsicErrorResetSoft();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft


                            class BackPressureSoftErrors : public Entity
                            {
                                public:
                                    BackPressureSoftErrors();
                                    ~BackPressureSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors


                            class GenericSoftErrors : public Entity
                            {
                                public:
                                    GenericSoftErrors();
                                    ~GenericSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors


                            class LinkSoftErrors : public Entity
                            {
                                public:
                                    LinkSoftErrors();
                                    ~LinkSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors


                            class ConfigurationSoftErrors : public Entity
                            {
                                public:
                                    ConfigurationSoftErrors();
                                    ~ConfigurationSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors


                            class MultipleBitHardErrors : public Entity
                            {
                                public:
                                    MultipleBitHardErrors();
                                    ~MultipleBitHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors


                            class UnexpectedSoftErrors : public Entity
                            {
                                public:
                                    UnexpectedSoftErrors();
                                    ~UnexpectedSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors


                            class OutofResourceHard : public Entity
                            {
                                public:
                                    OutofResourceHard();
                                    ~OutofResourceHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard


                            class HardwareHardErrors : public Entity
                            {
                                public:
                                    HardwareHardErrors();
                                    ~HardwareHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors


                            class ParitySoftErrors : public Entity
                            {
                                public:
                                    ParitySoftErrors();
                                    ~ParitySoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors


                            class DescriptorSoftErrors : public Entity
                            {
                                public:
                                    DescriptorSoftErrors();
                                    ~DescriptorSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors


                            class InterfaceSoftErrors : public Entity
                            {
                                public:
                                    InterfaceSoftErrors();
                                    ~InterfaceSoftErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors


                            class IoHardErrors : public Entity
                            {
                                public:
                                    IoHardErrors();
                                    ~IoHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors


                            class ResetHardErrors : public Entity
                            {
                                public:
                                    ResetHardErrors();
                                    ~ResetHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors


                            class UcodeHardErrors : public Entity
                            {
                                public:
                                    UcodeHardErrors();
                                    ~UcodeHardErrors();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors


                            class AsicErrorMbeHard : public Entity
                            {
                                public:
                                    AsicErrorMbeHard();
                                    ~AsicErrorMbeHard();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Error : public Entity
                                {
                                    public:
                                        Error();
                                        ~Error();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value name; //type: string
                                        Value asic_info; //type: string
                                        Value node_key; //type: uint32
                                        Value alarm_on; //type: boolean
                                        Value thresh_hi; //type: uint32
                                        Value period_hi; //type: uint32
                                        Value thresh_lo; //type: uint32
                                        Value period_lo; //type: uint32
                                        Value count; //type: uint32
                                        Value intr_type; //type: uint32
                                        Value leaf_id; //type: uint32
                                        Value last_cleared; //type: uint64


                                    class CsrsInfo : public Entity
                                    {
                                        public:
                                            CsrsInfo();
                                            ~CsrsInfo();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value name; //type: string
                                            Value address; //type: uint64
                                            Value width; //type: uint32




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo


                                    class LastErr : public Entity
                                    {
                                        public:
                                            LastErr();
                                            ~LastErr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value at_time; //type: uint64
                                            Value at_time_nsec; //type: uint64
                                            Value counter_val; //type: uint32
                                            Value error_desc; //type: string
                                            ValueList error_regval; //type: list of  uint8




                                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::CsrsInfo> > csrs_info;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error::LastErr> > last_err;


                                }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard::Error> > error;


                            }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard


                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcHard> asic_error_crc_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorCrcSoft> asic_error_crc_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericHard> asic_error_generic_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorGenericSoft> asic_error_generic_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeHard> asic_error_mbe_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorMbeSoft> asic_error_mbe_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParityHard> asic_error_parity_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorParitySoft> asic_error_parity_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetHard> asic_error_reset_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorResetSoft> asic_error_reset_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeHard> asic_error_sbe_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::AsicErrorSbeSoft> asic_error_sbe_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureHardErrors> back_pressure_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BackPressureSoftErrors> back_pressure_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierHardErrors> barrier_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::BarrierSoftErrors> barrier_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationHardErrors> configuration_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ConfigurationSoftErrors> configuration_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcHardErrors> crc_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::CrcSoftErrors> crc_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorHardErrors> descriptor_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::DescriptorSoftErrors> descriptor_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericHardErrors> generic_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::GenericSoftErrors> generic_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareHardErrors> hardware_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::HardwareSoftErrors> hardware_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectHardErrors> indirect_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IndirectSoftErrors> indirect_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InstanceSummary> instance_summary;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceHardErrors> interface_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::InterfaceSoftErrors> interface_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoHardErrors> io_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::IoSoftErrors> io_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkHardErrors> link_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::LinkSoftErrors> link_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors> multiple_bit_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors> multiple_bit_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard> outof_resource_hard;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft> outof_resource_soft;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors> parity_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors> parity_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors> reset_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors> reset_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors> single_bit_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors> single_bit_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors> time_out_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors> time_out_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors> ucode_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors> ucode_soft_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors> unexpected_hard_errors;
                                std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors> unexpected_soft_errors;


                        }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath


                            std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath> error_path;


                    }; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance


                        std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance> > instance;


                }; // AsicErrors::Nodes::Node::AsicInformation::Instances


                    std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::AllInstances> all_instances;
                    std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances> instances;


            }; // AsicErrors::Nodes::Node::AsicInformation


                std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation> > asic_information;


        }; // AsicErrors::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node> > node;


    }; // AsicErrors::Nodes


        std::unique_ptr<Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes> nodes;


}; // AsicErrors



}
}

#endif /* _CISCO_IOS_XR_ASIC_ERRORS_OPER_ */

