#ifndef _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_
#define _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_oper {

class Keychain : public Entity
{
    public:
        Keychain();
        ~Keychain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Keies : public Entity
    {
        public:
            Keies();
            ~Keies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Key : public Entity
        {
            public:
                Key();
                ~Key();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value key_name; //type: string
                Value accept_tolerance; //type: int32


            class Key_ : public Entity
            {
                public:
                    Key_();
                    ~Key_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class KeyId : public Entity
                {
                    public:
                        KeyId();
                        ~KeyId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value key_string; //type: string
                        Value key_id; //type: uint64
                        Value cryptographic_algorithm; //type: CrytoAlgoEnum


                    class SendLifetime : public Entity
                    {
                        public:
                            SendLifetime();
                            ~SendLifetime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value start; //type: string
                            Value end; //type: string
                            Value duration; //type: int32
                            Value is_always_valid; //type: boolean
                            Value is_valid_now; //type: boolean




                    }; // Keychain::Keies::Key::Key_::KeyId::SendLifetime


                    class AcceptLifetime : public Entity
                    {
                        public:
                            AcceptLifetime();
                            ~AcceptLifetime();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value start; //type: string
                            Value end; //type: string
                            Value duration; //type: int32
                            Value is_always_valid; //type: boolean
                            Value is_valid_now; //type: boolean




                    }; // Keychain::Keies::Key::Key_::KeyId::AcceptLifetime


                        std::unique_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::AcceptLifetime> accept_lifetime;
                        std::unique_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId::SendLifetime> send_lifetime;
                        class CrytoAlgoEnum;


                }; // Keychain::Keies::Key::Key_::KeyId


                    std::vector<std::unique_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_::KeyId> > key_id;


            }; // Keychain::Keies::Key::Key_


                std::unique_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key::Key_> key;


        }; // Keychain::Keies::Key


            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies::Key> > key;


    }; // Keychain::Keies


        std::unique_ptr<Cisco_IOS_XR_lib_keychain_oper::Keychain::Keies> keies;


}; // Keychain


class CrytoAlgoEnum : public Enum
{
    public:
        static const Enum::Value not_configured;
        static const Enum::Value hmac_sha1_12;
        static const Enum::Value md5;
        static const Enum::Value sha1;
        static const Enum::Value hmac_md5;
        static const Enum::Value hmac_sha1_20;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_KEYCHAIN_OPER_ */

