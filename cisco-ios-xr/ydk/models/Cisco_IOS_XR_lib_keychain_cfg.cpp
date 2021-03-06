
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_lib_keychain_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_keychain_cfg {

Keychains::Keychain::AcceptTolerance::AcceptTolerance()
    :
    	infinite{YType::boolean, "infinite"},
	 value_{YType::uint32, "value"}
{
    yang_name = "accept-tolerance"; yang_parent_name = "keychain";
}

Keychains::Keychain::AcceptTolerance::~AcceptTolerance()
{
}

bool Keychains::Keychain::AcceptTolerance::has_data() const
{
    return infinite.is_set
	|| value_.is_set;
}

bool Keychains::Keychain::AcceptTolerance::has_operation() const
{
    return is_set(operation)
	|| is_set(infinite.operation)
	|| is_set(value_.operation);
}

std::string Keychains::Keychain::AcceptTolerance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-tolerance";

    return path_buffer.str();

}

EntityPath Keychains::Keychain::AcceptTolerance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (infinite.is_set || is_set(infinite.operation)) leaf_name_data.push_back(infinite.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::Keychain::AcceptTolerance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::Keychain::AcceptTolerance::get_children()
{
    return children;
}

void Keychains::Keychain::AcceptTolerance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "infinite")
    {
        infinite = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Keychains::Keychain::Keies::Key::AcceptLifetime::AcceptLifetime()
    :
    	end_date{YType::uint32, "end-date"},
	 end_hour{YType::uint32, "end-hour"},
	 end_minutes{YType::uint32, "end-minutes"},
	 end_month{YType::enumeration, "end-month"},
	 end_seconds{YType::uint32, "end-seconds"},
	 end_year{YType::uint32, "end-year"},
	 infinite_flag{YType::boolean, "infinite-flag"},
	 life_time{YType::uint32, "life-time"},
	 start_date{YType::uint32, "start-date"},
	 start_hour{YType::uint32, "start-hour"},
	 start_minutes{YType::uint32, "start-minutes"},
	 start_month{YType::enumeration, "start-month"},
	 start_seconds{YType::uint32, "start-seconds"},
	 start_year{YType::uint32, "start-year"}
{
    yang_name = "accept-lifetime"; yang_parent_name = "key";
}

Keychains::Keychain::Keies::Key::AcceptLifetime::~AcceptLifetime()
{
}

bool Keychains::Keychain::Keies::Key::AcceptLifetime::has_data() const
{
    return end_date.is_set
	|| end_hour.is_set
	|| end_minutes.is_set
	|| end_month.is_set
	|| end_seconds.is_set
	|| end_year.is_set
	|| infinite_flag.is_set
	|| life_time.is_set
	|| start_date.is_set
	|| start_hour.is_set
	|| start_minutes.is_set
	|| start_month.is_set
	|| start_seconds.is_set
	|| start_year.is_set;
}

bool Keychains::Keychain::Keies::Key::AcceptLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(end_date.operation)
	|| is_set(end_hour.operation)
	|| is_set(end_minutes.operation)
	|| is_set(end_month.operation)
	|| is_set(end_seconds.operation)
	|| is_set(end_year.operation)
	|| is_set(infinite_flag.operation)
	|| is_set(life_time.operation)
	|| is_set(start_date.operation)
	|| is_set(start_hour.operation)
	|| is_set(start_minutes.operation)
	|| is_set(start_month.operation)
	|| is_set(start_seconds.operation)
	|| is_set(start_year.operation);
}

std::string Keychains::Keychain::Keies::Key::AcceptLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-lifetime";

    return path_buffer.str();

}

