
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_smiap_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_smiap_cfg {

Ipv6Virtual::Vrfs::Vrf::Address::Address()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "address"; yang_parent_name = "vrf";
}

Ipv6Virtual::Vrfs::Vrf::Address::~Address()
{
}

bool Ipv6Virtual::Vrfs::Vrf::Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool Ipv6Virtual::Vrfs::Vrf::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string Ipv6Virtual::Vrfs::Vrf::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Virtual::Vrfs::Vrf::Address::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Virtual::Vrfs::Vrf::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Virtual::Vrfs::Vrf::Address::get_children()
{
    return children;
}

void Ipv6Virtual::Vrfs::Vrf::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Ipv6Virtual::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    address(nullptr) // presence node
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv6Virtual::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6Virtual::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv6Virtual::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (address !=  nullptr && is_set(address->operation));
}

std::string Ipv6Virtual::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Virtual::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Virtual::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address.get();
        }
        else
        {
            address = std::make_unique<Ipv6Virtual::Vrfs::Vrf::Address>();
            address->parent = this;
            children["address"] = address.get();
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Virtual::Vrfs::Vrf::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address.get();
        }
    }

    return children;
}

void Ipv6Virtual::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6Virtual::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ipv6-virtual";
}

Ipv6Virtual::Vrfs::~Vrfs()
{
}

bool Ipv6Virtual::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Virtual::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Virtual::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv6Virtual::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Virtual::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Virtual::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Virtual::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Virtual::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Virtual::Ipv6Virtual()
    :
    	use_as_source_address{YType::empty, "use-as-source-address"}
    	,
    vrfs(std::make_unique<Ipv6Virtual::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "ipv6-virtual"; yang_parent_name = "Cisco-IOS-XR-ipv6-smiap-cfg";
}

Ipv6Virtual::~Ipv6Virtual()
{
}

bool Ipv6Virtual::has_data() const
{
    return use_as_source_address.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv6Virtual::has_operation() const
{
    return is_set(operation)
	|| is_set(use_as_source_address.operation)
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Ipv6Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual";

    return path_buffer.str();

}

EntityPath Ipv6Virtual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_as_source_address.is_set || is_set(use_as_source_address.operation)) leaf_name_data.push_back(use_as_source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Ipv6Virtual::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Virtual::get_children()
{
    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Ipv6Virtual::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "use-as-source-address")
    {
        use_as_source_address = value;
    }
}

std::unique_ptr<Entity> Ipv6Virtual::clone_ptr()
{
    return std::make_unique<Ipv6Virtual>();
}


}
}