EntityPath Keychains::Keychain::Keies::Key::AcceptLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_date.is_set || is_set(end_date.operation)) leaf_name_data.push_back(end_date.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.operation)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minutes.is_set || is_set(end_minutes.operation)) leaf_name_data.push_back(end_minutes.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.operation)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_seconds.is_set || is_set(end_seconds.operation)) leaf_name_data.push_back(end_seconds.get_name_leafdata());
    if (end_year.is_set || is_set(end_year.operation)) leaf_name_data.push_back(end_year.get_name_leafdata());
    if (infinite_flag.is_set || is_set(infinite_flag.operation)) leaf_name_data.push_back(infinite_flag.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.operation)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (start_date.is_set || is_set(start_date.operation)) leaf_name_data.push_back(start_date.get_name_leafdata());
    if (start_hour.is_set || is_set(start_hour.operation)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minutes.is_set || is_set(start_minutes.operation)) leaf_name_data.push_back(start_minutes.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.operation)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_seconds.is_set || is_set(start_seconds.operation)) leaf_name_data.push_back(start_seconds.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.operation)) leaf_name_data.push_back(start_year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::Keychain::Keies::Key::AcceptLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::Keychain::Keies::Key::AcceptLifetime::get_children()
{
    return children;
}

void Keychains::Keychain::Keies::Key::AcceptLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-date")
    {
        end_date = value;
    }
    if(value_path == "end-hour")
    {
        end_hour = value;
    }
    if(value_path == "end-minutes")
    {
        end_minutes = value;
    }
    if(value_path == "end-month")
    {
        end_month = value;
    }
    if(value_path == "end-seconds")
    {
        end_seconds = value;
    }
    if(value_path == "end-year")
    {
        end_year = value;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag = value;
    }
    if(value_path == "life-time")
    {
        life_time = value;
    }
    if(value_path == "start-date")
    {
        start_date = value;
    }
    if(value_path == "start-hour")
    {
        start_hour = value;
    }
    if(value_path == "start-minutes")
    {
        start_minutes = value;
    }
    if(value_path == "start-month")
    {
        start_month = value;
    }
    if(value_path == "start-seconds")
    {
        start_seconds = value;
    }
    if(value_path == "start-year")
    {
        start_year = value;
    }
}

Keychains::Keychain::Keies::Key::SendLifetime::SendLifetime()
    :
    	end_date{YType::uint32, "end-date"},
	 end_hour{YType::uint32, "end-hour"},
	 end_minutes{YType::uint32, "end-minutes"},
	 end_month{YType::enumeration, "end-month"},
	 end_seconds{YType::uint32, "end-seconds"},
	 end_year{YType::uint32, "end-year"},
	 infinite_flag{YType::boolean, "infinite-flag"},
	 life_time{YType::uint32, "life-time"},
	 start_date{YType::uint32, "start-date"},
	 start_hour{YType::uint32, "start-hour"},
	 start_minutes{YType::uint32, "start-minutes"},
	 start_month{YType::enumeration, "start-month"},
	 start_seconds{YType::uint32, "start-seconds"},
	 start_year{YType::uint32, "start-year"}
{
    yang_name = "send-lifetime"; yang_parent_name = "key";
}

Keychains::Keychain::Keies::Key::SendLifetime::~SendLifetime()
{
}

bool Keychains::Keychain::Keies::Key::SendLifetime::has_data() const
{
    return end_date.is_set
	|| end_hour.is_set
	|| end_minutes.is_set
	|| end_month.is_set
	|| end_seconds.is_set
	|| end_year.is_set
	|| infinite_flag.is_set
	|| life_time.is_set
	|| start_date.is_set
	|| start_hour.is_set
	|| start_minutes.is_set
	|| start_month.is_set
	|| start_seconds.is_set
	|| start_year.is_set;
}

bool Keychains::Keychain::Keies::Key::SendLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(end_date.operation)
	|| is_set(end_hour.operation)
	|| is_set(end_minutes.operation)
	|| is_set(end_month.operation)
	|| is_set(end_seconds.operation)
	|| is_set(end_year.operation)
	|| is_set(infinite_flag.operation)
	|| is_set(life_time.operation)
	|| is_set(start_date.operation)
	|| is_set(start_hour.operation)
	|| is_set(start_minutes.operation)
	|| is_set(start_month.operation)
	|| is_set(start_seconds.operation)
	|| is_set(start_year.operation);
}

std::string Keychains::Keychain::Keies::Key::SendLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-lifetime";

    return path_buffer.str();

}

EntityPath Keychains::Keychain::Keies::Key::SendLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_date.is_set || is_set(end_date.operation)) leaf_name_data.push_back(end_date.get_name_leafdata());
    if (end_hour.is_set || is_set(end_hour.operation)) leaf_name_data.push_back(end_hour.get_name_leafdata());
    if (end_minutes.is_set || is_set(end_minutes.operation)) leaf_name_data.push_back(end_minutes.get_name_leafdata());
    if (end_month.is_set || is_set(end_month.operation)) leaf_name_data.push_back(end_month.get_name_leafdata());
    if (end_seconds.is_set || is_set(end_seconds.operation)) leaf_name_data.push_back(end_seconds.get_name_leafdata());
    if (end_year.is_set || is_set(end_year.operation)) leaf_name_data.push_back(end_year.get_name_leafdata());
    if (infinite_flag.is_set || is_set(infinite_flag.operation)) leaf_name_data.push_back(infinite_flag.get_name_leafdata());
    if (life_time.is_set || is_set(life_time.operation)) leaf_name_data.push_back(life_time.get_name_leafdata());
    if (start_date.is_set || is_set(start_date.operation)) leaf_name_data.push_back(start_date.get_name_leafdata());
    if (start_hour.is_set || is_set(start_hour.operation)) leaf_name_data.push_back(start_hour.get_name_leafdata());
    if (start_minutes.is_set || is_set(start_minutes.operation)) leaf_name_data.push_back(start_minutes.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.operation)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_seconds.is_set || is_set(start_seconds.operation)) leaf_name_data.push_back(start_seconds.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.operation)) leaf_name_data.push_back(start_year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::Keychain::Keies::Key::SendLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::Keychain::Keies::Key::SendLifetime::get_children()
{
    return children;
}

void Keychains::Keychain::Keies::Key::SendLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-date")
    {
        end_date = value;
    }
    if(value_path == "end-hour")
    {
        end_hour = value;
    }
    if(value_path == "end-minutes")
    {
        end_minutes = value;
    }
    if(value_path == "end-month")
    {
        end_month = value;
    }
    if(value_path == "end-seconds")
    {
        end_seconds = value;
    }
    if(value_path == "end-year")
    {
        end_year = value;
    }
    if(value_path == "infinite-flag")
    {
        infinite_flag = value;
    }
    if(value_path == "life-time")
    {
        life_time = value;
    }
    if(value_path == "start-date")
    {
        start_date = value;
    }
    if(value_path == "start-hour")
    {
        start_hour = value;
    }
    if(value_path == "start-minutes")
    {
        start_minutes = value;
    }
    if(value_path == "start-month")
    {
        start_month = value;
    }
    if(value_path == "start-seconds")
    {
        start_seconds = value;
    }
    if(value_path == "start-year")
    {
        start_year = value;
    }
}

Keychains::Keychain::Keies::Key::Key()
    :
    	key_id{YType::str, "key-id"},
	 cryptographic_algorithm{YType::enumeration, "cryptographic-algorithm"},
	 key_string{YType::str, "key-string"}
    	,
    accept_lifetime(std::make_unique<Keychains::Keychain::Keies::Key::AcceptLifetime>())
	,send_lifetime(std::make_unique<Keychains::Keychain::Keies::Key::SendLifetime>())
{
    accept_lifetime->parent = this;
    children["accept-lifetime"] = accept_lifetime.get();

    send_lifetime->parent = this;
    children["send-lifetime"] = send_lifetime.get();

    yang_name = "key"; yang_parent_name = "keies";
}

Keychains::Keychain::Keies::Key::~Key()
{
}

bool Keychains::Keychain::Keies::Key::has_data() const
{
    return key_id.is_set
	|| cryptographic_algorithm.is_set
	|| key_string.is_set
	|| (accept_lifetime !=  nullptr && accept_lifetime->has_data())
	|| (send_lifetime !=  nullptr && send_lifetime->has_data());
}

bool Keychains::Keychain::Keies::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(key_id.operation)
	|| is_set(cryptographic_algorithm.operation)
	|| is_set(key_string.operation)
	|| (accept_lifetime !=  nullptr && is_set(accept_lifetime->operation))
	|| (send_lifetime !=  nullptr && is_set(send_lifetime->operation));
}

std::string Keychains::Keychain::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-id='" <<key_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Keychains::Keychain::Keies::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (cryptographic_algorithm.is_set || is_set(cryptographic_algorithm.operation)) leaf_name_data.push_back(cryptographic_algorithm.get_name_leafdata());
    if (key_string.is_set || is_set(key_string.operation)) leaf_name_data.push_back(key_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::Keychain::Keies::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accept-lifetime")
    {
        if(accept_lifetime != nullptr)
        {
            children["accept-lifetime"] = accept_lifetime.get();
        }
        else
        {
            accept_lifetime = std::make_unique<Keychains::Keychain::Keies::Key::AcceptLifetime>();
            accept_lifetime->parent = this;
            children["accept-lifetime"] = accept_lifetime.get();
        }
        return children.at("accept-lifetime");
    }

    if(child_yang_name == "send-lifetime")
    {
        if(send_lifetime != nullptr)
        {
            children["send-lifetime"] = send_lifetime.get();
        }
        else
        {
            send_lifetime = std::make_unique<Keychains::Keychain::Keies::Key::SendLifetime>();
            send_lifetime->parent = this;
            children["send-lifetime"] = send_lifetime.get();
        }
        return children.at("send-lifetime");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::Keychain::Keies::Key::get_children()
{
    if(children.find("accept-lifetime") == children.end())
    {
        if(accept_lifetime != nullptr)
        {
            children["accept-lifetime"] = accept_lifetime.get();
        }
    }

    if(children.find("send-lifetime") == children.end())
    {
        if(send_lifetime != nullptr)
        {
            children["send-lifetime"] = send_lifetime.get();
        }
    }

    return children;
}

void Keychains::Keychain::Keies::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-id")
    {
        key_id = value;
    }
    if(value_path == "cryptographic-algorithm")
    {
        cryptographic_algorithm = value;
    }
    if(value_path == "key-string")
    {
        key_string = value;
    }
}

Keychains::Keychain::Keies::Keies()
{
    yang_name = "keies"; yang_parent_name = "keychain";
}

Keychains::Keychain::Keies::~Keies()
{
}

bool Keychains::Keychain::Keies::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Keychains::Keychain::Keies::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Keychains::Keychain::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";

    return path_buffer.str();

}

EntityPath Keychains::Keychain::Keies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::Keychain::Keies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "key")
    {
        for(auto const & c : key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Keychains::Keychain::Keies::Key>();
        c->parent = this;
        key.push_back(std::move(c));
        children[segment_path] = key.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::Keychain::Keies::get_children()
{
    for (auto const & c : key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Keychains::Keychain::Keies::set_value(const std::string & value_path, std::string value)
{
}

Keychains::Keychain::Keychain()
    :
    	chain_name{YType::str, "chain-name"}
    	,
    accept_tolerance(std::make_unique<Keychains::Keychain::AcceptTolerance>())
	,keies(std::make_unique<Keychains::Keychain::Keies>())
{
    accept_tolerance->parent = this;
    children["accept-tolerance"] = accept_tolerance.get();

    keies->parent = this;
    children["keies"] = keies.get();

    yang_name = "keychain"; yang_parent_name = "keychains";
}

Keychains::Keychain::~Keychain()
{
}

bool Keychains::Keychain::has_data() const
{
    return chain_name.is_set
	|| (accept_tolerance !=  nullptr && accept_tolerance->has_data())
	|| (keies !=  nullptr && keies->has_data());
}

bool Keychains::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(chain_name.operation)
	|| (accept_tolerance !=  nullptr && is_set(accept_tolerance->operation))
	|| (keies !=  nullptr && is_set(keies->operation));
}

std::string Keychains::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain" <<"[chain-name='" <<chain_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Keychains::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-keychain-cfg:keychains/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chain_name.is_set || is_set(chain_name.operation)) leaf_name_data.push_back(chain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accept-tolerance")
    {
        if(accept_tolerance != nullptr)
        {
            children["accept-tolerance"] = accept_tolerance.get();
        }
        else
        {
            accept_tolerance = std::make_unique<Keychains::Keychain::AcceptTolerance>();
            accept_tolerance->parent = this;
            children["accept-tolerance"] = accept_tolerance.get();
        }
        return children.at("accept-tolerance");
    }

    if(child_yang_name == "keies")
    {
        if(keies != nullptr)
        {
            children["keies"] = keies.get();
        }
        else
        {
            keies = std::make_unique<Keychains::Keychain::Keies>();
            keies->parent = this;
            children["keies"] = keies.get();
        }
        return children.at("keies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::Keychain::get_children()
{
    if(children.find("accept-tolerance") == children.end())
    {
        if(accept_tolerance != nullptr)
        {
            children["accept-tolerance"] = accept_tolerance.get();
        }
    }

    if(children.find("keies") == children.end())
    {
        if(keies != nullptr)
        {
            children["keies"] = keies.get();
        }
    }

    return children;
}

void Keychains::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chain-name")
    {
        chain_name = value;
    }
}

Keychains::Keychains()
{
    yang_name = "keychains"; yang_parent_name = "Cisco-IOS-XR-lib-keychain-cfg";
}

Keychains::~Keychains()
{
}

bool Keychains::has_data() const
{
    for (std::size_t index=0; index<keychain.size(); index++)
    {
        if(keychain[index]->has_data())
            return true;
    }
    return false;
}

bool Keychains::has_operation() const
{
    for (std::size_t index=0; index<keychain.size(); index++)
    {
        if(keychain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Keychains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lib-keychain-cfg:keychains";

    return path_buffer.str();

}

EntityPath Keychains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Keychains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keychain")
    {
        for(auto const & c : keychain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Keychains::Keychain>();
        c->parent = this;
        keychain.push_back(std::move(c));
        children[segment_path] = keychain.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Keychains::get_children()
{
    for (auto const & c : keychain)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Keychains::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Keychains::clone_ptr()
{
    return std::make_unique<Keychains>();
}

const Enum::Value KeyChainMonthEnum::jan {0, "jan"};
const Enum::Value KeyChainMonthEnum::feb {1, "feb"};
const Enum::Value KeyChainMonthEnum::mar {2, "mar"};
const Enum::Value KeyChainMonthEnum::apr {3, "apr"};
const Enum::Value KeyChainMonthEnum::may {4, "may"};
const Enum::Value KeyChainMonthEnum::jun {5, "jun"};
const Enum::Value KeyChainMonthEnum::jul {6, "jul"};
const Enum::Value KeyChainMonthEnum::aug {7, "aug"};
const Enum::Value KeyChainMonthEnum::sep {8, "sep"};
const Enum::Value KeyChainMonthEnum::oct {9, "oct"};
const Enum::Value KeyChainMonthEnum::nov {10, "nov"};
const Enum::Value KeyChainMonthEnum::dec {11, "dec"};

const Enum::Value CryptoAlgEnum::alg_hmac_sha1_12 {2, "alg-hmac-sha1-12"};
const Enum::Value CryptoAlgEnum::alg_md5_16 {3, "alg-md5-16"};
const Enum::Value CryptoAlgEnum::alg_sha1_20 {4, "alg-sha1-20"};
const Enum::Value CryptoAlgEnum::alg_hmac_md5_16 {5, "alg-hmac-md5-16"};
const Enum::Value CryptoAlgEnum::alg_hmac_sha1_20 {6, "alg-hmac-sha1-20"};


}
}

