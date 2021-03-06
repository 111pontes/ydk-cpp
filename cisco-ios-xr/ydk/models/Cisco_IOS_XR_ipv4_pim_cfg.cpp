
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::EmbeddedRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"}
{
    yang_name = "embedded-rp-address"; yang_parent_name = "embedded-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::~EmbeddedRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_entity_path(Entity* ancestor) const
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

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddresses()
{
    yang_name = "embedded-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::~EmbeddedRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::has_data() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "embedded-rp-address")
    {
        for(auto const & c : embedded_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress>();
        c->parent = this;
        embedded_rp_address.push_back(std::move(c));
        children[segment_path] = embedded_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::get_children()
{
    for (auto const & c : embedded_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
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

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(std::move(c));
        children[segment_path] = sparse_mode_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::get_children()
{
    for (auto const & c : sparse_mode_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::InheritableDefaults()
    :
    	convergency{YType::uint32, "convergency"},
	 dr_priority{YType::uint32, "dr-priority"},
	 hello_interval{YType::uint32, "hello-interval"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(convergency.operation)
	|| is_set(dr_priority.operation)
	|| is_set(hello_interval.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_entity_path(Entity* ancestor) const
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

    if (convergency.is_set || is_set(convergency.operation)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "convergency")
    {
        convergency = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Rpf::Rpf()
    :
    	route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Rpf::~Rpf()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Rpf::get_entity_path(Entity* ancestor) const
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

    if (route_policy.is_set || is_set(route_policy.operation)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Rpf::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::SgExpiryTimer()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::RpfVectorEnable()
    :
    	allow_ebgp{YType::boolean, "allow-ebgp"},
	 disable_ibgp{YType::boolean, "disable-ibgp"},
	 enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_ebgp.operation)
	|| is_set(disable_ibgp.operation)
	|| is_set(enable.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_entity_path(Entity* ancestor) const
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

    if (allow_ebgp.is_set || is_set(allow_ebgp.operation)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.operation)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Nsf::Nsf()
    :
    	lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Nsf::~Nsf()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(lifetime.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Nsf::get_entity_path(Entity* ancestor) const
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

    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Nsf::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    	maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
	 threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_group_ranges_auto_rp.operation)
	|| is_set(threshold_group_ranges_auto_rp.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
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

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::BsrGlobalGroupMappings()
    :
    	bsr_maximum_global_group_mappings{YType::uint32, "bsr-maximum-global-group-mappings"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-group-mappings"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::~BsrGlobalGroupMappings()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::has_data() const
{
    return bsr_maximum_global_group_mappings.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_group_mappings.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_global_group_mappings.is_set || is_set(bsr_maximum_global_group_mappings.operation)) leaf_name_data.push_back(bsr_maximum_global_group_mappings.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::GlobalRoutes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-routes"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::~GlobalRoutes()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-routes";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::get_entity_path(Entity* ancestor) const
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

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    	bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_group_ranges.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.operation)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::GlobalGroupMappingsAutoRp()
    :
    	maximum_global_group_ranges_auto_rp{YType::uint32, "maximum-global-group-ranges-auto-rp"},
	 threshold_global_group_ranges_auto_rp{YType::uint32, "threshold-global-group-ranges-auto-rp"}
{
    yang_name = "global-group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::~GlobalGroupMappingsAutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_data() const
{
    return maximum_global_group_ranges_auto_rp.is_set
	|| threshold_global_group_ranges_auto_rp.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_global_group_ranges_auto_rp.operation)
	|| is_set(threshold_global_group_ranges_auto_rp.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
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

    if (maximum_global_group_ranges_auto_rp.is_set || is_set(maximum_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_global_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_global_group_ranges_auto_rp.is_set || is_set(threshold_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_global_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::RegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
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

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::RouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
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

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::BsrGlobalCandidateRpCache()
    :
    	bsr_maximum_global_candidate_rp_cache{YType::uint32, "bsr-maximum-global-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::~BsrGlobalCandidateRpCache()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_data() const
{
    return bsr_maximum_global_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_global_candidate_rp_cache.is_set || is_set(bsr_maximum_global_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_global_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    	bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::GlobalRegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-register-states"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::~GlobalRegisterStates()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-register-states";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::get_entity_path(Entity* ancestor) const
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

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::GlobalRouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-route-interfaces"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::~GlobalRouteInterfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::get_entity_path(Entity* ancestor) const
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

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::Routes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::~Routes()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_entity_path(Entity* ancestor) const
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

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::Routes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Maximum::Maximum()
    :
    	gloabal_high_priority_packet_queue{YType::uint32, "gloabal-high-priority-packet-queue"},
	 gloabal_low_priority_packet_queue{YType::uint32, "gloabal-low-priority-packet-queue"}
    	,
    bsr_candidate_rp_cache(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache>())
	,bsr_global_candidate_rp_cache(nullptr) // presence node
	,bsr_global_group_mappings(nullptr) // presence node
	,bsr_group_mappings(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings>())
	,global_group_mappings_auto_rp(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp>())
	,global_register_states(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates>())
	,global_route_interfaces(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces>())
	,global_routes(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes>())
	,group_mappings_auto_rp(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp>())
	,register_states(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates>())
	,route_interfaces(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces>())
	,routes(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::Routes>())
{
    bsr_candidate_rp_cache->parent = this;
    children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();

    bsr_group_mappings->parent = this;
    children["bsr-group-mappings"] = bsr_group_mappings.get();

    global_group_mappings_auto_rp->parent = this;
    children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();

    global_register_states->parent = this;
    children["global-register-states"] = global_register_states.get();

    global_route_interfaces->parent = this;
    children["global-route-interfaces"] = global_route_interfaces.get();

    global_routes->parent = this;
    children["global-routes"] = global_routes.get();

    group_mappings_auto_rp->parent = this;
    children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();

    register_states->parent = this;
    children["register-states"] = register_states.get();

    route_interfaces->parent = this;
    children["route-interfaces"] = route_interfaces.get();

    routes->parent = this;
    children["routes"] = routes.get();

    yang_name = "maximum"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Maximum::~Maximum()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::has_data() const
{
    return gloabal_high_priority_packet_queue.is_set
	|| gloabal_low_priority_packet_queue.is_set
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_data())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_data())
	|| (global_register_states !=  nullptr && global_register_states->has_data())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_data())
	|| (global_routes !=  nullptr && global_routes->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(gloabal_high_priority_packet_queue.operation)
	|| is_set(gloabal_low_priority_packet_queue.operation)
	|| (bsr_candidate_rp_cache !=  nullptr && is_set(bsr_candidate_rp_cache->operation))
	|| (bsr_global_candidate_rp_cache !=  nullptr && is_set(bsr_global_candidate_rp_cache->operation))
	|| (bsr_global_group_mappings !=  nullptr && is_set(bsr_global_group_mappings->operation))
	|| (bsr_group_mappings !=  nullptr && is_set(bsr_group_mappings->operation))
	|| (global_group_mappings_auto_rp !=  nullptr && is_set(global_group_mappings_auto_rp->operation))
	|| (global_register_states !=  nullptr && is_set(global_register_states->operation))
	|| (global_route_interfaces !=  nullptr && is_set(global_route_interfaces->operation))
	|| (global_routes !=  nullptr && is_set(global_routes->operation))
	|| (group_mappings_auto_rp !=  nullptr && is_set(group_mappings_auto_rp->operation))
	|| (register_states !=  nullptr && is_set(register_states->operation))
	|| (route_interfaces !=  nullptr && is_set(route_interfaces->operation))
	|| (routes !=  nullptr && is_set(routes->operation));
}

std::string Pim::Vrfs::Vrf::Ipv6::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Maximum::get_entity_path(Entity* ancestor) const
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

    if (gloabal_high_priority_packet_queue.is_set || is_set(gloabal_high_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_high_priority_packet_queue.get_name_leafdata());
    if (gloabal_low_priority_packet_queue.is_set || is_set(gloabal_low_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_low_priority_packet_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        else
        {
            bsr_candidate_rp_cache = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache>();
            bsr_candidate_rp_cache->parent = this;
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        return children.at("bsr-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-candidate-rp-cache")
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        else
        {
            bsr_global_candidate_rp_cache = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache>();
            bsr_global_candidate_rp_cache->parent = this;
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        return children.at("bsr-global-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-group-mappings")
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        else
        {
            bsr_global_group_mappings = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings>();
            bsr_global_group_mappings->parent = this;
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        return children.at("bsr-global-group-mappings");
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        else
        {
            bsr_group_mappings = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings>();
            bsr_group_mappings->parent = this;
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        return children.at("bsr-group-mappings");
    }

    if(child_yang_name == "global-group-mappings-auto-rp")
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        else
        {
            global_group_mappings_auto_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp>();
            global_group_mappings_auto_rp->parent = this;
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        return children.at("global-group-mappings-auto-rp");
    }

    if(child_yang_name == "global-register-states")
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
        else
        {
            global_register_states = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates>();
            global_register_states->parent = this;
            children["global-register-states"] = global_register_states.get();
        }
        return children.at("global-register-states");
    }

    if(child_yang_name == "global-route-interfaces")
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        else
        {
            global_route_interfaces = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces>();
            global_route_interfaces->parent = this;
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        return children.at("global-route-interfaces");
    }

    if(child_yang_name == "global-routes")
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
        else
        {
            global_routes = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes>();
            global_routes->parent = this;
            children["global-routes"] = global_routes.get();
        }
        return children.at("global-routes");
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        else
        {
            group_mappings_auto_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp>();
            group_mappings_auto_rp->parent = this;
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        return children.at("group-mappings-auto-rp");
    }

    if(child_yang_name == "register-states")
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
        else
        {
            register_states = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates>();
            register_states->parent = this;
            children["register-states"] = register_states.get();
        }
        return children.at("register-states");
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
        else
        {
            route_interfaces = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces>();
            route_interfaces->parent = this;
            children["route-interfaces"] = route_interfaces.get();
        }
        return children.at("route-interfaces");
    }

    if(child_yang_name == "routes")
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
        else
        {
            routes = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum::Routes>();
            routes->parent = this;
            children["routes"] = routes.get();
        }
        return children.at("routes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Maximum::get_children()
{
    if(children.find("bsr-candidate-rp-cache") == children.end())
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-candidate-rp-cache") == children.end())
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-group-mappings") == children.end())
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
    }

    if(children.find("bsr-group-mappings") == children.end())
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
    }

    if(children.find("global-group-mappings-auto-rp") == children.end())
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
    }

    if(children.find("global-register-states") == children.end())
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
    }

    if(children.find("global-route-interfaces") == children.end())
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
    }

    if(children.find("global-routes") == children.end())
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
    }

    if(children.find("group-mappings-auto-rp") == children.end())
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
    }

    if(children.find("register-states") == children.end())
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
    }

    if(children.find("route-interfaces") == children.end())
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
    }

    if(children.find("routes") == children.end())
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gloabal-high-priority-packet-queue")
    {
        gloabal_high_priority_packet_queue = value;
    }
    if(value_path == "gloabal-low-priority-packet-queue")
    {
        gloabal_low_priority_packet_queue = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Ssm::Ssm()
    :
    	disable{YType::boolean, "disable"},
	 range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Ssm::~Ssm()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Ssm::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(range.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Ssm::get_entity_path(Entity* ancestor) const
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

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Ssm::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Ssm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
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

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(std::move(c));
        children[segment_path] = bidir_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::get_children()
{
    for (auto const & c : bidir_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::Sm()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "sm"; yang_parent_name = "candidate-rp";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::~Sm()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::Bidir()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "bidir"; yang_parent_name = "candidate-rp";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::~Bidir()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    	address{YType::str, "address"}
    	,
    bidir(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir>())
	,sm(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm>())
{
    bidir->parent = this;
    children["bidir"] = bidir.get();

    sm->parent = this;
    children["sm"] = sm.get();

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| (bidir !=  nullptr && bidir->has_data())
	|| (sm !=  nullptr && sm->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (bidir !=  nullptr && is_set(bidir->operation))
	|| (sm !=  nullptr && is_set(sm->operation));
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir")
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
        else
        {
            bidir = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir>();
            bidir->parent = this;
            children["bidir"] = bidir.get();
        }
        return children.at("bidir");
    }

    if(child_yang_name == "sm")
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
        else
        {
            sm = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm>();
            sm->parent = this;
            children["sm"] = sm.get();
        }
        return children.at("sm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::get_children()
{
    if(children.find("bidir") == children.end())
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
    }

    if(children.find("sm") == children.end())
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::CandidateBsr()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::int32, "prefix-length"},
	 priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
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
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    yang_name = "bsr"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Bsr::~Bsr()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Bsr::has_operation() const
{
    return is_set(operation)
	|| (candidate_bsr !=  nullptr && is_set(candidate_bsr->operation))
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation));
}

std::string Pim::Vrfs::Vrf::Ipv6::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Bsr::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv6::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
        else
        {
            candidate_bsr = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr>();
            candidate_bsr->parent = this;
            children["candidate-bsr"] = candidate_bsr.get();
        }
        return children.at("candidate-bsr");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Bsr::get_children()
{
    if(children.find("candidate-bsr") == children.end())
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::RedirectBundle()
    :
    	bundle_name{YType::str, "bundle-name"},
	 interface_bandwidth{YType::uint32, "interface-bandwidth"},
	 threshold_bandwidth{YType::uint32, "threshold-bandwidth"}
{
    yang_name = "redirect-bundle"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::~RedirectBundle()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::has_data() const
{
    return bundle_name.is_set
	|| interface_bandwidth.is_set
	|| threshold_bandwidth.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(threshold_bandwidth.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-bundle";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (threshold_bandwidth.is_set || is_set(threshold_bandwidth.operation)) leaf_name_data.push_back(threshold_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "threshold-bandwidth")
    {
        threshold_bandwidth = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::Bfd()
    :
    	detection_multiplier{YType::uint32, "detection-multiplier"},
	 enable{YType::boolean, "enable"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(enable.operation)
	|| is_set(interval.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
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

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::Oor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum{YType::uint32, "maximum"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "oor"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::~Oor()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 bsr_border{YType::boolean, "bsr-border"},
	 dr_priority{YType::uint32, "dr-priority"},
	 enable{YType::empty, "enable"},
	 hello_interval{YType::uint32, "hello-interval"},
	 interface_enable{YType::boolean, "interface-enable"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd>())
	,oor(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor>())
	,redirect_bundle(nullptr) // presence node
{
    bfd->parent = this;
    children["bfd"] = bfd.get();

    oor->parent = this;
    children["oor"] = oor.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (oor !=  nullptr && oor->has_data())
	|| (redirect_bundle !=  nullptr && redirect_bundle->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bsr_border.operation)
	|| is_set(dr_priority.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(interface_enable.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| (bfd !=  nullptr && is_set(bfd->operation))
	|| (oor !=  nullptr && is_set(oor->operation))
	|| (redirect_bundle !=  nullptr && is_set(redirect_bundle->operation));
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.operation)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.operation)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
        else
        {
            bfd = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd.get();
        }
        return children.at("bfd");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
        else
        {
            oor = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor>();
            oor->parent = this;
            children["oor"] = oor.get();
        }
        return children.at("oor");
    }

    if(child_yang_name == "redirect-bundle")
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
        else
        {
            redirect_bundle = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle>();
            redirect_bundle->parent = this;
            children["redirect-bundle"] = redirect_bundle.get();
        }
        return children.at("redirect-bundle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
    }

    if(children.find("redirect-bundle") == children.end())
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Interfaces::~Interfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv6::AllowRp::AllowRp()
    :
    	group_list_name{YType::str, "group-list-name"},
	 rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::AllowRp::~AllowRp()
{
}

bool Pim::Vrfs::Vrf::Ipv6::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::AllowRp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_list_name.operation)
	|| is_set(rp_list_name.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::AllowRp::get_entity_path(Entity* ancestor) const
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

    if (group_list_name.is_set || is_set(group_list_name.operation)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.operation)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::AllowRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::AllowRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Convergence::Convergence()
    :
    	link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
	 rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv6";
}

Pim::Vrfs::Vrf::Ipv6::Convergence::~Convergence()
{
}

bool Pim::Vrfs::Vrf::Ipv6::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv6::Convergence::has_operation() const
{
    return is_set(operation)
	|| is_set(link_down_prune_delay.operation)
	|| is_set(rpf_conflict_join_delay.operation);
}

std::string Pim::Vrfs::Vrf::Ipv6::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::Convergence::get_entity_path(Entity* ancestor) const
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

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.operation)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.operation)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::Convergence::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv6::Convergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
    }
}

Pim::Vrfs::Vrf::Ipv6::Ipv6()
    :
    	accept_register{YType::str, "accept-register"},
	 assert_disable{YType::empty, "assert-disable"},
	 embedded_rp_disable{YType::empty, "embedded-rp-disable"},
	 log_neighbor_changes{YType::empty, "log-neighbor-changes"},
	 multipath{YType::enumeration, "multipath"},
	 neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
	 neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 old_register_checksum{YType::empty, "old-register-checksum"},
	 register_source{YType::str, "register-source"},
	 rp_static_deny{YType::str, "rp-static-deny"},
	 spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
	 ssm_allow_override{YType::empty, "ssm-allow-override"},
	 suppress_data_registers{YType::empty, "suppress-data-registers"},
	 suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,bidir_rp_addresses(std::make_unique<Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses>())
	,bsr(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr>())
	,convergence(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Convergence>())
	,embedded_rp_addresses(std::make_unique<Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses>())
	,inheritable_defaults(std::make_unique<Pim::Vrfs::Vrf::Ipv6::InheritableDefaults>())
	,interfaces(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces>())
	,maximum(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum>())
	,nsf(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Nsf>())
	,rpf(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Rpf>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_unique<Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_unique<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses>())
	,ssm(std::make_unique<Pim::Vrfs::Vrf::Ipv6::Ssm>())
{
    bidir_rp_addresses->parent = this;
    children["bidir-rp-addresses"] = bidir_rp_addresses.get();

    bsr->parent = this;
    children["bsr"] = bsr.get();

    convergence->parent = this;
    children["convergence"] = convergence.get();

    embedded_rp_addresses->parent = this;
    children["embedded-rp-addresses"] = embedded_rp_addresses.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    nsf->parent = this;
    children["nsf"] = nsf.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    sg_expiry_timer->parent = this;
    children["sg-expiry-timer"] = sg_expiry_timer.get();

    sparse_mode_rp_addresses->parent = this;
    children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();

    ssm->parent = this;
    children["ssm"] = ssm.get();

    yang_name = "ipv6"; yang_parent_name = "vrf";
}

Pim::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool Pim::Vrfs::Vrf::Ipv6::has_data() const
{
    return accept_register.is_set
	|| assert_disable.is_set
	|| embedded_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (embedded_rp_addresses !=  nullptr && embedded_rp_addresses->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::Vrfs::Vrf::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_register.operation)
	|| is_set(assert_disable.operation)
	|| is_set(embedded_rp_disable.operation)
	|| is_set(log_neighbor_changes.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_check_on_receive.operation)
	|| is_set(neighbor_check_on_send.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(old_register_checksum.operation)
	|| is_set(register_source.operation)
	|| is_set(rp_static_deny.operation)
	|| is_set(spt_threshold_infinity.operation)
	|| is_set(ssm_allow_override.operation)
	|| is_set(suppress_data_registers.operation)
	|| is_set(suppress_rpf_prunes.operation)
	|| (allow_rp !=  nullptr && is_set(allow_rp->operation))
	|| (bidir_rp_addresses !=  nullptr && is_set(bidir_rp_addresses->operation))
	|| (bsr !=  nullptr && is_set(bsr->operation))
	|| (convergence !=  nullptr && is_set(convergence->operation))
	|| (embedded_rp_addresses !=  nullptr && is_set(embedded_rp_addresses->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (nsf !=  nullptr && is_set(nsf->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation))
	|| (rpf_vector_enable !=  nullptr && is_set(rpf_vector_enable->operation))
	|| (sg_expiry_timer !=  nullptr && is_set(sg_expiry_timer->operation))
	|| (sparse_mode_rp_addresses !=  nullptr && is_set(sparse_mode_rp_addresses->operation))
	|| (ssm !=  nullptr && is_set(ssm->operation));
}

std::string Pim::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (accept_register.is_set || is_set(accept_register.operation)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (assert_disable.is_set || is_set(assert_disable.operation)) leaf_name_data.push_back(assert_disable.get_name_leafdata());
    if (embedded_rp_disable.is_set || is_set(embedded_rp_disable.operation)) leaf_name_data.push_back(embedded_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.operation)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.operation)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.operation)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.operation)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.operation)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.operation)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.operation)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.operation)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.operation)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.operation)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allow-rp")
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
        else
        {
            allow_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv6::AllowRp>();
            allow_rp->parent = this;
            children["allow-rp"] = allow_rp.get();
        }
        return children.at("allow-rp");
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        else
        {
            bidir_rp_addresses = std::make_unique<Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses>();
            bidir_rp_addresses->parent = this;
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        return children.at("bidir-rp-addresses");
    }

    if(child_yang_name == "bsr")
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
        else
        {
            bsr = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Bsr>();
            bsr->parent = this;
            children["bsr"] = bsr.get();
        }
        return children.at("bsr");
    }

    if(child_yang_name == "convergence")
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
        else
        {
            convergence = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Convergence>();
            convergence->parent = this;
            children["convergence"] = convergence.get();
        }
        return children.at("convergence");
    }

    if(child_yang_name == "embedded-rp-addresses")
    {
        if(embedded_rp_addresses != nullptr)
        {
            children["embedded-rp-addresses"] = embedded_rp_addresses.get();
        }
        else
        {
            embedded_rp_addresses = std::make_unique<Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses>();
            embedded_rp_addresses->parent = this;
            children["embedded-rp-addresses"] = embedded_rp_addresses.get();
        }
        return children.at("embedded-rp-addresses");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Pim::Vrfs::Vrf::Ipv6::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
        else
        {
            nsf = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf.get();
        }
        return children.at("nsf");
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        else
        {
            rpf_vector_enable = std::make_unique<Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable>();
            rpf_vector_enable->parent = this;
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        return children.at("rpf-vector-enable");
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        else
        {
            sg_expiry_timer = std::make_unique<Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer>();
            sg_expiry_timer->parent = this;
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        return children.at("sg-expiry-timer");
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        else
        {
            sparse_mode_rp_addresses = std::make_unique<Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses>();
            sparse_mode_rp_addresses->parent = this;
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        return children.at("sparse-mode-rp-addresses");
    }

    if(child_yang_name == "ssm")
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
        else
        {
            ssm = std::make_unique<Pim::Vrfs::Vrf::Ipv6::Ssm>();
            ssm->parent = this;
            children["ssm"] = ssm.get();
        }
        return children.at("ssm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv6::get_children()
{
    if(children.find("allow-rp") == children.end())
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
    }

    if(children.find("bidir-rp-addresses") == children.end())
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
    }

    if(children.find("bsr") == children.end())
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
    }

    if(children.find("convergence") == children.end())
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
    }

    if(children.find("embedded-rp-addresses") == children.end())
    {
        if(embedded_rp_addresses != nullptr)
        {
            children["embedded-rp-addresses"] = embedded_rp_addresses.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    if(children.find("rpf-vector-enable") == children.end())
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
    }

    if(children.find("sg-expiry-timer") == children.end())
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
    }

    if(children.find("sparse-mode-rp-addresses") == children.end())
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
    }

    if(children.find("ssm") == children.end())
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
    }
    if(value_path == "assert-disable")
    {
        assert_disable = value;
    }
    if(value_path == "embedded-rp-disable")
    {
        embedded_rp_disable = value;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
    }
    if(value_path == "register-source")
    {
        register_source = value;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::CsMulticastOnlyFrr()
    :
    	backup{YType::str, "backup"},
	 prefix_length{YType::int32, "prefix-length"},
	 primary{YType::str, "primary"},
	 source{YType::str, "source"}
{
    yang_name = "cs-multicast-only-frr"; yang_parent_name = "cs-multicast-only-frrs";
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::~CsMulticastOnlyFrr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_data() const
{
    return backup.is_set
	|| prefix_length.is_set
	|| primary.is_set
	|| source.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary.operation)
	|| is_set(source.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frr" <<"[backup='" <<backup.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[primary='" <<primary.get() <<"']" <<"[source='" <<source.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
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

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrrs()
{
    yang_name = "cs-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::~CsMulticastOnlyFrrs()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frrs";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cs-multicast-only-frr")
    {
        for(auto const & c : cs_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr>();
        c->parent = this;
        cs_multicast_only_frr.push_back(std::move(c));
        children[segment_path] = cs_multicast_only_frr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::get_children()
{
    for (auto const & c : cs_multicast_only_frr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::MulticastOnlyFrr()
    :
    	enable{YType::empty, "enable"},
	 flow_multicast_only_frr{YType::str, "flow-multicast-only-frr"},
	 non_revertive_multicast_only_frr{YType::empty, "non-revertive-multicast-only-frr"},
	 rib_multicast_only_frr{YType::str, "rib-multicast-only-frr"}
{
    yang_name = "multicast-only-frr"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::~MulticastOnlyFrr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::has_data() const
{
    return enable.is_set
	|| flow_multicast_only_frr.is_set
	|| non_revertive_multicast_only_frr.is_set
	|| rib_multicast_only_frr.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(flow_multicast_only_frr.operation)
	|| is_set(non_revertive_multicast_only_frr.operation)
	|| is_set(rib_multicast_only_frr.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-only-frr";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_entity_path(Entity* ancestor) const
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

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flow_multicast_only_frr.is_set || is_set(flow_multicast_only_frr.operation)) leaf_name_data.push_back(flow_multicast_only_frr.get_name_leafdata());
    if (non_revertive_multicast_only_frr.is_set || is_set(non_revertive_multicast_only_frr.operation)) leaf_name_data.push_back(non_revertive_multicast_only_frr.get_name_leafdata());
    if (rib_multicast_only_frr.is_set || is_set(rib_multicast_only_frr.operation)) leaf_name_data.push_back(rib_multicast_only_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flow-multicast-only-frr")
    {
        flow_multicast_only_frr = value;
    }
    if(value_path == "non-revertive-multicast-only-frr")
    {
        non_revertive_multicast_only_frr = value;
    }
    if(value_path == "rib-multicast-only-frr")
    {
        rib_multicast_only_frr = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::RpfRedirect::RpfRedirect()
    :
    	route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf-redirect"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::RpfRedirect::~RpfRedirect()
{
}

bool Pim::Vrfs::Vrf::Ipv4::RpfRedirect::has_data() const
{
    return route_policy.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::RpfRedirect::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::RpfRedirect::get_entity_path(Entity* ancestor) const
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

    if (route_policy.is_set || is_set(route_policy.operation)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::RpfRedirect::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::RpfRedirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Paths::Path::Path()
    :
    	prefix_length{YType::int32, "prefix-length"},
	 source_address{YType::str, "source-address"},
	 rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

Pim::Vrfs::Vrf::Ipv4::Paths::Path::~Path()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::Path::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return prefix_length.is_set
	|| source_address.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::Path::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(source_address.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_entity_path(Entity* ancestor) const
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

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Paths::Path::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

Pim::Vrfs::Vrf::Ipv4::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Paths::~Paths()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Paths::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Paths::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::CjMulticastOnlyFrr()
    :
    	backup{YType::str, "backup"},
	 prefix_length{YType::int32, "prefix-length"},
	 primary{YType::str, "primary"},
	 source{YType::str, "source"}
{
    yang_name = "cj-multicast-only-frr"; yang_parent_name = "cj-multicast-only-frrs";
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::~CjMulticastOnlyFrr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_data() const
{
    return backup.is_set
	|| prefix_length.is_set
	|| primary.is_set
	|| source.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary.operation)
	|| is_set(source.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frr" <<"[backup='" <<backup.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[primary='" <<primary.get() <<"']" <<"[source='" <<source.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
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

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrrs()
{
    yang_name = "cj-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::~CjMulticastOnlyFrrs()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frrs";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cj-multicast-only-frr")
    {
        for(auto const & c : cj_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr>();
        c->parent = this;
        cj_multicast_only_frr.push_back(std::move(c));
        children[segment_path] = cj_multicast_only_frr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::get_children()
{
    for (auto const & c : cj_multicast_only_frr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::AutoRp::AutoRp()
{
    yang_name = "auto-rp"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::AutoRp::~AutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRp::has_data() const
{
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRp::has_operation() const
{
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::AutoRp::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::AutoRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::AutoRp::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::Parameters()
    :
    	announce_period{YType::uint32, "announce-period"},
	 interface_name{YType::str, "interface-name"},
	 ttl{YType::uint32, "ttl"}
{
    yang_name = "parameters"; yang_parent_name = "auto-rp-mapping-agent";
}

Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::~Parameters()
{
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::has_data() const
{
    return announce_period.is_set
	|| interface_name.is_set
	|| ttl.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(announce_period.operation)
	|| is_set(interface_name.operation)
	|| is_set(ttl.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::get_entity_path(Entity* ancestor) const
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

    if (announce_period.is_set || is_set(announce_period.operation)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce-period")
    {
        announce_period = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::CacheLimit()
    :
    	maximum_cache_entry{YType::uint32, "maximum-cache-entry"},
	 threshold_cache_entry{YType::uint32, "threshold-cache-entry"}
{
    yang_name = "cache-limit"; yang_parent_name = "auto-rp-mapping-agent";
}

Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::~CacheLimit()
{
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::has_data() const
{
    return maximum_cache_entry.is_set
	|| threshold_cache_entry.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cache_entry.operation)
	|| is_set(threshold_cache_entry.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-limit";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::get_entity_path(Entity* ancestor) const
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

    if (maximum_cache_entry.is_set || is_set(maximum_cache_entry.operation)) leaf_name_data.push_back(maximum_cache_entry.get_name_leafdata());
    if (threshold_cache_entry.is_set || is_set(threshold_cache_entry.operation)) leaf_name_data.push_back(threshold_cache_entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cache-entry")
    {
        maximum_cache_entry = value;
    }
    if(value_path == "threshold-cache-entry")
    {
        threshold_cache_entry = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::AutoRpMappingAgent()
    :
    cache_limit(nullptr) // presence node
	,parameters(nullptr) // presence node
{
    yang_name = "auto-rp-mapping-agent"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::~AutoRpMappingAgent()
{
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::has_data() const
{
    return (cache_limit !=  nullptr && cache_limit->has_data())
	|| (parameters !=  nullptr && parameters->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::has_operation() const
{
    return is_set(operation)
	|| (cache_limit !=  nullptr && is_set(cache_limit->operation))
	|| (parameters !=  nullptr && is_set(parameters->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp-mapping-agent";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cache-limit")
    {
        if(cache_limit != nullptr)
        {
            children["cache-limit"] = cache_limit.get();
        }
        else
        {
            cache_limit = std::make_unique<Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit>();
            cache_limit->parent = this;
            children["cache-limit"] = cache_limit.get();
        }
        return children.at("cache-limit");
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters.get();
        }
        else
        {
            parameters = std::make_unique<Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters.get();
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::get_children()
{
    if(children.find("cache-limit") == children.end())
    {
        if(cache_limit != nullptr)
        {
            children["cache-limit"] = cache_limit.get();
        }
    }

    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::CandidateRpRange()
    :
    	access_list_name{YType::str, "access-list-name"},
	 announce_period{YType::uint32, "announce-period"},
	 ttl{YType::uint32, "ttl"}
{
    yang_name = "candidate-rp-range"; yang_parent_name = "candidate-rp";
}

Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::~CandidateRpRange()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::has_data() const
{
    return access_list_name.is_set
	|| announce_period.is_set
	|| ttl.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(announce_period.operation)
	|| is_set(ttl.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-range";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.operation)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRp()
    :
    	interface_name{YType::str, "interface-name"},
	 protocol_mode{YType::enumeration, "protocol-mode"}
    	,
    candidate_rp_range(nullptr) // presence node
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::has_data() const
{
    return interface_name.is_set
	|| protocol_mode.is_set
	|| (candidate_rp_range !=  nullptr && candidate_rp_range->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(protocol_mode.operation)
	|| (candidate_rp_range !=  nullptr && is_set(candidate_rp_range->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[interface-name='" <<interface_name.get() <<"']" <<"[protocol-mode='" <<protocol_mode.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp-range")
    {
        if(candidate_rp_range != nullptr)
        {
            children["candidate-rp-range"] = candidate_rp_range.get();
        }
        else
        {
            candidate_rp_range = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange>();
            candidate_rp_range->parent = this;
            children["candidate-rp-range"] = candidate_rp_range.get();
        }
        return children.at("candidate-rp-range");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::get_children()
{
    if(children.find("candidate-rp-range") == children.end())
    {
        if(candidate_rp_range != nullptr)
        {
            children["candidate-rp-range"] = candidate_rp_range.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::CandidateRps::~CandidateRps()
{
}

bool Pim::Vrfs::Vrf::Ipv4::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::CandidateRps::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::Injects::Inject::Inject()
    :
    	prefix_length{YType::int32, "prefix-length"},
	 source_address{YType::str, "source-address"},
	 rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "inject"; yang_parent_name = "injects";
}

Pim::Vrfs::Vrf::Ipv4::Injects::Inject::~Inject()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::Inject::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return prefix_length.is_set
	|| source_address.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::Inject::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(source_address.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_entity_path(Entity* ancestor) const
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

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Injects::Inject::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Injects::Inject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

Pim::Vrfs::Vrf::Ipv4::Injects::Injects()
{
    yang_name = "injects"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Injects::~Injects()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::has_data() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Injects::has_operation() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Injects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "injects";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Injects::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::Injects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inject")
    {
        for(auto const & c : inject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Injects::Inject>();
        c->parent = this;
        inject.push_back(std::move(c));
        children[segment_path] = inject.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Injects::get_children()
{
    for (auto const & c : inject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Injects::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
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

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(std::move(c));
        children[segment_path] = sparse_mode_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::get_children()
{
    for (auto const & c : sparse_mode_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::InheritableDefaults()
    :
    	convergency{YType::uint32, "convergency"},
	 dr_priority{YType::uint32, "dr-priority"},
	 hello_interval{YType::uint32, "hello-interval"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(convergency.operation)
	|| is_set(dr_priority.operation)
	|| is_set(hello_interval.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_entity_path(Entity* ancestor) const
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

    if (convergency.is_set || is_set(convergency.operation)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "convergency")
    {
        convergency = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Rpf::Rpf()
    :
    	route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Rpf::~Rpf()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Rpf::get_entity_path(Entity* ancestor) const
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

    if (route_policy.is_set || is_set(route_policy.operation)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Rpf::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::SgExpiryTimer()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::RpfVectorEnable()
    :
    	allow_ebgp{YType::boolean, "allow-ebgp"},
	 disable_ibgp{YType::boolean, "disable-ibgp"},
	 enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_ebgp.operation)
	|| is_set(disable_ibgp.operation)
	|| is_set(enable.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_entity_path(Entity* ancestor) const
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

    if (allow_ebgp.is_set || is_set(allow_ebgp.operation)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.operation)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Nsf::Nsf()
    :
    	lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Nsf::~Nsf()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(lifetime.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Nsf::get_entity_path(Entity* ancestor) const
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

    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Nsf::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    	maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
	 threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_group_ranges_auto_rp.operation)
	|| is_set(threshold_group_ranges_auto_rp.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
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

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::BsrGlobalGroupMappings()
    :
    	bsr_maximum_global_group_mappings{YType::uint32, "bsr-maximum-global-group-mappings"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-group-mappings"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::~BsrGlobalGroupMappings()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::has_data() const
{
    return bsr_maximum_global_group_mappings.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_group_mappings.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_global_group_mappings.is_set || is_set(bsr_maximum_global_group_mappings.operation)) leaf_name_data.push_back(bsr_maximum_global_group_mappings.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::GlobalRoutes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-routes"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::~GlobalRoutes()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-routes";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::get_entity_path(Entity* ancestor) const
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

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    	bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_group_ranges.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.operation)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::GlobalGroupMappingsAutoRp()
    :
    	maximum_global_group_ranges_auto_rp{YType::uint32, "maximum-global-group-ranges-auto-rp"},
	 threshold_global_group_ranges_auto_rp{YType::uint32, "threshold-global-group-ranges-auto-rp"}
{
    yang_name = "global-group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::~GlobalGroupMappingsAutoRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_data() const
{
    return maximum_global_group_ranges_auto_rp.is_set
	|| threshold_global_group_ranges_auto_rp.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_global_group_ranges_auto_rp.operation)
	|| is_set(threshold_global_group_ranges_auto_rp.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
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

    if (maximum_global_group_ranges_auto_rp.is_set || is_set(maximum_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_global_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_global_group_ranges_auto_rp.is_set || is_set(threshold_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_global_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::RegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
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

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::RouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
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

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::BsrGlobalCandidateRpCache()
    :
    	bsr_maximum_global_candidate_rp_cache{YType::uint32, "bsr-maximum-global-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::~BsrGlobalCandidateRpCache()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_data() const
{
    return bsr_maximum_global_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_global_candidate_rp_cache.is_set || is_set(bsr_maximum_global_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_global_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    	bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
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

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::GlobalRegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-register-states"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::~GlobalRegisterStates()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-register-states";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::get_entity_path(Entity* ancestor) const
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

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::GlobalRouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-route-interfaces"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::~GlobalRouteInterfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::get_entity_path(Entity* ancestor) const
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

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::Routes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::~Routes()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_entity_path(Entity* ancestor) const
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

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::Routes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Maximum::Maximum()
    :
    	gloabal_high_priority_packet_queue{YType::uint32, "gloabal-high-priority-packet-queue"},
	 gloabal_low_priority_packet_queue{YType::uint32, "gloabal-low-priority-packet-queue"}
    	,
    bsr_candidate_rp_cache(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache>())
	,bsr_global_candidate_rp_cache(nullptr) // presence node
	,bsr_global_group_mappings(nullptr) // presence node
	,bsr_group_mappings(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings>())
	,global_group_mappings_auto_rp(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp>())
	,global_register_states(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates>())
	,global_route_interfaces(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces>())
	,global_routes(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes>())
	,group_mappings_auto_rp(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp>())
	,register_states(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates>())
	,route_interfaces(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces>())
	,routes(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::Routes>())
{
    bsr_candidate_rp_cache->parent = this;
    children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();

    bsr_group_mappings->parent = this;
    children["bsr-group-mappings"] = bsr_group_mappings.get();

    global_group_mappings_auto_rp->parent = this;
    children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();

    global_register_states->parent = this;
    children["global-register-states"] = global_register_states.get();

    global_route_interfaces->parent = this;
    children["global-route-interfaces"] = global_route_interfaces.get();

    global_routes->parent = this;
    children["global-routes"] = global_routes.get();

    group_mappings_auto_rp->parent = this;
    children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();

    register_states->parent = this;
    children["register-states"] = register_states.get();

    route_interfaces->parent = this;
    children["route-interfaces"] = route_interfaces.get();

    routes->parent = this;
    children["routes"] = routes.get();

    yang_name = "maximum"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Maximum::~Maximum()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::has_data() const
{
    return gloabal_high_priority_packet_queue.is_set
	|| gloabal_low_priority_packet_queue.is_set
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_data())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_data())
	|| (global_register_states !=  nullptr && global_register_states->has_data())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_data())
	|| (global_routes !=  nullptr && global_routes->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(gloabal_high_priority_packet_queue.operation)
	|| is_set(gloabal_low_priority_packet_queue.operation)
	|| (bsr_candidate_rp_cache !=  nullptr && is_set(bsr_candidate_rp_cache->operation))
	|| (bsr_global_candidate_rp_cache !=  nullptr && is_set(bsr_global_candidate_rp_cache->operation))
	|| (bsr_global_group_mappings !=  nullptr && is_set(bsr_global_group_mappings->operation))
	|| (bsr_group_mappings !=  nullptr && is_set(bsr_group_mappings->operation))
	|| (global_group_mappings_auto_rp !=  nullptr && is_set(global_group_mappings_auto_rp->operation))
	|| (global_register_states !=  nullptr && is_set(global_register_states->operation))
	|| (global_route_interfaces !=  nullptr && is_set(global_route_interfaces->operation))
	|| (global_routes !=  nullptr && is_set(global_routes->operation))
	|| (group_mappings_auto_rp !=  nullptr && is_set(group_mappings_auto_rp->operation))
	|| (register_states !=  nullptr && is_set(register_states->operation))
	|| (route_interfaces !=  nullptr && is_set(route_interfaces->operation))
	|| (routes !=  nullptr && is_set(routes->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Maximum::get_entity_path(Entity* ancestor) const
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

    if (gloabal_high_priority_packet_queue.is_set || is_set(gloabal_high_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_high_priority_packet_queue.get_name_leafdata());
    if (gloabal_low_priority_packet_queue.is_set || is_set(gloabal_low_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_low_priority_packet_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        else
        {
            bsr_candidate_rp_cache = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache>();
            bsr_candidate_rp_cache->parent = this;
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        return children.at("bsr-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-candidate-rp-cache")
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        else
        {
            bsr_global_candidate_rp_cache = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache>();
            bsr_global_candidate_rp_cache->parent = this;
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        return children.at("bsr-global-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-group-mappings")
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        else
        {
            bsr_global_group_mappings = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings>();
            bsr_global_group_mappings->parent = this;
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        return children.at("bsr-global-group-mappings");
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        else
        {
            bsr_group_mappings = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings>();
            bsr_group_mappings->parent = this;
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        return children.at("bsr-group-mappings");
    }

    if(child_yang_name == "global-group-mappings-auto-rp")
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        else
        {
            global_group_mappings_auto_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp>();
            global_group_mappings_auto_rp->parent = this;
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        return children.at("global-group-mappings-auto-rp");
    }

    if(child_yang_name == "global-register-states")
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
        else
        {
            global_register_states = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates>();
            global_register_states->parent = this;
            children["global-register-states"] = global_register_states.get();
        }
        return children.at("global-register-states");
    }

    if(child_yang_name == "global-route-interfaces")
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        else
        {
            global_route_interfaces = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces>();
            global_route_interfaces->parent = this;
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        return children.at("global-route-interfaces");
    }

    if(child_yang_name == "global-routes")
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
        else
        {
            global_routes = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes>();
            global_routes->parent = this;
            children["global-routes"] = global_routes.get();
        }
        return children.at("global-routes");
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        else
        {
            group_mappings_auto_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp>();
            group_mappings_auto_rp->parent = this;
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        return children.at("group-mappings-auto-rp");
    }

    if(child_yang_name == "register-states")
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
        else
        {
            register_states = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates>();
            register_states->parent = this;
            children["register-states"] = register_states.get();
        }
        return children.at("register-states");
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
        else
        {
            route_interfaces = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces>();
            route_interfaces->parent = this;
            children["route-interfaces"] = route_interfaces.get();
        }
        return children.at("route-interfaces");
    }

    if(child_yang_name == "routes")
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
        else
        {
            routes = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum::Routes>();
            routes->parent = this;
            children["routes"] = routes.get();
        }
        return children.at("routes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Maximum::get_children()
{
    if(children.find("bsr-candidate-rp-cache") == children.end())
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-candidate-rp-cache") == children.end())
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-group-mappings") == children.end())
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
    }

    if(children.find("bsr-group-mappings") == children.end())
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
    }

    if(children.find("global-group-mappings-auto-rp") == children.end())
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
    }

    if(children.find("global-register-states") == children.end())
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
    }

    if(children.find("global-route-interfaces") == children.end())
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
    }

    if(children.find("global-routes") == children.end())
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
    }

    if(children.find("group-mappings-auto-rp") == children.end())
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
    }

    if(children.find("register-states") == children.end())
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
    }

    if(children.find("route-interfaces") == children.end())
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
    }

    if(children.find("routes") == children.end())
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gloabal-high-priority-packet-queue")
    {
        gloabal_high_priority_packet_queue = value;
    }
    if(value_path == "gloabal-low-priority-packet-queue")
    {
        gloabal_low_priority_packet_queue = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Ssm::Ssm()
    :
    	disable{YType::boolean, "disable"},
	 range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Ssm::~Ssm()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Ssm::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(range.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Ssm::get_entity_path(Entity* ancestor) const
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

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Ssm::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Ssm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
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

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(std::move(c));
        children[segment_path] = bidir_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::get_children()
{
    for (auto const & c : bidir_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::Sm()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "sm"; yang_parent_name = "candidate-rp";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::~Sm()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::Bidir()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "bidir"; yang_parent_name = "candidate-rp";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::~Bidir()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    	address{YType::str, "address"}
    	,
    bidir(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir>())
	,sm(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm>())
{
    bidir->parent = this;
    children["bidir"] = bidir.get();

    sm->parent = this;
    children["sm"] = sm.get();

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| (bidir !=  nullptr && bidir->has_data())
	|| (sm !=  nullptr && sm->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (bidir !=  nullptr && is_set(bidir->operation))
	|| (sm !=  nullptr && is_set(sm->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir")
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
        else
        {
            bidir = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir>();
            bidir->parent = this;
            children["bidir"] = bidir.get();
        }
        return children.at("bidir");
    }

    if(child_yang_name == "sm")
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
        else
        {
            sm = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm>();
            sm->parent = this;
            children["sm"] = sm.get();
        }
        return children.at("sm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::get_children()
{
    if(children.find("bidir") == children.end())
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
    }

    if(children.find("sm") == children.end())
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::CandidateBsr()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::int32, "prefix-length"},
	 priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
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
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    yang_name = "bsr"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Bsr::~Bsr()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Bsr::has_operation() const
{
    return is_set(operation)
	|| (candidate_bsr !=  nullptr && is_set(candidate_bsr->operation))
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Bsr::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
        else
        {
            candidate_bsr = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr>();
            candidate_bsr->parent = this;
            children["candidate-bsr"] = candidate_bsr.get();
        }
        return children.at("candidate-bsr");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Bsr::get_children()
{
    if(children.find("candidate-bsr") == children.end())
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::RedirectBundle()
    :
    	bundle_name{YType::str, "bundle-name"},
	 interface_bandwidth{YType::uint32, "interface-bandwidth"},
	 threshold_bandwidth{YType::uint32, "threshold-bandwidth"}
{
    yang_name = "redirect-bundle"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::~RedirectBundle()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::has_data() const
{
    return bundle_name.is_set
	|| interface_bandwidth.is_set
	|| threshold_bandwidth.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(threshold_bandwidth.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-bundle";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (threshold_bandwidth.is_set || is_set(threshold_bandwidth.operation)) leaf_name_data.push_back(threshold_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "threshold-bandwidth")
    {
        threshold_bandwidth = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::Bfd()
    :
    	detection_multiplier{YType::uint32, "detection-multiplier"},
	 enable{YType::boolean, "enable"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(enable.operation)
	|| is_set(interval.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
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

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::Oor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum{YType::uint32, "maximum"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "oor"; yang_parent_name = "interface";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::~Oor()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 bsr_border{YType::boolean, "bsr-border"},
	 dr_priority{YType::uint32, "dr-priority"},
	 enable{YType::empty, "enable"},
	 hello_interval{YType::uint32, "hello-interval"},
	 interface_enable{YType::boolean, "interface-enable"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd>())
	,oor(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor>())
	,redirect_bundle(nullptr) // presence node
{
    bfd->parent = this;
    children["bfd"] = bfd.get();

    oor->parent = this;
    children["oor"] = oor.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (oor !=  nullptr && oor->has_data())
	|| (redirect_bundle !=  nullptr && redirect_bundle->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bsr_border.operation)
	|| is_set(dr_priority.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(interface_enable.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| (bfd !=  nullptr && is_set(bfd->operation))
	|| (oor !=  nullptr && is_set(oor->operation))
	|| (redirect_bundle !=  nullptr && is_set(redirect_bundle->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.operation)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.operation)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
        else
        {
            bfd = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd.get();
        }
        return children.at("bfd");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
        else
        {
            oor = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor>();
            oor->parent = this;
            children["oor"] = oor.get();
        }
        return children.at("oor");
    }

    if(child_yang_name == "redirect-bundle")
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
        else
        {
            redirect_bundle = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle>();
            redirect_bundle->parent = this;
            children["redirect-bundle"] = redirect_bundle.get();
        }
        return children.at("redirect-bundle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
    }

    if(children.find("redirect-bundle") == children.end())
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Interfaces::~Interfaces()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::Vrf::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* Pim::Vrfs::Vrf::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Vrfs::Vrf::Ipv4::AllowRp::AllowRp()
    :
    	group_list_name{YType::str, "group-list-name"},
	 rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::AllowRp::~AllowRp()
{
}

bool Pim::Vrfs::Vrf::Ipv4::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::AllowRp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_list_name.operation)
	|| is_set(rp_list_name.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::AllowRp::get_entity_path(Entity* ancestor) const
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

    if (group_list_name.is_set || is_set(group_list_name.operation)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.operation)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::AllowRp::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::AllowRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Convergence::Convergence()
    :
    	link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
	 rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv4";
}

Pim::Vrfs::Vrf::Ipv4::Convergence::~Convergence()
{
}

bool Pim::Vrfs::Vrf::Ipv4::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::Vrfs::Vrf::Ipv4::Convergence::has_operation() const
{
    return is_set(operation)
	|| is_set(link_down_prune_delay.operation)
	|| is_set(rpf_conflict_join_delay.operation);
}

std::string Pim::Vrfs::Vrf::Ipv4::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::Convergence::get_entity_path(Entity* ancestor) const
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

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.operation)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.operation)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::Convergence::get_children()
{
    return children;
}

void Pim::Vrfs::Vrf::Ipv4::Convergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
    }
}

Pim::Vrfs::Vrf::Ipv4::Ipv4()
    :
    	accept_register{YType::str, "accept-register"},
	 assert_disable{YType::empty, "assert-disable"},
	 auto_rp_disable{YType::empty, "auto-rp-disable"},
	 log_neighbor_changes{YType::empty, "log-neighbor-changes"},
	 multipath{YType::enumeration, "multipath"},
	 neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
	 neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 old_register_checksum{YType::empty, "old-register-checksum"},
	 register_source{YType::str, "register-source"},
	 rp_static_deny{YType::str, "rp-static-deny"},
	 spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
	 ssm_allow_override{YType::empty, "ssm-allow-override"},
	 suppress_data_registers{YType::empty, "suppress-data-registers"},
	 suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,auto_rp(std::make_unique<Pim::Vrfs::Vrf::Ipv4::AutoRp>())
	,auto_rp_mapping_agent(std::make_unique<Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent>())
	,bidir_rp_addresses(std::make_unique<Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses>())
	,bsr(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr>())
	,candidate_rps(std::make_unique<Pim::Vrfs::Vrf::Ipv4::CandidateRps>())
	,cj_multicast_only_frrs(std::make_unique<Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs>())
	,convergence(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Convergence>())
	,cs_multicast_only_frrs(std::make_unique<Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs>())
	,inheritable_defaults(std::make_unique<Pim::Vrfs::Vrf::Ipv4::InheritableDefaults>())
	,injects(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Injects>())
	,interfaces(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces>())
	,maximum(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum>())
	,multicast_only_frr(std::make_unique<Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr>())
	,nsf(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Nsf>())
	,paths(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Paths>())
	,rpf(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Rpf>())
	,rpf_redirect(std::make_unique<Pim::Vrfs::Vrf::Ipv4::RpfRedirect>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_unique<Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_unique<Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses>())
	,ssm(std::make_unique<Pim::Vrfs::Vrf::Ipv4::Ssm>())
{
    auto_rp->parent = this;
    children["auto-rp"] = auto_rp.get();

    auto_rp_mapping_agent->parent = this;
    children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();

    bidir_rp_addresses->parent = this;
    children["bidir-rp-addresses"] = bidir_rp_addresses.get();

    bsr->parent = this;
    children["bsr"] = bsr.get();

    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    cj_multicast_only_frrs->parent = this;
    children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();

    convergence->parent = this;
    children["convergence"] = convergence.get();

    cs_multicast_only_frrs->parent = this;
    children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    injects->parent = this;
    children["injects"] = injects.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    multicast_only_frr->parent = this;
    children["multicast-only-frr"] = multicast_only_frr.get();

    nsf->parent = this;
    children["nsf"] = nsf.get();

    paths->parent = this;
    children["paths"] = paths.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    rpf_redirect->parent = this;
    children["rpf-redirect"] = rpf_redirect.get();

    sg_expiry_timer->parent = this;
    children["sg-expiry-timer"] = sg_expiry_timer.get();

    sparse_mode_rp_addresses->parent = this;
    children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();

    ssm->parent = this;
    children["ssm"] = ssm.get();

    yang_name = "ipv4"; yang_parent_name = "vrf";
}

Pim::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool Pim::Vrfs::Vrf::Ipv4::has_data() const
{
    return accept_register.is_set
	|| assert_disable.is_set
	|| auto_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (auto_rp !=  nullptr && auto_rp->has_data())
	|| (auto_rp_mapping_agent !=  nullptr && auto_rp_mapping_agent->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (cj_multicast_only_frrs !=  nullptr && cj_multicast_only_frrs->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (cs_multicast_only_frrs !=  nullptr && cs_multicast_only_frrs->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (injects !=  nullptr && injects->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (multicast_only_frr !=  nullptr && multicast_only_frr->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (paths !=  nullptr && paths->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_register.operation)
	|| is_set(assert_disable.operation)
	|| is_set(auto_rp_disable.operation)
	|| is_set(log_neighbor_changes.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_check_on_receive.operation)
	|| is_set(neighbor_check_on_send.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(old_register_checksum.operation)
	|| is_set(register_source.operation)
	|| is_set(rp_static_deny.operation)
	|| is_set(spt_threshold_infinity.operation)
	|| is_set(ssm_allow_override.operation)
	|| is_set(suppress_data_registers.operation)
	|| is_set(suppress_rpf_prunes.operation)
	|| (allow_rp !=  nullptr && is_set(allow_rp->operation))
	|| (auto_rp !=  nullptr && is_set(auto_rp->operation))
	|| (auto_rp_mapping_agent !=  nullptr && is_set(auto_rp_mapping_agent->operation))
	|| (bidir_rp_addresses !=  nullptr && is_set(bidir_rp_addresses->operation))
	|| (bsr !=  nullptr && is_set(bsr->operation))
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation))
	|| (cj_multicast_only_frrs !=  nullptr && is_set(cj_multicast_only_frrs->operation))
	|| (convergence !=  nullptr && is_set(convergence->operation))
	|| (cs_multicast_only_frrs !=  nullptr && is_set(cs_multicast_only_frrs->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (injects !=  nullptr && is_set(injects->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (multicast_only_frr !=  nullptr && is_set(multicast_only_frr->operation))
	|| (nsf !=  nullptr && is_set(nsf->operation))
	|| (paths !=  nullptr && is_set(paths->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation))
	|| (rpf_redirect !=  nullptr && is_set(rpf_redirect->operation))
	|| (rpf_vector_enable !=  nullptr && is_set(rpf_vector_enable->operation))
	|| (sg_expiry_timer !=  nullptr && is_set(sg_expiry_timer->operation))
	|| (sparse_mode_rp_addresses !=  nullptr && is_set(sparse_mode_rp_addresses->operation))
	|| (ssm !=  nullptr && is_set(ssm->operation));
}

std::string Pim::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (accept_register.is_set || is_set(accept_register.operation)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (assert_disable.is_set || is_set(assert_disable.operation)) leaf_name_data.push_back(assert_disable.get_name_leafdata());
    if (auto_rp_disable.is_set || is_set(auto_rp_disable.operation)) leaf_name_data.push_back(auto_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.operation)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.operation)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.operation)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.operation)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.operation)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.operation)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.operation)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.operation)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.operation)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.operation)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allow-rp")
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
        else
        {
            allow_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv4::AllowRp>();
            allow_rp->parent = this;
            children["allow-rp"] = allow_rp.get();
        }
        return children.at("allow-rp");
    }

    if(child_yang_name == "auto-rp")
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp.get();
        }
        else
        {
            auto_rp = std::make_unique<Pim::Vrfs::Vrf::Ipv4::AutoRp>();
            auto_rp->parent = this;
            children["auto-rp"] = auto_rp.get();
        }
        return children.at("auto-rp");
    }

    if(child_yang_name == "auto-rp-mapping-agent")
    {
        if(auto_rp_mapping_agent != nullptr)
        {
            children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();
        }
        else
        {
            auto_rp_mapping_agent = std::make_unique<Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent>();
            auto_rp_mapping_agent->parent = this;
            children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();
        }
        return children.at("auto-rp-mapping-agent");
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        else
        {
            bidir_rp_addresses = std::make_unique<Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses>();
            bidir_rp_addresses->parent = this;
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        return children.at("bidir-rp-addresses");
    }

    if(child_yang_name == "bsr")
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
        else
        {
            bsr = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Bsr>();
            bsr->parent = this;
            children["bsr"] = bsr.get();
        }
        return children.at("bsr");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    if(child_yang_name == "cj-multicast-only-frrs")
    {
        if(cj_multicast_only_frrs != nullptr)
        {
            children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();
        }
        else
        {
            cj_multicast_only_frrs = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs>();
            cj_multicast_only_frrs->parent = this;
            children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();
        }
        return children.at("cj-multicast-only-frrs");
    }

    if(child_yang_name == "convergence")
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
        else
        {
            convergence = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Convergence>();
            convergence->parent = this;
            children["convergence"] = convergence.get();
        }
        return children.at("convergence");
    }

    if(child_yang_name == "cs-multicast-only-frrs")
    {
        if(cs_multicast_only_frrs != nullptr)
        {
            children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();
        }
        else
        {
            cs_multicast_only_frrs = std::make_unique<Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs>();
            cs_multicast_only_frrs->parent = this;
            children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();
        }
        return children.at("cs-multicast-only-frrs");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Pim::Vrfs::Vrf::Ipv4::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "injects")
    {
        if(injects != nullptr)
        {
            children["injects"] = injects.get();
        }
        else
        {
            injects = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Injects>();
            injects->parent = this;
            children["injects"] = injects.get();
        }
        return children.at("injects");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "multicast-only-frr")
    {
        if(multicast_only_frr != nullptr)
        {
            children["multicast-only-frr"] = multicast_only_frr.get();
        }
        else
        {
            multicast_only_frr = std::make_unique<Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr>();
            multicast_only_frr->parent = this;
            children["multicast-only-frr"] = multicast_only_frr.get();
        }
        return children.at("multicast-only-frr");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
        else
        {
            nsf = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf.get();
        }
        return children.at("nsf");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect.get();
        }
        else
        {
            rpf_redirect = std::make_unique<Pim::Vrfs::Vrf::Ipv4::RpfRedirect>();
            rpf_redirect->parent = this;
            children["rpf-redirect"] = rpf_redirect.get();
        }
        return children.at("rpf-redirect");
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        else
        {
            rpf_vector_enable = std::make_unique<Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable>();
            rpf_vector_enable->parent = this;
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        return children.at("rpf-vector-enable");
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        else
        {
            sg_expiry_timer = std::make_unique<Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer>();
            sg_expiry_timer->parent = this;
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        return children.at("sg-expiry-timer");
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        else
        {
            sparse_mode_rp_addresses = std::make_unique<Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses>();
            sparse_mode_rp_addresses->parent = this;
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        return children.at("sparse-mode-rp-addresses");
    }

    if(child_yang_name == "ssm")
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
        else
        {
            ssm = std::make_unique<Pim::Vrfs::Vrf::Ipv4::Ssm>();
            ssm->parent = this;
            children["ssm"] = ssm.get();
        }
        return children.at("ssm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::Ipv4::get_children()
{
    if(children.find("allow-rp") == children.end())
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
    }

    if(children.find("auto-rp") == children.end())
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp.get();
        }
    }

    if(children.find("auto-rp-mapping-agent") == children.end())
    {
        if(auto_rp_mapping_agent != nullptr)
        {
            children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();
        }
    }

    if(children.find("bidir-rp-addresses") == children.end())
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
    }

    if(children.find("bsr") == children.end())
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    if(children.find("cj-multicast-only-frrs") == children.end())
    {
        if(cj_multicast_only_frrs != nullptr)
        {
            children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();
        }
    }

    if(children.find("convergence") == children.end())
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
    }

    if(children.find("cs-multicast-only-frrs") == children.end())
    {
        if(cs_multicast_only_frrs != nullptr)
        {
            children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("injects") == children.end())
    {
        if(injects != nullptr)
        {
            children["injects"] = injects.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("multicast-only-frr") == children.end())
    {
        if(multicast_only_frr != nullptr)
        {
            children["multicast-only-frr"] = multicast_only_frr.get();
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    if(children.find("rpf-redirect") == children.end())
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect.get();
        }
    }

    if(children.find("rpf-vector-enable") == children.end())
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
    }

    if(children.find("sg-expiry-timer") == children.end())
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
    }

    if(children.find("sparse-mode-rp-addresses") == children.end())
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
    }

    if(children.find("ssm") == children.end())
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
    }
    if(value_path == "assert-disable")
    {
        assert_disable = value;
    }
    if(value_path == "auto-rp-disable")
    {
        auto_rp_disable = value;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
    }
    if(value_path == "register-source")
    {
        register_source = value;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
    }
}

Pim::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_unique<Pim::Vrfs::Vrf::Ipv4>())
	,ipv6(std::make_unique<Pim::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Pim::Vrfs::Vrf::~Vrf()
{
}

bool Pim::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Pim::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation));
}

std::string Pim::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/vrfs/" << get_segment_path();
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

Entity* Pim::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<Pim::Vrfs::Vrf::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4.get();
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
        else
        {
            ipv6 = std::make_unique<Pim::Vrfs::Vrf::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::Vrf::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
    }

    return children;
}

void Pim::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "pim";
}

Pim::Vrfs::~Vrfs()
{
}

bool Pim::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Pim::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Pim::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::Vrfs::get_children()
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

void Pim::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::EmbeddedRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"}
{
    yang_name = "embedded-rp-address"; yang_parent_name = "embedded-rp-addresses";
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::~EmbeddedRpAddress()
{
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set;
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation);
}

std::string Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/embedded-rp-addresses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddresses()
{
    yang_name = "embedded-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::~EmbeddedRpAddresses()
{
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::has_data() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<embedded_rp_address.size(); index++)
    {
        if(embedded_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "embedded-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "embedded-rp-address")
    {
        for(auto const & c : embedded_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress>();
        c->parent = this;
        embedded_rp_address.push_back(std::move(c));
        children[segment_path] = embedded_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::get_children()
{
    for (auto const & c : embedded_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/sparse-mode-rp-addresses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(std::move(c));
        children[segment_path] = sparse_mode_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::SparseModeRpAddresses::get_children()
{
    for (auto const & c : sparse_mode_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::SparseModeRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::InheritableDefaults::InheritableDefaults()
    :
    	convergency{YType::uint32, "convergency"},
	 dr_priority{YType::uint32, "dr-priority"},
	 hello_interval{YType::uint32, "hello-interval"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::DefaultContext::Ipv6::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::DefaultContext::Ipv6::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(convergency.operation)
	|| is_set(dr_priority.operation)
	|| is_set(hello_interval.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation);
}

std::string Pim::DefaultContext::Ipv6::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergency.is_set || is_set(convergency.operation)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::InheritableDefaults::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "convergency")
    {
        convergency = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::DefaultContext::Ipv6::Rpf::Rpf()
    :
    	route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Rpf::~Rpf()
{
}

bool Pim::DefaultContext::Ipv6::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::DefaultContext::Ipv6::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy.operation);
}

std::string Pim::DefaultContext::Ipv6::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.operation)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Rpf::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
    }
}

Pim::DefaultContext::Ipv6::SgExpiryTimer::SgExpiryTimer()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::DefaultContext::Ipv6::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv6::SgExpiryTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation);
}

std::string Pim::DefaultContext::Ipv6::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::SgExpiryTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::SgExpiryTimer::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::SgExpiryTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::DefaultContext::Ipv6::RpfVectorEnable::RpfVectorEnable()
    :
    	allow_ebgp{YType::boolean, "allow-ebgp"},
	 disable_ibgp{YType::boolean, "disable-ibgp"},
	 enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::DefaultContext::Ipv6::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::DefaultContext::Ipv6::RpfVectorEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_ebgp.operation)
	|| is_set(disable_ibgp.operation)
	|| is_set(enable.operation);
}

std::string Pim::DefaultContext::Ipv6::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::RpfVectorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.operation)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.operation)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::RpfVectorEnable::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::RpfVectorEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Pim::DefaultContext::Ipv6::Nsf::Nsf()
    :
    	lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Nsf::~Nsf()
{
}

bool Pim::DefaultContext::Ipv6::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Pim::DefaultContext::Ipv6::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(lifetime.operation);
}

std::string Pim::DefaultContext::Ipv6::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Nsf::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    	maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
	 threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_group_ranges_auto_rp.operation)
	|| is_set(threshold_group_ranges_auto_rp.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::BsrGlobalGroupMappings()
    :
    	bsr_maximum_global_group_mappings{YType::uint32, "bsr-maximum-global-group-mappings"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::~BsrGlobalGroupMappings()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::has_data() const
{
    return bsr_maximum_global_group_mappings.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_group_mappings.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_group_mappings.is_set || is_set(bsr_maximum_global_group_mappings.operation)) leaf_name_data.push_back(bsr_maximum_global_group_mappings.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::GlobalRoutes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::~GlobalRoutes()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-routes";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    	bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_group_ranges.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.operation)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::GlobalGroupMappingsAutoRp()
    :
    	maximum_global_group_ranges_auto_rp{YType::uint32, "maximum-global-group-ranges-auto-rp"},
	 threshold_global_group_ranges_auto_rp{YType::uint32, "threshold-global-group-ranges-auto-rp"}
{
    yang_name = "global-group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::~GlobalGroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_data() const
{
    return maximum_global_group_ranges_auto_rp.is_set
	|| threshold_global_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_global_group_ranges_auto_rp.operation)
	|| is_set(threshold_global_group_ranges_auto_rp.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_global_group_ranges_auto_rp.is_set || is_set(maximum_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_global_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_global_group_ranges_auto_rp.is_set || is_set(threshold_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_global_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::RegisterStates::RegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::RegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::RegisterStates::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::RegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::RouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::BsrGlobalCandidateRpCache()
    :
    	bsr_maximum_global_candidate_rp_cache{YType::uint32, "bsr-maximum-global-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::~BsrGlobalCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_data() const
{
    return bsr_maximum_global_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_candidate_rp_cache.is_set || is_set(bsr_maximum_global_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_global_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    	bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::GlobalRegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::~GlobalRegisterStates()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-register-states";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::GlobalRouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::~GlobalRouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::Routes::Routes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv6::Maximum::Routes::~Routes()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Maximum::Routes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::Routes::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::Routes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Maximum::Maximum()
    :
    	gloabal_high_priority_packet_queue{YType::uint32, "gloabal-high-priority-packet-queue"},
	 gloabal_low_priority_packet_queue{YType::uint32, "gloabal-low-priority-packet-queue"}
    	,
    bsr_candidate_rp_cache(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache>())
	,bsr_global_candidate_rp_cache(nullptr) // presence node
	,bsr_global_group_mappings(nullptr) // presence node
	,bsr_group_mappings(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings>())
	,global_group_mappings_auto_rp(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp>())
	,global_register_states(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates>())
	,global_route_interfaces(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces>())
	,global_routes(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes>())
	,group_mappings_auto_rp(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp>())
	,register_states(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::RegisterStates>())
	,route_interfaces(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces>())
	,routes(std::make_unique<Pim::DefaultContext::Ipv6::Maximum::Routes>())
{
    bsr_candidate_rp_cache->parent = this;
    children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();

    bsr_group_mappings->parent = this;
    children["bsr-group-mappings"] = bsr_group_mappings.get();

    global_group_mappings_auto_rp->parent = this;
    children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();

    global_register_states->parent = this;
    children["global-register-states"] = global_register_states.get();

    global_route_interfaces->parent = this;
    children["global-route-interfaces"] = global_route_interfaces.get();

    global_routes->parent = this;
    children["global-routes"] = global_routes.get();

    group_mappings_auto_rp->parent = this;
    children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();

    register_states->parent = this;
    children["register-states"] = register_states.get();

    route_interfaces->parent = this;
    children["route-interfaces"] = route_interfaces.get();

    routes->parent = this;
    children["routes"] = routes.get();

    yang_name = "maximum"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Maximum::~Maximum()
{
}

bool Pim::DefaultContext::Ipv6::Maximum::has_data() const
{
    return gloabal_high_priority_packet_queue.is_set
	|| gloabal_low_priority_packet_queue.is_set
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_data())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_data())
	|| (global_register_states !=  nullptr && global_register_states->has_data())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_data())
	|| (global_routes !=  nullptr && global_routes->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::DefaultContext::Ipv6::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(gloabal_high_priority_packet_queue.operation)
	|| is_set(gloabal_low_priority_packet_queue.operation)
	|| (bsr_candidate_rp_cache !=  nullptr && is_set(bsr_candidate_rp_cache->operation))
	|| (bsr_global_candidate_rp_cache !=  nullptr && is_set(bsr_global_candidate_rp_cache->operation))
	|| (bsr_global_group_mappings !=  nullptr && is_set(bsr_global_group_mappings->operation))
	|| (bsr_group_mappings !=  nullptr && is_set(bsr_group_mappings->operation))
	|| (global_group_mappings_auto_rp !=  nullptr && is_set(global_group_mappings_auto_rp->operation))
	|| (global_register_states !=  nullptr && is_set(global_register_states->operation))
	|| (global_route_interfaces !=  nullptr && is_set(global_route_interfaces->operation))
	|| (global_routes !=  nullptr && is_set(global_routes->operation))
	|| (group_mappings_auto_rp !=  nullptr && is_set(group_mappings_auto_rp->operation))
	|| (register_states !=  nullptr && is_set(register_states->operation))
	|| (route_interfaces !=  nullptr && is_set(route_interfaces->operation))
	|| (routes !=  nullptr && is_set(routes->operation));
}

std::string Pim::DefaultContext::Ipv6::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gloabal_high_priority_packet_queue.is_set || is_set(gloabal_high_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_high_priority_packet_queue.get_name_leafdata());
    if (gloabal_low_priority_packet_queue.is_set || is_set(gloabal_low_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_low_priority_packet_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        else
        {
            bsr_candidate_rp_cache = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache>();
            bsr_candidate_rp_cache->parent = this;
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        return children.at("bsr-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-candidate-rp-cache")
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        else
        {
            bsr_global_candidate_rp_cache = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache>();
            bsr_global_candidate_rp_cache->parent = this;
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        return children.at("bsr-global-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-group-mappings")
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        else
        {
            bsr_global_group_mappings = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings>();
            bsr_global_group_mappings->parent = this;
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        return children.at("bsr-global-group-mappings");
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        else
        {
            bsr_group_mappings = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings>();
            bsr_group_mappings->parent = this;
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        return children.at("bsr-group-mappings");
    }

    if(child_yang_name == "global-group-mappings-auto-rp")
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        else
        {
            global_group_mappings_auto_rp = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp>();
            global_group_mappings_auto_rp->parent = this;
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        return children.at("global-group-mappings-auto-rp");
    }

    if(child_yang_name == "global-register-states")
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
        else
        {
            global_register_states = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates>();
            global_register_states->parent = this;
            children["global-register-states"] = global_register_states.get();
        }
        return children.at("global-register-states");
    }

    if(child_yang_name == "global-route-interfaces")
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        else
        {
            global_route_interfaces = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces>();
            global_route_interfaces->parent = this;
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        return children.at("global-route-interfaces");
    }

    if(child_yang_name == "global-routes")
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
        else
        {
            global_routes = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes>();
            global_routes->parent = this;
            children["global-routes"] = global_routes.get();
        }
        return children.at("global-routes");
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        else
        {
            group_mappings_auto_rp = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp>();
            group_mappings_auto_rp->parent = this;
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        return children.at("group-mappings-auto-rp");
    }

    if(child_yang_name == "register-states")
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
        else
        {
            register_states = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::RegisterStates>();
            register_states->parent = this;
            children["register-states"] = register_states.get();
        }
        return children.at("register-states");
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
        else
        {
            route_interfaces = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces>();
            route_interfaces->parent = this;
            children["route-interfaces"] = route_interfaces.get();
        }
        return children.at("route-interfaces");
    }

    if(child_yang_name == "routes")
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
        else
        {
            routes = std::make_unique<Pim::DefaultContext::Ipv6::Maximum::Routes>();
            routes->parent = this;
            children["routes"] = routes.get();
        }
        return children.at("routes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Maximum::get_children()
{
    if(children.find("bsr-candidate-rp-cache") == children.end())
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-candidate-rp-cache") == children.end())
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-group-mappings") == children.end())
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
    }

    if(children.find("bsr-group-mappings") == children.end())
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
    }

    if(children.find("global-group-mappings-auto-rp") == children.end())
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
    }

    if(children.find("global-register-states") == children.end())
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
    }

    if(children.find("global-route-interfaces") == children.end())
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
    }

    if(children.find("global-routes") == children.end())
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
    }

    if(children.find("group-mappings-auto-rp") == children.end())
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
    }

    if(children.find("register-states") == children.end())
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
    }

    if(children.find("route-interfaces") == children.end())
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
    }

    if(children.find("routes") == children.end())
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gloabal-high-priority-packet-queue")
    {
        gloabal_high_priority_packet_queue = value;
    }
    if(value_path == "gloabal-low-priority-packet-queue")
    {
        gloabal_low_priority_packet_queue = value;
    }
}

Pim::DefaultContext::Ipv6::Ssm::Ssm()
    :
    	disable{YType::boolean, "disable"},
	 range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Ssm::~Ssm()
{
}

bool Pim::DefaultContext::Ipv6::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::DefaultContext::Ipv6::Ssm::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(range.operation);
}

std::string Pim::DefaultContext::Ipv6::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Ssm::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Ssm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bidir-rp-addresses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv6::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::BidirRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(std::move(c));
        children[segment_path] = bidir_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::BidirRpAddresses::get_children()
{
    for (auto const & c : bidir_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::BidirRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::Sm()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "sm"; yang_parent_name = "candidate-rp";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::~Sm()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::Bidir()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "bidir"; yang_parent_name = "candidate-rp";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::~Bidir()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    	address{YType::str, "address"}
    	,
    bidir(std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir>())
	,sm(std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm>())
{
    bidir->parent = this;
    children["bidir"] = bidir.get();

    sm->parent = this;
    children["sm"] = sm.get();

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| (bidir !=  nullptr && bidir->has_data())
	|| (sm !=  nullptr && sm->has_data());
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (bidir !=  nullptr && is_set(bidir->operation))
	|| (sm !=  nullptr && is_set(sm->operation));
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bsr/candidate-rps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir")
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
        else
        {
            bidir = std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir>();
            bidir->parent = this;
            children["bidir"] = bidir.get();
        }
        return children.at("bidir");
    }

    if(child_yang_name == "sm")
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
        else
        {
            sm = std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm>();
            sm->parent = this;
            children["sm"] = sm.get();
        }
        return children.at("sm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::get_children()
{
    if(children.find("bidir") == children.end())
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
    }

    if(children.find("sm") == children.end())
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bsr/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Bsr::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::CandidateBsr()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::int32, "prefix-length"},
	 priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation);
}

std::string Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/bsr/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::CandidateBsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Pim::DefaultContext::Ipv6::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    yang_name = "bsr"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Bsr::~Bsr()
{
}

bool Pim::DefaultContext::Ipv6::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::DefaultContext::Ipv6::Bsr::has_operation() const
{
    return is_set(operation)
	|| (candidate_bsr !=  nullptr && is_set(candidate_bsr->operation))
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation));
}

std::string Pim::DefaultContext::Ipv6::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
        else
        {
            candidate_bsr = std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateBsr>();
            candidate_bsr->parent = this;
            children["candidate-bsr"] = candidate_bsr.get();
        }
        return children.at("candidate-bsr");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<Pim::DefaultContext::Ipv6::Bsr::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Bsr::get_children()
{
    if(children.find("candidate-bsr") == children.end())
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::RedirectBundle()
    :
    	bundle_name{YType::str, "bundle-name"},
	 interface_bandwidth{YType::uint32, "interface-bandwidth"},
	 threshold_bandwidth{YType::uint32, "threshold-bandwidth"}
{
    yang_name = "redirect-bundle"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::~RedirectBundle()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::has_data() const
{
    return bundle_name.is_set
	|| interface_bandwidth.is_set
	|| threshold_bandwidth.is_set;
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(threshold_bandwidth.operation);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-bundle";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (threshold_bandwidth.is_set || is_set(threshold_bandwidth.operation)) leaf_name_data.push_back(threshold_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "threshold-bandwidth")
    {
        threshold_bandwidth = value;
    }
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::Bfd()
    :
    	detection_multiplier{YType::uint32, "detection-multiplier"},
	 enable{YType::boolean, "enable"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(enable.operation)
	|| is_set(interval.operation);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
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

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::Oor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum{YType::uint32, "maximum"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "oor"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::~Oor()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 bsr_border{YType::boolean, "bsr-border"},
	 dr_priority{YType::uint32, "dr-priority"},
	 enable{YType::empty, "enable"},
	 hello_interval{YType::uint32, "hello-interval"},
	 interface_enable{YType::boolean, "interface-enable"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_unique<Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd>())
	,oor(std::make_unique<Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor>())
	,redirect_bundle(nullptr) // presence node
{
    bfd->parent = this;
    children["bfd"] = bfd.get();

    oor->parent = this;
    children["oor"] = oor.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::DefaultContext::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (oor !=  nullptr && oor->has_data())
	|| (redirect_bundle !=  nullptr && redirect_bundle->has_data());
}

bool Pim::DefaultContext::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bsr_border.operation)
	|| is_set(dr_priority.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(interface_enable.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| (bfd !=  nullptr && is_set(bfd->operation))
	|| (oor !=  nullptr && is_set(oor->operation))
	|| (redirect_bundle !=  nullptr && is_set(redirect_bundle->operation));
}

std::string Pim::DefaultContext::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.operation)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.operation)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
        else
        {
            bfd = std::make_unique<Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd.get();
        }
        return children.at("bfd");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
        else
        {
            oor = std::make_unique<Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor>();
            oor->parent = this;
            children["oor"] = oor.get();
        }
        return children.at("oor");
    }

    if(child_yang_name == "redirect-bundle")
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
        else
        {
            redirect_bundle = std::make_unique<Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle>();
            redirect_bundle->parent = this;
            children["redirect-bundle"] = redirect_bundle.get();
        }
        return children.at("redirect-bundle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Interfaces::Interface::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
    }

    if(children.find("redirect-bundle") == children.end())
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::DefaultContext::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Interfaces::~Interfaces()
{
}

bool Pim::DefaultContext::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv6::AllowRp::AllowRp()
    :
    	group_list_name{YType::str, "group-list-name"},
	 rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::AllowRp::~AllowRp()
{
}

bool Pim::DefaultContext::Ipv6::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::DefaultContext::Ipv6::AllowRp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_list_name.operation)
	|| is_set(rp_list_name.operation);
}

std::string Pim::DefaultContext::Ipv6::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::AllowRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.operation)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.operation)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::AllowRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::AllowRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
    }
}

Pim::DefaultContext::Ipv6::Convergence::Convergence()
    :
    	link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
	 rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv6";
}

Pim::DefaultContext::Ipv6::Convergence::~Convergence()
{
}

bool Pim::DefaultContext::Ipv6::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::DefaultContext::Ipv6::Convergence::has_operation() const
{
    return is_set(operation)
	|| is_set(link_down_prune_delay.operation)
	|| is_set(rpf_conflict_join_delay.operation);
}

std::string Pim::DefaultContext::Ipv6::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::Convergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.operation)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.operation)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::Convergence::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv6::Convergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
    }
}

Pim::DefaultContext::Ipv6::Ipv6()
    :
    	accept_register{YType::str, "accept-register"},
	 assert_disable{YType::empty, "assert-disable"},
	 embedded_rp_disable{YType::empty, "embedded-rp-disable"},
	 log_neighbor_changes{YType::empty, "log-neighbor-changes"},
	 multipath{YType::enumeration, "multipath"},
	 neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
	 neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 old_register_checksum{YType::empty, "old-register-checksum"},
	 register_source{YType::str, "register-source"},
	 rp_static_deny{YType::str, "rp-static-deny"},
	 spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
	 ssm_allow_override{YType::empty, "ssm-allow-override"},
	 suppress_data_registers{YType::empty, "suppress-data-registers"},
	 suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,bidir_rp_addresses(std::make_unique<Pim::DefaultContext::Ipv6::BidirRpAddresses>())
	,bsr(std::make_unique<Pim::DefaultContext::Ipv6::Bsr>())
	,convergence(std::make_unique<Pim::DefaultContext::Ipv6::Convergence>())
	,embedded_rp_addresses(std::make_unique<Pim::DefaultContext::Ipv6::EmbeddedRpAddresses>())
	,inheritable_defaults(std::make_unique<Pim::DefaultContext::Ipv6::InheritableDefaults>())
	,interfaces(std::make_unique<Pim::DefaultContext::Ipv6::Interfaces>())
	,maximum(std::make_unique<Pim::DefaultContext::Ipv6::Maximum>())
	,nsf(std::make_unique<Pim::DefaultContext::Ipv6::Nsf>())
	,rpf(std::make_unique<Pim::DefaultContext::Ipv6::Rpf>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_unique<Pim::DefaultContext::Ipv6::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_unique<Pim::DefaultContext::Ipv6::SparseModeRpAddresses>())
	,ssm(std::make_unique<Pim::DefaultContext::Ipv6::Ssm>())
{
    bidir_rp_addresses->parent = this;
    children["bidir-rp-addresses"] = bidir_rp_addresses.get();

    bsr->parent = this;
    children["bsr"] = bsr.get();

    convergence->parent = this;
    children["convergence"] = convergence.get();

    embedded_rp_addresses->parent = this;
    children["embedded-rp-addresses"] = embedded_rp_addresses.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    nsf->parent = this;
    children["nsf"] = nsf.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    sg_expiry_timer->parent = this;
    children["sg-expiry-timer"] = sg_expiry_timer.get();

    sparse_mode_rp_addresses->parent = this;
    children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();

    ssm->parent = this;
    children["ssm"] = ssm.get();

    yang_name = "ipv6"; yang_parent_name = "default-context";
}

Pim::DefaultContext::Ipv6::~Ipv6()
{
}

bool Pim::DefaultContext::Ipv6::has_data() const
{
    return accept_register.is_set
	|| assert_disable.is_set
	|| embedded_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (embedded_rp_addresses !=  nullptr && embedded_rp_addresses->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::DefaultContext::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_register.operation)
	|| is_set(assert_disable.operation)
	|| is_set(embedded_rp_disable.operation)
	|| is_set(log_neighbor_changes.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_check_on_receive.operation)
	|| is_set(neighbor_check_on_send.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(old_register_checksum.operation)
	|| is_set(register_source.operation)
	|| is_set(rp_static_deny.operation)
	|| is_set(spt_threshold_infinity.operation)
	|| is_set(ssm_allow_override.operation)
	|| is_set(suppress_data_registers.operation)
	|| is_set(suppress_rpf_prunes.operation)
	|| (allow_rp !=  nullptr && is_set(allow_rp->operation))
	|| (bidir_rp_addresses !=  nullptr && is_set(bidir_rp_addresses->operation))
	|| (bsr !=  nullptr && is_set(bsr->operation))
	|| (convergence !=  nullptr && is_set(convergence->operation))
	|| (embedded_rp_addresses !=  nullptr && is_set(embedded_rp_addresses->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (nsf !=  nullptr && is_set(nsf->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation))
	|| (rpf_vector_enable !=  nullptr && is_set(rpf_vector_enable->operation))
	|| (sg_expiry_timer !=  nullptr && is_set(sg_expiry_timer->operation))
	|| (sparse_mode_rp_addresses !=  nullptr && is_set(sparse_mode_rp_addresses->operation))
	|| (ssm !=  nullptr && is_set(ssm->operation));
}

std::string Pim::DefaultContext::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_register.is_set || is_set(accept_register.operation)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (assert_disable.is_set || is_set(assert_disable.operation)) leaf_name_data.push_back(assert_disable.get_name_leafdata());
    if (embedded_rp_disable.is_set || is_set(embedded_rp_disable.operation)) leaf_name_data.push_back(embedded_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.operation)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.operation)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.operation)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.operation)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.operation)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.operation)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.operation)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.operation)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.operation)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.operation)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allow-rp")
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
        else
        {
            allow_rp = std::make_unique<Pim::DefaultContext::Ipv6::AllowRp>();
            allow_rp->parent = this;
            children["allow-rp"] = allow_rp.get();
        }
        return children.at("allow-rp");
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        else
        {
            bidir_rp_addresses = std::make_unique<Pim::DefaultContext::Ipv6::BidirRpAddresses>();
            bidir_rp_addresses->parent = this;
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        return children.at("bidir-rp-addresses");
    }

    if(child_yang_name == "bsr")
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
        else
        {
            bsr = std::make_unique<Pim::DefaultContext::Ipv6::Bsr>();
            bsr->parent = this;
            children["bsr"] = bsr.get();
        }
        return children.at("bsr");
    }

    if(child_yang_name == "convergence")
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
        else
        {
            convergence = std::make_unique<Pim::DefaultContext::Ipv6::Convergence>();
            convergence->parent = this;
            children["convergence"] = convergence.get();
        }
        return children.at("convergence");
    }

    if(child_yang_name == "embedded-rp-addresses")
    {
        if(embedded_rp_addresses != nullptr)
        {
            children["embedded-rp-addresses"] = embedded_rp_addresses.get();
        }
        else
        {
            embedded_rp_addresses = std::make_unique<Pim::DefaultContext::Ipv6::EmbeddedRpAddresses>();
            embedded_rp_addresses->parent = this;
            children["embedded-rp-addresses"] = embedded_rp_addresses.get();
        }
        return children.at("embedded-rp-addresses");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Pim::DefaultContext::Ipv6::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Pim::DefaultContext::Ipv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Pim::DefaultContext::Ipv6::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
        else
        {
            nsf = std::make_unique<Pim::DefaultContext::Ipv6::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf.get();
        }
        return children.at("nsf");
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Pim::DefaultContext::Ipv6::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        else
        {
            rpf_vector_enable = std::make_unique<Pim::DefaultContext::Ipv6::RpfVectorEnable>();
            rpf_vector_enable->parent = this;
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        return children.at("rpf-vector-enable");
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        else
        {
            sg_expiry_timer = std::make_unique<Pim::DefaultContext::Ipv6::SgExpiryTimer>();
            sg_expiry_timer->parent = this;
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        return children.at("sg-expiry-timer");
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        else
        {
            sparse_mode_rp_addresses = std::make_unique<Pim::DefaultContext::Ipv6::SparseModeRpAddresses>();
            sparse_mode_rp_addresses->parent = this;
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        return children.at("sparse-mode-rp-addresses");
    }

    if(child_yang_name == "ssm")
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
        else
        {
            ssm = std::make_unique<Pim::DefaultContext::Ipv6::Ssm>();
            ssm->parent = this;
            children["ssm"] = ssm.get();
        }
        return children.at("ssm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv6::get_children()
{
    if(children.find("allow-rp") == children.end())
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
    }

    if(children.find("bidir-rp-addresses") == children.end())
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
    }

    if(children.find("bsr") == children.end())
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
    }

    if(children.find("convergence") == children.end())
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
    }

    if(children.find("embedded-rp-addresses") == children.end())
    {
        if(embedded_rp_addresses != nullptr)
        {
            children["embedded-rp-addresses"] = embedded_rp_addresses.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    if(children.find("rpf-vector-enable") == children.end())
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
    }

    if(children.find("sg-expiry-timer") == children.end())
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
    }

    if(children.find("sparse-mode-rp-addresses") == children.end())
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
    }

    if(children.find("ssm") == children.end())
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
    }
    if(value_path == "assert-disable")
    {
        assert_disable = value;
    }
    if(value_path == "embedded-rp-disable")
    {
        embedded_rp_disable = value;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
    }
    if(value_path == "register-source")
    {
        register_source = value;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
    }
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::CsMulticastOnlyFrr()
    :
    	backup{YType::str, "backup"},
	 prefix_length{YType::int32, "prefix-length"},
	 primary{YType::str, "primary"},
	 source{YType::str, "source"}
{
    yang_name = "cs-multicast-only-frr"; yang_parent_name = "cs-multicast-only-frrs";
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::~CsMulticastOnlyFrr()
{
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_data() const
{
    return backup.is_set
	|| prefix_length.is_set
	|| primary.is_set
	|| source.is_set;
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary.operation)
	|| is_set(source.operation);
}

std::string Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frr" <<"[backup='" <<backup.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[primary='" <<primary.get() <<"']" <<"[source='" <<source.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/cs-multicast-only-frrs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrrs()
{
    yang_name = "cs-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::~CsMulticastOnlyFrrs()
{
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cs_multicast_only_frr.size(); index++)
    {
        if(cs_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cs-multicast-only-frrs";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cs-multicast-only-frr")
    {
        for(auto const & c : cs_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr>();
        c->parent = this;
        cs_multicast_only_frr.push_back(std::move(c));
        children[segment_path] = cs_multicast_only_frr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::get_children()
{
    for (auto const & c : cs_multicast_only_frr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::MulticastOnlyFrr::MulticastOnlyFrr()
    :
    	enable{YType::empty, "enable"},
	 flow_multicast_only_frr{YType::str, "flow-multicast-only-frr"},
	 non_revertive_multicast_only_frr{YType::empty, "non-revertive-multicast-only-frr"},
	 rib_multicast_only_frr{YType::str, "rib-multicast-only-frr"}
{
    yang_name = "multicast-only-frr"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::MulticastOnlyFrr::~MulticastOnlyFrr()
{
}

bool Pim::DefaultContext::Ipv4::MulticastOnlyFrr::has_data() const
{
    return enable.is_set
	|| flow_multicast_only_frr.is_set
	|| non_revertive_multicast_only_frr.is_set
	|| rib_multicast_only_frr.is_set;
}

bool Pim::DefaultContext::Ipv4::MulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(flow_multicast_only_frr.operation)
	|| is_set(non_revertive_multicast_only_frr.operation)
	|| is_set(rib_multicast_only_frr.operation);
}

std::string Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-only-frr";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flow_multicast_only_frr.is_set || is_set(flow_multicast_only_frr.operation)) leaf_name_data.push_back(flow_multicast_only_frr.get_name_leafdata());
    if (non_revertive_multicast_only_frr.is_set || is_set(non_revertive_multicast_only_frr.operation)) leaf_name_data.push_back(non_revertive_multicast_only_frr.get_name_leafdata());
    if (rib_multicast_only_frr.is_set || is_set(rib_multicast_only_frr.operation)) leaf_name_data.push_back(rib_multicast_only_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::MulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::MulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flow-multicast-only-frr")
    {
        flow_multicast_only_frr = value;
    }
    if(value_path == "non-revertive-multicast-only-frr")
    {
        non_revertive_multicast_only_frr = value;
    }
    if(value_path == "rib-multicast-only-frr")
    {
        rib_multicast_only_frr = value;
    }
}

Pim::DefaultContext::Ipv4::RpfRedirect::RpfRedirect()
    :
    	route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf-redirect"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::RpfRedirect::~RpfRedirect()
{
}

bool Pim::DefaultContext::Ipv4::RpfRedirect::has_data() const
{
    return route_policy.is_set;
}

bool Pim::DefaultContext::Ipv4::RpfRedirect::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy.operation);
}

std::string Pim::DefaultContext::Ipv4::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::RpfRedirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.operation)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::RpfRedirect::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::RpfRedirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
    }
}

Pim::DefaultContext::Ipv4::Paths::Path::Path()
    :
    	prefix_length{YType::int32, "prefix-length"},
	 source_address{YType::str, "source-address"},
	 rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "path"; yang_parent_name = "paths";
}

Pim::DefaultContext::Ipv4::Paths::Path::~Path()
{
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return prefix_length.is_set
	|| source_address.is_set;
}

bool Pim::DefaultContext::Ipv4::Paths::Path::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(source_address.operation);
}

std::string Pim::DefaultContext::Ipv4::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Paths::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/paths/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Paths::Path::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Paths::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

Pim::DefaultContext::Ipv4::Paths::Paths()
{
    yang_name = "paths"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Paths::~Paths()
{
}

bool Pim::DefaultContext::Ipv4::Paths::has_data() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path")
    {
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::Paths::Path>();
        c->parent = this;
        path.push_back(std::move(c));
        children[segment_path] = path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Paths::get_children()
{
    for (auto const & c : path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Paths::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::CjMulticastOnlyFrr()
    :
    	backup{YType::str, "backup"},
	 prefix_length{YType::int32, "prefix-length"},
	 primary{YType::str, "primary"},
	 source{YType::str, "source"}
{
    yang_name = "cj-multicast-only-frr"; yang_parent_name = "cj-multicast-only-frrs";
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::~CjMulticastOnlyFrr()
{
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_data() const
{
    return backup.is_set
	|| prefix_length.is_set
	|| primary.is_set
	|| source.is_set;
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary.operation)
	|| is_set(source.operation);
}

std::string Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frr" <<"[backup='" <<backup.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[primary='" <<primary.get() <<"']" <<"[source='" <<source.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/cj-multicast-only-frrs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrrs()
{
    yang_name = "cj-multicast-only-frrs"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::~CjMulticastOnlyFrrs()
{
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::has_data() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::has_operation() const
{
    for (std::size_t index=0; index<cj_multicast_only_frr.size(); index++)
    {
        if(cj_multicast_only_frr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cj-multicast-only-frrs";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cj-multicast-only-frr")
    {
        for(auto const & c : cj_multicast_only_frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr>();
        c->parent = this;
        cj_multicast_only_frr.push_back(std::move(c));
        children[segment_path] = cj_multicast_only_frr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::get_children()
{
    for (auto const & c : cj_multicast_only_frr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::AutoRp::AutoRp()
{
    yang_name = "auto-rp"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::AutoRp::~AutoRp()
{
}

bool Pim::DefaultContext::Ipv4::AutoRp::has_data() const
{
    return false;
}

bool Pim::DefaultContext::Ipv4::AutoRp::has_operation() const
{
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::AutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::AutoRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::AutoRp::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::Parameters()
    :
    	announce_period{YType::uint32, "announce-period"},
	 interface_name{YType::str, "interface-name"},
	 ttl{YType::uint32, "ttl"}
{
    yang_name = "parameters"; yang_parent_name = "auto-rp-mapping-agent";
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::~Parameters()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::has_data() const
{
    return announce_period.is_set
	|| interface_name.is_set
	|| ttl.is_set;
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(announce_period.operation)
	|| is_set(interface_name.operation)
	|| is_set(ttl.operation);
}

std::string Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/auto-rp-mapping-agent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_period.is_set || is_set(announce_period.operation)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce-period")
    {
        announce_period = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::CacheLimit()
    :
    	maximum_cache_entry{YType::uint32, "maximum-cache-entry"},
	 threshold_cache_entry{YType::uint32, "threshold-cache-entry"}
{
    yang_name = "cache-limit"; yang_parent_name = "auto-rp-mapping-agent";
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::~CacheLimit()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::has_data() const
{
    return maximum_cache_entry.is_set
	|| threshold_cache_entry.is_set;
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_cache_entry.operation)
	|| is_set(threshold_cache_entry.operation);
}

std::string Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-limit";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/auto-rp-mapping-agent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cache_entry.is_set || is_set(maximum_cache_entry.operation)) leaf_name_data.push_back(maximum_cache_entry.get_name_leafdata());
    if (threshold_cache_entry.is_set || is_set(threshold_cache_entry.operation)) leaf_name_data.push_back(threshold_cache_entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-cache-entry")
    {
        maximum_cache_entry = value;
    }
    if(value_path == "threshold-cache-entry")
    {
        threshold_cache_entry = value;
    }
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::AutoRpMappingAgent()
    :
    cache_limit(nullptr) // presence node
	,parameters(nullptr) // presence node
{
    yang_name = "auto-rp-mapping-agent"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::AutoRpMappingAgent::~AutoRpMappingAgent()
{
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::has_data() const
{
    return (cache_limit !=  nullptr && cache_limit->has_data())
	|| (parameters !=  nullptr && parameters->has_data());
}

bool Pim::DefaultContext::Ipv4::AutoRpMappingAgent::has_operation() const
{
    return is_set(operation)
	|| (cache_limit !=  nullptr && is_set(cache_limit->operation))
	|| (parameters !=  nullptr && is_set(parameters->operation));
}

std::string Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp-mapping-agent";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cache-limit")
    {
        if(cache_limit != nullptr)
        {
            children["cache-limit"] = cache_limit.get();
        }
        else
        {
            cache_limit = std::make_unique<Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit>();
            cache_limit->parent = this;
            children["cache-limit"] = cache_limit.get();
        }
        return children.at("cache-limit");
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters.get();
        }
        else
        {
            parameters = std::make_unique<Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters.get();
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::AutoRpMappingAgent::get_children()
{
    if(children.find("cache-limit") == children.end())
    {
        if(cache_limit != nullptr)
        {
            children["cache-limit"] = cache_limit.get();
        }
    }

    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::AutoRpMappingAgent::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::CandidateRpRange()
    :
    	access_list_name{YType::str, "access-list-name"},
	 announce_period{YType::uint32, "announce-period"},
	 ttl{YType::uint32, "ttl"}
{
    yang_name = "candidate-rp-range"; yang_parent_name = "candidate-rp";
}

Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::~CandidateRpRange()
{
}

bool Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::has_data() const
{
    return access_list_name.is_set
	|| announce_period.is_set
	|| ttl.is_set;
}

bool Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(announce_period.operation)
	|| is_set(ttl.operation);
}

std::string Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-range";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.operation)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRp()
    :
    	interface_name{YType::str, "interface-name"},
	 protocol_mode{YType::enumeration, "protocol-mode"}
    	,
    candidate_rp_range(nullptr) // presence node
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::has_data() const
{
    return interface_name.is_set
	|| protocol_mode.is_set
	|| (candidate_rp_range !=  nullptr && candidate_rp_range->has_data());
}

bool Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(protocol_mode.operation)
	|| (candidate_rp_range !=  nullptr && is_set(candidate_rp_range->operation));
}

std::string Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[interface-name='" <<interface_name.get() <<"']" <<"[protocol-mode='" <<protocol_mode.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/candidate-rps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp-range")
    {
        if(candidate_rp_range != nullptr)
        {
            children["candidate-rp-range"] = candidate_rp_range.get();
        }
        else
        {
            candidate_rp_range = std::make_unique<Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange>();
            candidate_rp_range->parent = this;
            children["candidate-rp-range"] = candidate_rp_range.get();
        }
        return children.at("candidate-rp-range");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::get_children()
{
    if(children.find("candidate-rp-range") == children.end())
    {
        if(candidate_rp_range != nullptr)
        {
            children["candidate-rp-range"] = candidate_rp_range.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::DefaultContext::Ipv4::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::CandidateRps::~CandidateRps()
{
}

bool Pim::DefaultContext::Ipv4::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::Injects::Inject::Inject()
    :
    	prefix_length{YType::int32, "prefix-length"},
	 source_address{YType::str, "source-address"},
	 rpf_proxy_address{YType::str, "rpf-proxy-address"}
{
    yang_name = "inject"; yang_parent_name = "injects";
}

Pim::DefaultContext::Ipv4::Injects::Inject::~Inject()
{
}

bool Pim::DefaultContext::Ipv4::Injects::Inject::has_data() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return prefix_length.is_set
	|| source_address.is_set;
}

bool Pim::DefaultContext::Ipv4::Injects::Inject::has_operation() const
{
    for (auto const & leaf : rpf_proxy_address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(source_address.operation);
}

std::string Pim::DefaultContext::Ipv4::Injects::Inject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject" <<"[prefix-length='" <<prefix_length.get() <<"']" <<"[source-address='" <<source_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Injects::Inject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/injects/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());

    auto rpf_proxy_address_name_datas = rpf_proxy_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rpf_proxy_address_name_datas.begin(), rpf_proxy_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Injects::Inject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Injects::Inject::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Injects::Inject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "rpf-proxy-address")
    {
        rpf_proxy_address.append(value);
    }
}

Pim::DefaultContext::Ipv4::Injects::Injects()
{
    yang_name = "injects"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Injects::~Injects()
{
}

bool Pim::DefaultContext::Ipv4::Injects::has_data() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Injects::has_operation() const
{
    for (std::size_t index=0; index<inject.size(); index++)
    {
        if(inject[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::Injects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "injects";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Injects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Injects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inject")
    {
        for(auto const & c : inject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::Injects::Inject>();
        c->parent = this;
        inject.push_back(std::move(c));
        children[segment_path] = inject.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Injects::get_children()
{
    for (auto const & c : inject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Injects::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::SparseModeRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "sparse-mode-rp-address"; yang_parent_name = "sparse-mode-rp-addresses";
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::~SparseModeRpAddress()
{
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/sparse-mode-rp-addresses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddresses()
{
    yang_name = "sparse-mode-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::SparseModeRpAddresses::~SparseModeRpAddresses()
{
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::has_data() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::SparseModeRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<sparse_mode_rp_address.size(); index++)
    {
        if(sparse_mode_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sparse-mode-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sparse-mode-rp-address")
    {
        for(auto const & c : sparse_mode_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress>();
        c->parent = this;
        sparse_mode_rp_address.push_back(std::move(c));
        children[segment_path] = sparse_mode_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::SparseModeRpAddresses::get_children()
{
    for (auto const & c : sparse_mode_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::SparseModeRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::InheritableDefaults::InheritableDefaults()
    :
    	convergency{YType::uint32, "convergency"},
	 dr_priority{YType::uint32, "dr-priority"},
	 hello_interval{YType::uint32, "hello-interval"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
{
    yang_name = "inheritable-defaults"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::InheritableDefaults::~InheritableDefaults()
{
}

bool Pim::DefaultContext::Ipv4::InheritableDefaults::has_data() const
{
    return convergency.is_set
	|| dr_priority.is_set
	|| hello_interval.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set;
}

bool Pim::DefaultContext::Ipv4::InheritableDefaults::has_operation() const
{
    return is_set(operation)
	|| is_set(convergency.operation)
	|| is_set(dr_priority.operation)
	|| is_set(hello_interval.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation);
}

std::string Pim::DefaultContext::Ipv4::InheritableDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritable-defaults";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::InheritableDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergency.is_set || is_set(convergency.operation)) leaf_name_data.push_back(convergency.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::InheritableDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::InheritableDefaults::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::InheritableDefaults::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "convergency")
    {
        convergency = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::DefaultContext::Ipv4::Rpf::Rpf()
    :
    	route_policy{YType::str, "route-policy"}
{
    yang_name = "rpf"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Rpf::~Rpf()
{
}

bool Pim::DefaultContext::Ipv4::Rpf::has_data() const
{
    return route_policy.is_set;
}

bool Pim::DefaultContext::Ipv4::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy.operation);
}

std::string Pim::DefaultContext::Ipv4::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy.is_set || is_set(route_policy.operation)) leaf_name_data.push_back(route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Rpf::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy")
    {
        route_policy = value;
    }
}

Pim::DefaultContext::Ipv4::SgExpiryTimer::SgExpiryTimer()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "sg-expiry-timer"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::SgExpiryTimer::~SgExpiryTimer()
{
}

bool Pim::DefaultContext::Ipv4::SgExpiryTimer::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv4::SgExpiryTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation);
}

std::string Pim::DefaultContext::Ipv4::SgExpiryTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sg-expiry-timer";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::SgExpiryTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::SgExpiryTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::SgExpiryTimer::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::SgExpiryTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::DefaultContext::Ipv4::RpfVectorEnable::RpfVectorEnable()
    :
    	allow_ebgp{YType::boolean, "allow-ebgp"},
	 disable_ibgp{YType::boolean, "disable-ibgp"},
	 enable{YType::empty, "enable"}
{
    yang_name = "rpf-vector-enable"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::RpfVectorEnable::~RpfVectorEnable()
{
}

bool Pim::DefaultContext::Ipv4::RpfVectorEnable::has_data() const
{
    return allow_ebgp.is_set
	|| disable_ibgp.is_set
	|| enable.is_set;
}

bool Pim::DefaultContext::Ipv4::RpfVectorEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_ebgp.operation)
	|| is_set(disable_ibgp.operation)
	|| is_set(enable.operation);
}

std::string Pim::DefaultContext::Ipv4::RpfVectorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-vector-enable";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::RpfVectorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_ebgp.is_set || is_set(allow_ebgp.operation)) leaf_name_data.push_back(allow_ebgp.get_name_leafdata());
    if (disable_ibgp.is_set || is_set(disable_ibgp.operation)) leaf_name_data.push_back(disable_ibgp.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::RpfVectorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::RpfVectorEnable::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::RpfVectorEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-ebgp")
    {
        allow_ebgp = value;
    }
    if(value_path == "disable-ibgp")
    {
        disable_ibgp = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Pim::DefaultContext::Ipv4::Nsf::Nsf()
    :
    	lifetime{YType::uint32, "lifetime"}
{
    yang_name = "nsf"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Nsf::~Nsf()
{
}

bool Pim::DefaultContext::Ipv4::Nsf::has_data() const
{
    return lifetime.is_set;
}

bool Pim::DefaultContext::Ipv4::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(lifetime.operation);
}

std::string Pim::DefaultContext::Ipv4::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Nsf::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::GroupMappingsAutoRp()
    :
    	maximum_group_ranges_auto_rp{YType::uint32, "maximum-group-ranges-auto-rp"},
	 threshold_group_ranges_auto_rp{YType::uint32, "threshold-group-ranges-auto-rp"}
{
    yang_name = "group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::~GroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::has_data() const
{
    return maximum_group_ranges_auto_rp.is_set
	|| threshold_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_group_ranges_auto_rp.operation)
	|| is_set(threshold_group_ranges_auto_rp.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_group_ranges_auto_rp.is_set || is_set(maximum_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_group_ranges_auto_rp.is_set || is_set(threshold_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-group-ranges-auto-rp")
    {
        maximum_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-group-ranges-auto-rp")
    {
        threshold_group_ranges_auto_rp = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::BsrGlobalGroupMappings()
    :
    	bsr_maximum_global_group_mappings{YType::uint32, "bsr-maximum-global-group-mappings"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::~BsrGlobalGroupMappings()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::has_data() const
{
    return bsr_maximum_global_group_mappings.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_group_mappings.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_group_mappings.is_set || is_set(bsr_maximum_global_group_mappings.operation)) leaf_name_data.push_back(bsr_maximum_global_group_mappings.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-group-mappings")
    {
        bsr_maximum_global_group_mappings = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::GlobalRoutes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::~GlobalRoutes()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-routes";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::BsrGroupMappings()
    :
    	bsr_maximum_group_ranges{YType::uint32, "bsr-maximum-group-ranges"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-group-mappings"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::~BsrGroupMappings()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::has_data() const
{
    return bsr_maximum_group_ranges.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_group_ranges.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-group-mappings";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_group_ranges.is_set || is_set(bsr_maximum_group_ranges.operation)) leaf_name_data.push_back(bsr_maximum_group_ranges.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-group-ranges")
    {
        bsr_maximum_group_ranges = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::GlobalGroupMappingsAutoRp()
    :
    	maximum_global_group_ranges_auto_rp{YType::uint32, "maximum-global-group-ranges-auto-rp"},
	 threshold_global_group_ranges_auto_rp{YType::uint32, "threshold-global-group-ranges-auto-rp"}
{
    yang_name = "global-group-mappings-auto-rp"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::~GlobalGroupMappingsAutoRp()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_data() const
{
    return maximum_global_group_ranges_auto_rp.is_set
	|| threshold_global_group_ranges_auto_rp.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_global_group_ranges_auto_rp.operation)
	|| is_set(threshold_global_group_ranges_auto_rp.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-group-mappings-auto-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_global_group_ranges_auto_rp.is_set || is_set(maximum_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(maximum_global_group_ranges_auto_rp.get_name_leafdata());
    if (threshold_global_group_ranges_auto_rp.is_set || is_set(threshold_global_group_ranges_auto_rp.operation)) leaf_name_data.push_back(threshold_global_group_ranges_auto_rp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-global-group-ranges-auto-rp")
    {
        maximum_global_group_ranges_auto_rp = value;
    }
    if(value_path == "threshold-global-group-ranges-auto-rp")
    {
        threshold_global_group_ranges_auto_rp = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::RegisterStates::RegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::RegisterStates::~RegisterStates()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::RegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::RegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register-states";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::RegisterStates::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::RegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::RouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::~RouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::BsrGlobalCandidateRpCache()
    :
    	bsr_maximum_global_candidate_rp_cache{YType::uint32, "bsr-maximum-global-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-global-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::~BsrGlobalCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_data() const
{
    return bsr_maximum_global_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_global_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-global-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_global_candidate_rp_cache.is_set || is_set(bsr_maximum_global_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_global_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-global-candidate-rp-cache")
    {
        bsr_maximum_global_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::BsrCandidateRpCache()
    :
    	bsr_maximum_candidate_rp_cache{YType::uint32, "bsr-maximum-candidate-rp-cache"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "bsr-candidate-rp-cache"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::~BsrCandidateRpCache()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::has_data() const
{
    return bsr_maximum_candidate_rp_cache.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_maximum_candidate_rp_cache.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-candidate-rp-cache";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_maximum_candidate_rp_cache.is_set || is_set(bsr_maximum_candidate_rp_cache.operation)) leaf_name_data.push_back(bsr_maximum_candidate_rp_cache.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-maximum-candidate-rp-cache")
    {
        bsr_maximum_candidate_rp_cache = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::GlobalRegisterStates()
    :
    	maximum_register_states{YType::uint32, "maximum-register-states"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-register-states"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::~GlobalRegisterStates()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::has_data() const
{
    return maximum_register_states.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_register_states.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-register-states";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_register_states.is_set || is_set(maximum_register_states.operation)) leaf_name_data.push_back(maximum_register_states.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-register-states")
    {
        maximum_register_states = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::GlobalRouteInterfaces()
    :
    	maximum_route_interfaces{YType::uint32, "maximum-route-interfaces"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "global-route-interfaces"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::~GlobalRouteInterfaces()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::has_data() const
{
    return maximum_route_interfaces.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_route_interfaces.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-route-interfaces";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_route_interfaces.is_set || is_set(maximum_route_interfaces.operation)) leaf_name_data.push_back(maximum_route_interfaces.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-route-interfaces")
    {
        maximum_route_interfaces = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::Routes::Routes()
    :
    	maximum_routes{YType::uint32, "maximum-routes"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "routes"; yang_parent_name = "maximum";
}

Pim::DefaultContext::Ipv4::Maximum::Routes::~Routes()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::Routes::has_data() const
{
    return maximum_routes.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Maximum::Routes::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_routes.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Maximum::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/maximum/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_routes.is_set || is_set(maximum_routes.operation)) leaf_name_data.push_back(maximum_routes.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::Routes::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::Routes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-routes")
    {
        maximum_routes = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Maximum::Maximum()
    :
    	gloabal_high_priority_packet_queue{YType::uint32, "gloabal-high-priority-packet-queue"},
	 gloabal_low_priority_packet_queue{YType::uint32, "gloabal-low-priority-packet-queue"}
    	,
    bsr_candidate_rp_cache(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache>())
	,bsr_global_candidate_rp_cache(nullptr) // presence node
	,bsr_global_group_mappings(nullptr) // presence node
	,bsr_group_mappings(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings>())
	,global_group_mappings_auto_rp(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp>())
	,global_register_states(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates>())
	,global_route_interfaces(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces>())
	,global_routes(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes>())
	,group_mappings_auto_rp(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp>())
	,register_states(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::RegisterStates>())
	,route_interfaces(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces>())
	,routes(std::make_unique<Pim::DefaultContext::Ipv4::Maximum::Routes>())
{
    bsr_candidate_rp_cache->parent = this;
    children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();

    bsr_group_mappings->parent = this;
    children["bsr-group-mappings"] = bsr_group_mappings.get();

    global_group_mappings_auto_rp->parent = this;
    children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();

    global_register_states->parent = this;
    children["global-register-states"] = global_register_states.get();

    global_route_interfaces->parent = this;
    children["global-route-interfaces"] = global_route_interfaces.get();

    global_routes->parent = this;
    children["global-routes"] = global_routes.get();

    group_mappings_auto_rp->parent = this;
    children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();

    register_states->parent = this;
    children["register-states"] = register_states.get();

    route_interfaces->parent = this;
    children["route-interfaces"] = route_interfaces.get();

    routes->parent = this;
    children["routes"] = routes.get();

    yang_name = "maximum"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Maximum::~Maximum()
{
}

bool Pim::DefaultContext::Ipv4::Maximum::has_data() const
{
    return gloabal_high_priority_packet_queue.is_set
	|| gloabal_low_priority_packet_queue.is_set
	|| (bsr_candidate_rp_cache !=  nullptr && bsr_candidate_rp_cache->has_data())
	|| (bsr_global_candidate_rp_cache !=  nullptr && bsr_global_candidate_rp_cache->has_data())
	|| (bsr_global_group_mappings !=  nullptr && bsr_global_group_mappings->has_data())
	|| (bsr_group_mappings !=  nullptr && bsr_group_mappings->has_data())
	|| (global_group_mappings_auto_rp !=  nullptr && global_group_mappings_auto_rp->has_data())
	|| (global_register_states !=  nullptr && global_register_states->has_data())
	|| (global_route_interfaces !=  nullptr && global_route_interfaces->has_data())
	|| (global_routes !=  nullptr && global_routes->has_data())
	|| (group_mappings_auto_rp !=  nullptr && group_mappings_auto_rp->has_data())
	|| (register_states !=  nullptr && register_states->has_data())
	|| (route_interfaces !=  nullptr && route_interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool Pim::DefaultContext::Ipv4::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(gloabal_high_priority_packet_queue.operation)
	|| is_set(gloabal_low_priority_packet_queue.operation)
	|| (bsr_candidate_rp_cache !=  nullptr && is_set(bsr_candidate_rp_cache->operation))
	|| (bsr_global_candidate_rp_cache !=  nullptr && is_set(bsr_global_candidate_rp_cache->operation))
	|| (bsr_global_group_mappings !=  nullptr && is_set(bsr_global_group_mappings->operation))
	|| (bsr_group_mappings !=  nullptr && is_set(bsr_group_mappings->operation))
	|| (global_group_mappings_auto_rp !=  nullptr && is_set(global_group_mappings_auto_rp->operation))
	|| (global_register_states !=  nullptr && is_set(global_register_states->operation))
	|| (global_route_interfaces !=  nullptr && is_set(global_route_interfaces->operation))
	|| (global_routes !=  nullptr && is_set(global_routes->operation))
	|| (group_mappings_auto_rp !=  nullptr && is_set(group_mappings_auto_rp->operation))
	|| (register_states !=  nullptr && is_set(register_states->operation))
	|| (route_interfaces !=  nullptr && is_set(route_interfaces->operation))
	|| (routes !=  nullptr && is_set(routes->operation));
}

std::string Pim::DefaultContext::Ipv4::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gloabal_high_priority_packet_queue.is_set || is_set(gloabal_high_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_high_priority_packet_queue.get_name_leafdata());
    if (gloabal_low_priority_packet_queue.is_set || is_set(gloabal_low_priority_packet_queue.operation)) leaf_name_data.push_back(gloabal_low_priority_packet_queue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bsr-candidate-rp-cache")
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        else
        {
            bsr_candidate_rp_cache = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache>();
            bsr_candidate_rp_cache->parent = this;
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
        return children.at("bsr-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-candidate-rp-cache")
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        else
        {
            bsr_global_candidate_rp_cache = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache>();
            bsr_global_candidate_rp_cache->parent = this;
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
        return children.at("bsr-global-candidate-rp-cache");
    }

    if(child_yang_name == "bsr-global-group-mappings")
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        else
        {
            bsr_global_group_mappings = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings>();
            bsr_global_group_mappings->parent = this;
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
        return children.at("bsr-global-group-mappings");
    }

    if(child_yang_name == "bsr-group-mappings")
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        else
        {
            bsr_group_mappings = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings>();
            bsr_group_mappings->parent = this;
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
        return children.at("bsr-group-mappings");
    }

    if(child_yang_name == "global-group-mappings-auto-rp")
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        else
        {
            global_group_mappings_auto_rp = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp>();
            global_group_mappings_auto_rp->parent = this;
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
        return children.at("global-group-mappings-auto-rp");
    }

    if(child_yang_name == "global-register-states")
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
        else
        {
            global_register_states = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates>();
            global_register_states->parent = this;
            children["global-register-states"] = global_register_states.get();
        }
        return children.at("global-register-states");
    }

    if(child_yang_name == "global-route-interfaces")
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        else
        {
            global_route_interfaces = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces>();
            global_route_interfaces->parent = this;
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
        return children.at("global-route-interfaces");
    }

    if(child_yang_name == "global-routes")
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
        else
        {
            global_routes = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes>();
            global_routes->parent = this;
            children["global-routes"] = global_routes.get();
        }
        return children.at("global-routes");
    }

    if(child_yang_name == "group-mappings-auto-rp")
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        else
        {
            group_mappings_auto_rp = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp>();
            group_mappings_auto_rp->parent = this;
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
        return children.at("group-mappings-auto-rp");
    }

    if(child_yang_name == "register-states")
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
        else
        {
            register_states = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::RegisterStates>();
            register_states->parent = this;
            children["register-states"] = register_states.get();
        }
        return children.at("register-states");
    }

    if(child_yang_name == "route-interfaces")
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
        else
        {
            route_interfaces = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces>();
            route_interfaces->parent = this;
            children["route-interfaces"] = route_interfaces.get();
        }
        return children.at("route-interfaces");
    }

    if(child_yang_name == "routes")
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
        else
        {
            routes = std::make_unique<Pim::DefaultContext::Ipv4::Maximum::Routes>();
            routes->parent = this;
            children["routes"] = routes.get();
        }
        return children.at("routes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Maximum::get_children()
{
    if(children.find("bsr-candidate-rp-cache") == children.end())
    {
        if(bsr_candidate_rp_cache != nullptr)
        {
            children["bsr-candidate-rp-cache"] = bsr_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-candidate-rp-cache") == children.end())
    {
        if(bsr_global_candidate_rp_cache != nullptr)
        {
            children["bsr-global-candidate-rp-cache"] = bsr_global_candidate_rp_cache.get();
        }
    }

    if(children.find("bsr-global-group-mappings") == children.end())
    {
        if(bsr_global_group_mappings != nullptr)
        {
            children["bsr-global-group-mappings"] = bsr_global_group_mappings.get();
        }
    }

    if(children.find("bsr-group-mappings") == children.end())
    {
        if(bsr_group_mappings != nullptr)
        {
            children["bsr-group-mappings"] = bsr_group_mappings.get();
        }
    }

    if(children.find("global-group-mappings-auto-rp") == children.end())
    {
        if(global_group_mappings_auto_rp != nullptr)
        {
            children["global-group-mappings-auto-rp"] = global_group_mappings_auto_rp.get();
        }
    }

    if(children.find("global-register-states") == children.end())
    {
        if(global_register_states != nullptr)
        {
            children["global-register-states"] = global_register_states.get();
        }
    }

    if(children.find("global-route-interfaces") == children.end())
    {
        if(global_route_interfaces != nullptr)
        {
            children["global-route-interfaces"] = global_route_interfaces.get();
        }
    }

    if(children.find("global-routes") == children.end())
    {
        if(global_routes != nullptr)
        {
            children["global-routes"] = global_routes.get();
        }
    }

    if(children.find("group-mappings-auto-rp") == children.end())
    {
        if(group_mappings_auto_rp != nullptr)
        {
            children["group-mappings-auto-rp"] = group_mappings_auto_rp.get();
        }
    }

    if(children.find("register-states") == children.end())
    {
        if(register_states != nullptr)
        {
            children["register-states"] = register_states.get();
        }
    }

    if(children.find("route-interfaces") == children.end())
    {
        if(route_interfaces != nullptr)
        {
            children["route-interfaces"] = route_interfaces.get();
        }
    }

    if(children.find("routes") == children.end())
    {
        if(routes != nullptr)
        {
            children["routes"] = routes.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gloabal-high-priority-packet-queue")
    {
        gloabal_high_priority_packet_queue = value;
    }
    if(value_path == "gloabal-low-priority-packet-queue")
    {
        gloabal_low_priority_packet_queue = value;
    }
}

Pim::DefaultContext::Ipv4::Ssm::Ssm()
    :
    	disable{YType::boolean, "disable"},
	 range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Ssm::~Ssm()
{
}

bool Pim::DefaultContext::Ipv4::Ssm::has_data() const
{
    return disable.is_set
	|| range.is_set;
}

bool Pim::DefaultContext::Ipv4::Ssm::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(range.operation);
}

std::string Pim::DefaultContext::Ipv4::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Ssm::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Ssm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::BidirRpAddress()
    :
    	rp_address{YType::str, "rp-address"},
	 access_list_name{YType::str, "access-list-name"},
	 auto_rp_override{YType::boolean, "auto-rp-override"}
{
    yang_name = "bidir-rp-address"; yang_parent_name = "bidir-rp-addresses";
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::~BidirRpAddress()
{
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::has_data() const
{
    return rp_address.is_set
	|| access_list_name.is_set
	|| auto_rp_override.is_set;
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(access_list_name.operation)
	|| is_set(auto_rp_override.operation);
}

std::string Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bidir-rp-addresses/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (auto_rp_override.is_set || is_set(auto_rp_override.operation)) leaf_name_data.push_back(auto_rp_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "auto-rp-override")
    {
        auto_rp_override = value;
    }
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddresses()
{
    yang_name = "bidir-rp-addresses"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::BidirRpAddresses::~BidirRpAddresses()
{
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::has_data() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::BidirRpAddresses::has_operation() const
{
    for (std::size_t index=0; index<bidir_rp_address.size(); index++)
    {
        if(bidir_rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::BidirRpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-rp-addresses";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::BidirRpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::BidirRpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir-rp-address")
    {
        for(auto const & c : bidir_rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress>();
        c->parent = this;
        bidir_rp_address.push_back(std::move(c));
        children[segment_path] = bidir_rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::BidirRpAddresses::get_children()
{
    for (auto const & c : bidir_rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::BidirRpAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::Sm()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "sm"; yang_parent_name = "candidate-rp";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::~Sm()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sm";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::Bidir()
    :
    	access_list_name{YType::str, "access-list-name"},
	 interval{YType::uint32, "interval"},
	 priority{YType::uint32, "priority"},
	 protocol_mode{YType::uint32, "protocol-mode"}
{
    yang_name = "bidir"; yang_parent_name = "candidate-rp";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::~Bidir()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::has_data() const
{
    return access_list_name.is_set
	|| interval.is_set
	|| priority.is_set
	|| protocol_mode.is_set;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(interval.operation)
	|| is_set(priority.operation)
	|| is_set(protocol_mode.operation);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    	address{YType::str, "address"}
    	,
    bidir(std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir>())
	,sm(std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm>())
{
    bidir->parent = this;
    children["bidir"] = bidir.get();

    sm->parent = this;
    children["sm"] = sm.get();

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::has_data() const
{
    return address.is_set
	|| (bidir !=  nullptr && bidir->has_data())
	|| (sm !=  nullptr && sm->has_data());
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (bidir !=  nullptr && is_set(bidir->operation))
	|| (sm !=  nullptr && is_set(sm->operation));
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bsr/candidate-rps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bidir")
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
        else
        {
            bidir = std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir>();
            bidir->parent = this;
            children["bidir"] = bidir.get();
        }
        return children.at("bidir");
    }

    if(child_yang_name == "sm")
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
        else
        {
            sm = std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm>();
            sm->parent = this;
            children["sm"] = sm.get();
        }
        return children.at("sm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::get_children()
{
    if(children.find("bidir") == children.end())
    {
        if(bidir != nullptr)
        {
            children["bidir"] = bidir.get();
        }
    }

    if(children.find("sm") == children.end())
    {
        if(sm != nullptr)
        {
            children["sm"] = sm.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bsr/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Bsr::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::CandidateBsr()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::int32, "prefix-length"},
	 priority{YType::uint32, "priority"}
{
    yang_name = "candidate-bsr"; yang_parent_name = "bsr";
}

Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::~CandidateBsr()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| priority.is_set;
}

bool Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation);
}

std::string Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/bsr/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::CandidateBsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Pim::DefaultContext::Ipv4::Bsr::Bsr()
    :
    candidate_bsr(nullptr) // presence node
	,candidate_rps(std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps>())
{
    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    yang_name = "bsr"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Bsr::~Bsr()
{
}

bool Pim::DefaultContext::Ipv4::Bsr::has_data() const
{
    return (candidate_bsr !=  nullptr && candidate_bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data());
}

bool Pim::DefaultContext::Ipv4::Bsr::has_operation() const
{
    return is_set(operation)
	|| (candidate_bsr !=  nullptr && is_set(candidate_bsr->operation))
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation));
}

std::string Pim::DefaultContext::Ipv4::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-bsr")
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
        else
        {
            candidate_bsr = std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateBsr>();
            candidate_bsr->parent = this;
            children["candidate-bsr"] = candidate_bsr.get();
        }
        return children.at("candidate-bsr");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<Pim::DefaultContext::Ipv4::Bsr::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Bsr::get_children()
{
    if(children.find("candidate-bsr") == children.end())
    {
        if(candidate_bsr != nullptr)
        {
            children["candidate-bsr"] = candidate_bsr.get();
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::RedirectBundle()
    :
    	bundle_name{YType::str, "bundle-name"},
	 interface_bandwidth{YType::uint32, "interface-bandwidth"},
	 threshold_bandwidth{YType::uint32, "threshold-bandwidth"}
{
    yang_name = "redirect-bundle"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::~RedirectBundle()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::has_data() const
{
    return bundle_name.is_set
	|| interface_bandwidth.is_set
	|| threshold_bandwidth.is_set;
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(threshold_bandwidth.operation);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-bundle";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (threshold_bandwidth.is_set || is_set(threshold_bandwidth.operation)) leaf_name_data.push_back(threshold_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "threshold-bandwidth")
    {
        threshold_bandwidth = value;
    }
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::Bfd()
    :
    	detection_multiplier{YType::uint32, "detection-multiplier"},
	 enable{YType::boolean, "enable"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable.is_set
	|| interval.is_set;
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(enable.operation)
	|| is_set(interval.operation);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
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

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::Oor()
    :
    	access_list_name{YType::str, "access-list-name"},
	 maximum{YType::uint32, "maximum"},
	 warning_threshold{YType::uint32, "warning-threshold"}
{
    yang_name = "oor"; yang_parent_name = "interface";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::~Oor()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::has_data() const
{
    return access_list_name.is_set
	|| maximum.is_set
	|| warning_threshold.is_set;
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum.operation)
	|| is_set(warning_threshold.operation);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::get_entity_path(Entity* ancestor) const
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

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 bsr_border{YType::boolean, "bsr-border"},
	 dr_priority{YType::uint32, "dr-priority"},
	 enable{YType::empty, "enable"},
	 hello_interval{YType::uint32, "hello-interval"},
	 interface_enable{YType::boolean, "interface-enable"},
	 join_prune_mtu{YType::uint32, "join-prune-mtu"},
	 jp_interval{YType::uint32, "jp-interval"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 override_interval{YType::uint32, "override-interval"},
	 propagation_delay{YType::uint32, "propagation-delay"}
    	,
    bfd(std::make_unique<Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd>())
	,oor(std::make_unique<Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor>())
	,redirect_bundle(nullptr) // presence node
{
    bfd->parent = this;
    children["bfd"] = bfd.get();

    oor->parent = this;
    children["oor"] = oor.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::DefaultContext::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| bsr_border.is_set
	|| dr_priority.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| interface_enable.is_set
	|| join_prune_mtu.is_set
	|| jp_interval.is_set
	|| neighbor_filter.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (oor !=  nullptr && oor->has_data())
	|| (redirect_bundle !=  nullptr && redirect_bundle->has_data());
}

bool Pim::DefaultContext::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bsr_border.operation)
	|| is_set(dr_priority.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(interface_enable.operation)
	|| is_set(join_prune_mtu.operation)
	|| is_set(jp_interval.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| (bfd !=  nullptr && is_set(bfd->operation))
	|| (oor !=  nullptr && is_set(oor->operation))
	|| (redirect_bundle !=  nullptr && is_set(redirect_bundle->operation));
}

std::string Pim::DefaultContext::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bsr_border.is_set || is_set(bsr_border.operation)) leaf_name_data.push_back(bsr_border.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_enable.is_set || is_set(interface_enable.operation)) leaf_name_data.push_back(interface_enable.get_name_leafdata());
    if (join_prune_mtu.is_set || is_set(join_prune_mtu.operation)) leaf_name_data.push_back(join_prune_mtu.get_name_leafdata());
    if (jp_interval.is_set || is_set(jp_interval.operation)) leaf_name_data.push_back(jp_interval.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
        else
        {
            bfd = std::make_unique<Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd.get();
        }
        return children.at("bfd");
    }

    if(child_yang_name == "oor")
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
        else
        {
            oor = std::make_unique<Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor>();
            oor->parent = this;
            children["oor"] = oor.get();
        }
        return children.at("oor");
    }

    if(child_yang_name == "redirect-bundle")
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
        else
        {
            redirect_bundle = std::make_unique<Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle>();
            redirect_bundle->parent = this;
            children["redirect-bundle"] = redirect_bundle.get();
        }
        return children.at("redirect-bundle");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Interfaces::Interface::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd.get();
        }
    }

    if(children.find("oor") == children.end())
    {
        if(oor != nullptr)
        {
            children["oor"] = oor.get();
        }
    }

    if(children.find("redirect-bundle") == children.end())
    {
        if(redirect_bundle != nullptr)
        {
            children["redirect-bundle"] = redirect_bundle.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bsr-border")
    {
        bsr_border = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "interface-enable")
    {
        interface_enable = value;
    }
    if(value_path == "join-prune-mtu")
    {
        join_prune_mtu = value;
    }
    if(value_path == "jp-interval")
    {
        jp_interval = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
}

Pim::DefaultContext::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Interfaces::~Interfaces()
{
}

bool Pim::DefaultContext::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::DefaultContext::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::DefaultContext::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Pim::DefaultContext::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::DefaultContext::Ipv4::AllowRp::AllowRp()
    :
    	group_list_name{YType::str, "group-list-name"},
	 rp_list_name{YType::str, "rp-list-name"}
{
    yang_name = "allow-rp"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::AllowRp::~AllowRp()
{
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_data() const
{
    return group_list_name.is_set
	|| rp_list_name.is_set;
}

bool Pim::DefaultContext::Ipv4::AllowRp::has_operation() const
{
    return is_set(operation)
	|| is_set(group_list_name.operation)
	|| is_set(rp_list_name.operation);
}

std::string Pim::DefaultContext::Ipv4::AllowRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow-rp";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::AllowRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_list_name.is_set || is_set(group_list_name.operation)) leaf_name_data.push_back(group_list_name.get_name_leafdata());
    if (rp_list_name.is_set || is_set(rp_list_name.operation)) leaf_name_data.push_back(rp_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::AllowRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::AllowRp::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::AllowRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-list-name")
    {
        group_list_name = value;
    }
    if(value_path == "rp-list-name")
    {
        rp_list_name = value;
    }
}

Pim::DefaultContext::Ipv4::Convergence::Convergence()
    :
    	link_down_prune_delay{YType::uint32, "link-down-prune-delay"},
	 rpf_conflict_join_delay{YType::uint32, "rpf-conflict-join-delay"}
{
    yang_name = "convergence"; yang_parent_name = "ipv4";
}

Pim::DefaultContext::Ipv4::Convergence::~Convergence()
{
}

bool Pim::DefaultContext::Ipv4::Convergence::has_data() const
{
    return link_down_prune_delay.is_set
	|| rpf_conflict_join_delay.is_set;
}

bool Pim::DefaultContext::Ipv4::Convergence::has_operation() const
{
    return is_set(operation)
	|| is_set(link_down_prune_delay.operation)
	|| is_set(rpf_conflict_join_delay.operation);
}

std::string Pim::DefaultContext::Ipv4::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::Convergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_down_prune_delay.is_set || is_set(link_down_prune_delay.operation)) leaf_name_data.push_back(link_down_prune_delay.get_name_leafdata());
    if (rpf_conflict_join_delay.is_set || is_set(rpf_conflict_join_delay.operation)) leaf_name_data.push_back(rpf_conflict_join_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::Convergence::get_children()
{
    return children;
}

void Pim::DefaultContext::Ipv4::Convergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-down-prune-delay")
    {
        link_down_prune_delay = value;
    }
    if(value_path == "rpf-conflict-join-delay")
    {
        rpf_conflict_join_delay = value;
    }
}

Pim::DefaultContext::Ipv4::Ipv4()
    :
    	accept_register{YType::str, "accept-register"},
	 assert_disable{YType::empty, "assert-disable"},
	 auto_rp_disable{YType::empty, "auto-rp-disable"},
	 log_neighbor_changes{YType::empty, "log-neighbor-changes"},
	 multipath{YType::enumeration, "multipath"},
	 neighbor_check_on_receive{YType::empty, "neighbor-check-on-receive"},
	 neighbor_check_on_send{YType::empty, "neighbor-check-on-send"},
	 neighbor_filter{YType::str, "neighbor-filter"},
	 old_register_checksum{YType::empty, "old-register-checksum"},
	 register_source{YType::str, "register-source"},
	 rp_static_deny{YType::str, "rp-static-deny"},
	 spt_threshold_infinity{YType::str, "spt-threshold-infinity"},
	 ssm_allow_override{YType::empty, "ssm-allow-override"},
	 suppress_data_registers{YType::empty, "suppress-data-registers"},
	 suppress_rpf_prunes{YType::empty, "suppress-rpf-prunes"}
    	,
    allow_rp(nullptr) // presence node
	,auto_rp(std::make_unique<Pim::DefaultContext::Ipv4::AutoRp>())
	,auto_rp_mapping_agent(std::make_unique<Pim::DefaultContext::Ipv4::AutoRpMappingAgent>())
	,bidir_rp_addresses(std::make_unique<Pim::DefaultContext::Ipv4::BidirRpAddresses>())
	,bsr(std::make_unique<Pim::DefaultContext::Ipv4::Bsr>())
	,candidate_rps(std::make_unique<Pim::DefaultContext::Ipv4::CandidateRps>())
	,cj_multicast_only_frrs(std::make_unique<Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs>())
	,convergence(std::make_unique<Pim::DefaultContext::Ipv4::Convergence>())
	,cs_multicast_only_frrs(std::make_unique<Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs>())
	,inheritable_defaults(std::make_unique<Pim::DefaultContext::Ipv4::InheritableDefaults>())
	,injects(std::make_unique<Pim::DefaultContext::Ipv4::Injects>())
	,interfaces(std::make_unique<Pim::DefaultContext::Ipv4::Interfaces>())
	,maximum(std::make_unique<Pim::DefaultContext::Ipv4::Maximum>())
	,multicast_only_frr(std::make_unique<Pim::DefaultContext::Ipv4::MulticastOnlyFrr>())
	,nsf(std::make_unique<Pim::DefaultContext::Ipv4::Nsf>())
	,paths(std::make_unique<Pim::DefaultContext::Ipv4::Paths>())
	,rpf(std::make_unique<Pim::DefaultContext::Ipv4::Rpf>())
	,rpf_redirect(std::make_unique<Pim::DefaultContext::Ipv4::RpfRedirect>())
	,rpf_vector_enable(nullptr) // presence node
	,sg_expiry_timer(std::make_unique<Pim::DefaultContext::Ipv4::SgExpiryTimer>())
	,sparse_mode_rp_addresses(std::make_unique<Pim::DefaultContext::Ipv4::SparseModeRpAddresses>())
	,ssm(std::make_unique<Pim::DefaultContext::Ipv4::Ssm>())
{
    auto_rp->parent = this;
    children["auto-rp"] = auto_rp.get();

    auto_rp_mapping_agent->parent = this;
    children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();

    bidir_rp_addresses->parent = this;
    children["bidir-rp-addresses"] = bidir_rp_addresses.get();

    bsr->parent = this;
    children["bsr"] = bsr.get();

    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    cj_multicast_only_frrs->parent = this;
    children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();

    convergence->parent = this;
    children["convergence"] = convergence.get();

    cs_multicast_only_frrs->parent = this;
    children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();

    inheritable_defaults->parent = this;
    children["inheritable-defaults"] = inheritable_defaults.get();

    injects->parent = this;
    children["injects"] = injects.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    maximum->parent = this;
    children["maximum"] = maximum.get();

    multicast_only_frr->parent = this;
    children["multicast-only-frr"] = multicast_only_frr.get();

    nsf->parent = this;
    children["nsf"] = nsf.get();

    paths->parent = this;
    children["paths"] = paths.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    rpf_redirect->parent = this;
    children["rpf-redirect"] = rpf_redirect.get();

    sg_expiry_timer->parent = this;
    children["sg-expiry-timer"] = sg_expiry_timer.get();

    sparse_mode_rp_addresses->parent = this;
    children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();

    ssm->parent = this;
    children["ssm"] = ssm.get();

    yang_name = "ipv4"; yang_parent_name = "default-context";
}

Pim::DefaultContext::Ipv4::~Ipv4()
{
}

bool Pim::DefaultContext::Ipv4::has_data() const
{
    return accept_register.is_set
	|| assert_disable.is_set
	|| auto_rp_disable.is_set
	|| log_neighbor_changes.is_set
	|| multipath.is_set
	|| neighbor_check_on_receive.is_set
	|| neighbor_check_on_send.is_set
	|| neighbor_filter.is_set
	|| old_register_checksum.is_set
	|| register_source.is_set
	|| rp_static_deny.is_set
	|| spt_threshold_infinity.is_set
	|| ssm_allow_override.is_set
	|| suppress_data_registers.is_set
	|| suppress_rpf_prunes.is_set
	|| (allow_rp !=  nullptr && allow_rp->has_data())
	|| (auto_rp !=  nullptr && auto_rp->has_data())
	|| (auto_rp_mapping_agent !=  nullptr && auto_rp_mapping_agent->has_data())
	|| (bidir_rp_addresses !=  nullptr && bidir_rp_addresses->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (cj_multicast_only_frrs !=  nullptr && cj_multicast_only_frrs->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (cs_multicast_only_frrs !=  nullptr && cs_multicast_only_frrs->has_data())
	|| (inheritable_defaults !=  nullptr && inheritable_defaults->has_data())
	|| (injects !=  nullptr && injects->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (multicast_only_frr !=  nullptr && multicast_only_frr->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (paths !=  nullptr && paths->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_vector_enable !=  nullptr && rpf_vector_enable->has_data())
	|| (sg_expiry_timer !=  nullptr && sg_expiry_timer->has_data())
	|| (sparse_mode_rp_addresses !=  nullptr && sparse_mode_rp_addresses->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Pim::DefaultContext::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_register.operation)
	|| is_set(assert_disable.operation)
	|| is_set(auto_rp_disable.operation)
	|| is_set(log_neighbor_changes.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_check_on_receive.operation)
	|| is_set(neighbor_check_on_send.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(old_register_checksum.operation)
	|| is_set(register_source.operation)
	|| is_set(rp_static_deny.operation)
	|| is_set(spt_threshold_infinity.operation)
	|| is_set(ssm_allow_override.operation)
	|| is_set(suppress_data_registers.operation)
	|| is_set(suppress_rpf_prunes.operation)
	|| (allow_rp !=  nullptr && is_set(allow_rp->operation))
	|| (auto_rp !=  nullptr && is_set(auto_rp->operation))
	|| (auto_rp_mapping_agent !=  nullptr && is_set(auto_rp_mapping_agent->operation))
	|| (bidir_rp_addresses !=  nullptr && is_set(bidir_rp_addresses->operation))
	|| (bsr !=  nullptr && is_set(bsr->operation))
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation))
	|| (cj_multicast_only_frrs !=  nullptr && is_set(cj_multicast_only_frrs->operation))
	|| (convergence !=  nullptr && is_set(convergence->operation))
	|| (cs_multicast_only_frrs !=  nullptr && is_set(cs_multicast_only_frrs->operation))
	|| (inheritable_defaults !=  nullptr && is_set(inheritable_defaults->operation))
	|| (injects !=  nullptr && is_set(injects->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (maximum !=  nullptr && is_set(maximum->operation))
	|| (multicast_only_frr !=  nullptr && is_set(multicast_only_frr->operation))
	|| (nsf !=  nullptr && is_set(nsf->operation))
	|| (paths !=  nullptr && is_set(paths->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation))
	|| (rpf_redirect !=  nullptr && is_set(rpf_redirect->operation))
	|| (rpf_vector_enable !=  nullptr && is_set(rpf_vector_enable->operation))
	|| (sg_expiry_timer !=  nullptr && is_set(sg_expiry_timer->operation))
	|| (sparse_mode_rp_addresses !=  nullptr && is_set(sparse_mode_rp_addresses->operation))
	|| (ssm !=  nullptr && is_set(ssm->operation));
}

std::string Pim::DefaultContext::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/default-context/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_register.is_set || is_set(accept_register.operation)) leaf_name_data.push_back(accept_register.get_name_leafdata());
    if (assert_disable.is_set || is_set(assert_disable.operation)) leaf_name_data.push_back(assert_disable.get_name_leafdata());
    if (auto_rp_disable.is_set || is_set(auto_rp_disable.operation)) leaf_name_data.push_back(auto_rp_disable.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.operation)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_check_on_receive.is_set || is_set(neighbor_check_on_receive.operation)) leaf_name_data.push_back(neighbor_check_on_receive.get_name_leafdata());
    if (neighbor_check_on_send.is_set || is_set(neighbor_check_on_send.operation)) leaf_name_data.push_back(neighbor_check_on_send.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (old_register_checksum.is_set || is_set(old_register_checksum.operation)) leaf_name_data.push_back(old_register_checksum.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.operation)) leaf_name_data.push_back(register_source.get_name_leafdata());
    if (rp_static_deny.is_set || is_set(rp_static_deny.operation)) leaf_name_data.push_back(rp_static_deny.get_name_leafdata());
    if (spt_threshold_infinity.is_set || is_set(spt_threshold_infinity.operation)) leaf_name_data.push_back(spt_threshold_infinity.get_name_leafdata());
    if (ssm_allow_override.is_set || is_set(ssm_allow_override.operation)) leaf_name_data.push_back(ssm_allow_override.get_name_leafdata());
    if (suppress_data_registers.is_set || is_set(suppress_data_registers.operation)) leaf_name_data.push_back(suppress_data_registers.get_name_leafdata());
    if (suppress_rpf_prunes.is_set || is_set(suppress_rpf_prunes.operation)) leaf_name_data.push_back(suppress_rpf_prunes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allow-rp")
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
        else
        {
            allow_rp = std::make_unique<Pim::DefaultContext::Ipv4::AllowRp>();
            allow_rp->parent = this;
            children["allow-rp"] = allow_rp.get();
        }
        return children.at("allow-rp");
    }

    if(child_yang_name == "auto-rp")
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp.get();
        }
        else
        {
            auto_rp = std::make_unique<Pim::DefaultContext::Ipv4::AutoRp>();
            auto_rp->parent = this;
            children["auto-rp"] = auto_rp.get();
        }
        return children.at("auto-rp");
    }

    if(child_yang_name == "auto-rp-mapping-agent")
    {
        if(auto_rp_mapping_agent != nullptr)
        {
            children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();
        }
        else
        {
            auto_rp_mapping_agent = std::make_unique<Pim::DefaultContext::Ipv4::AutoRpMappingAgent>();
            auto_rp_mapping_agent->parent = this;
            children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();
        }
        return children.at("auto-rp-mapping-agent");
    }

    if(child_yang_name == "bidir-rp-addresses")
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        else
        {
            bidir_rp_addresses = std::make_unique<Pim::DefaultContext::Ipv4::BidirRpAddresses>();
            bidir_rp_addresses->parent = this;
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
        return children.at("bidir-rp-addresses");
    }

    if(child_yang_name == "bsr")
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
        else
        {
            bsr = std::make_unique<Pim::DefaultContext::Ipv4::Bsr>();
            bsr->parent = this;
            children["bsr"] = bsr.get();
        }
        return children.at("bsr");
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<Pim::DefaultContext::Ipv4::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    if(child_yang_name == "cj-multicast-only-frrs")
    {
        if(cj_multicast_only_frrs != nullptr)
        {
            children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();
        }
        else
        {
            cj_multicast_only_frrs = std::make_unique<Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs>();
            cj_multicast_only_frrs->parent = this;
            children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();
        }
        return children.at("cj-multicast-only-frrs");
    }

    if(child_yang_name == "convergence")
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
        else
        {
            convergence = std::make_unique<Pim::DefaultContext::Ipv4::Convergence>();
            convergence->parent = this;
            children["convergence"] = convergence.get();
        }
        return children.at("convergence");
    }

    if(child_yang_name == "cs-multicast-only-frrs")
    {
        if(cs_multicast_only_frrs != nullptr)
        {
            children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();
        }
        else
        {
            cs_multicast_only_frrs = std::make_unique<Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs>();
            cs_multicast_only_frrs->parent = this;
            children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();
        }
        return children.at("cs-multicast-only-frrs");
    }

    if(child_yang_name == "inheritable-defaults")
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        else
        {
            inheritable_defaults = std::make_unique<Pim::DefaultContext::Ipv4::InheritableDefaults>();
            inheritable_defaults->parent = this;
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
        return children.at("inheritable-defaults");
    }

    if(child_yang_name == "injects")
    {
        if(injects != nullptr)
        {
            children["injects"] = injects.get();
        }
        else
        {
            injects = std::make_unique<Pim::DefaultContext::Ipv4::Injects>();
            injects->parent = this;
            children["injects"] = injects.get();
        }
        return children.at("injects");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Pim::DefaultContext::Ipv4::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
        else
        {
            maximum = std::make_unique<Pim::DefaultContext::Ipv4::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum.get();
        }
        return children.at("maximum");
    }

    if(child_yang_name == "multicast-only-frr")
    {
        if(multicast_only_frr != nullptr)
        {
            children["multicast-only-frr"] = multicast_only_frr.get();
        }
        else
        {
            multicast_only_frr = std::make_unique<Pim::DefaultContext::Ipv4::MulticastOnlyFrr>();
            multicast_only_frr->parent = this;
            children["multicast-only-frr"] = multicast_only_frr.get();
        }
        return children.at("multicast-only-frr");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
        else
        {
            nsf = std::make_unique<Pim::DefaultContext::Ipv4::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf.get();
        }
        return children.at("nsf");
    }

    if(child_yang_name == "paths")
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
        else
        {
            paths = std::make_unique<Pim::DefaultContext::Ipv4::Paths>();
            paths->parent = this;
            children["paths"] = paths.get();
        }
        return children.at("paths");
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Pim::DefaultContext::Ipv4::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect.get();
        }
        else
        {
            rpf_redirect = std::make_unique<Pim::DefaultContext::Ipv4::RpfRedirect>();
            rpf_redirect->parent = this;
            children["rpf-redirect"] = rpf_redirect.get();
        }
        return children.at("rpf-redirect");
    }

    if(child_yang_name == "rpf-vector-enable")
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        else
        {
            rpf_vector_enable = std::make_unique<Pim::DefaultContext::Ipv4::RpfVectorEnable>();
            rpf_vector_enable->parent = this;
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
        return children.at("rpf-vector-enable");
    }

    if(child_yang_name == "sg-expiry-timer")
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        else
        {
            sg_expiry_timer = std::make_unique<Pim::DefaultContext::Ipv4::SgExpiryTimer>();
            sg_expiry_timer->parent = this;
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
        return children.at("sg-expiry-timer");
    }

    if(child_yang_name == "sparse-mode-rp-addresses")
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        else
        {
            sparse_mode_rp_addresses = std::make_unique<Pim::DefaultContext::Ipv4::SparseModeRpAddresses>();
            sparse_mode_rp_addresses->parent = this;
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
        return children.at("sparse-mode-rp-addresses");
    }

    if(child_yang_name == "ssm")
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
        else
        {
            ssm = std::make_unique<Pim::DefaultContext::Ipv4::Ssm>();
            ssm->parent = this;
            children["ssm"] = ssm.get();
        }
        return children.at("ssm");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::Ipv4::get_children()
{
    if(children.find("allow-rp") == children.end())
    {
        if(allow_rp != nullptr)
        {
            children["allow-rp"] = allow_rp.get();
        }
    }

    if(children.find("auto-rp") == children.end())
    {
        if(auto_rp != nullptr)
        {
            children["auto-rp"] = auto_rp.get();
        }
    }

    if(children.find("auto-rp-mapping-agent") == children.end())
    {
        if(auto_rp_mapping_agent != nullptr)
        {
            children["auto-rp-mapping-agent"] = auto_rp_mapping_agent.get();
        }
    }

    if(children.find("bidir-rp-addresses") == children.end())
    {
        if(bidir_rp_addresses != nullptr)
        {
            children["bidir-rp-addresses"] = bidir_rp_addresses.get();
        }
    }

    if(children.find("bsr") == children.end())
    {
        if(bsr != nullptr)
        {
            children["bsr"] = bsr.get();
        }
    }

    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    if(children.find("cj-multicast-only-frrs") == children.end())
    {
        if(cj_multicast_only_frrs != nullptr)
        {
            children["cj-multicast-only-frrs"] = cj_multicast_only_frrs.get();
        }
    }

    if(children.find("convergence") == children.end())
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence.get();
        }
    }

    if(children.find("cs-multicast-only-frrs") == children.end())
    {
        if(cs_multicast_only_frrs != nullptr)
        {
            children["cs-multicast-only-frrs"] = cs_multicast_only_frrs.get();
        }
    }

    if(children.find("inheritable-defaults") == children.end())
    {
        if(inheritable_defaults != nullptr)
        {
            children["inheritable-defaults"] = inheritable_defaults.get();
        }
    }

    if(children.find("injects") == children.end())
    {
        if(injects != nullptr)
        {
            children["injects"] = injects.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum.get();
        }
    }

    if(children.find("multicast-only-frr") == children.end())
    {
        if(multicast_only_frr != nullptr)
        {
            children["multicast-only-frr"] = multicast_only_frr.get();
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf.get();
        }
    }

    if(children.find("paths") == children.end())
    {
        if(paths != nullptr)
        {
            children["paths"] = paths.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    if(children.find("rpf-redirect") == children.end())
    {
        if(rpf_redirect != nullptr)
        {
            children["rpf-redirect"] = rpf_redirect.get();
        }
    }

    if(children.find("rpf-vector-enable") == children.end())
    {
        if(rpf_vector_enable != nullptr)
        {
            children["rpf-vector-enable"] = rpf_vector_enable.get();
        }
    }

    if(children.find("sg-expiry-timer") == children.end())
    {
        if(sg_expiry_timer != nullptr)
        {
            children["sg-expiry-timer"] = sg_expiry_timer.get();
        }
    }

    if(children.find("sparse-mode-rp-addresses") == children.end())
    {
        if(sparse_mode_rp_addresses != nullptr)
        {
            children["sparse-mode-rp-addresses"] = sparse_mode_rp_addresses.get();
        }
    }

    if(children.find("ssm") == children.end())
    {
        if(ssm != nullptr)
        {
            children["ssm"] = ssm.get();
        }
    }

    return children;
}

void Pim::DefaultContext::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-register")
    {
        accept_register = value;
    }
    if(value_path == "assert-disable")
    {
        assert_disable = value;
    }
    if(value_path == "auto-rp-disable")
    {
        auto_rp_disable = value;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-check-on-receive")
    {
        neighbor_check_on_receive = value;
    }
    if(value_path == "neighbor-check-on-send")
    {
        neighbor_check_on_send = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "old-register-checksum")
    {
        old_register_checksum = value;
    }
    if(value_path == "register-source")
    {
        register_source = value;
    }
    if(value_path == "rp-static-deny")
    {
        rp_static_deny = value;
    }
    if(value_path == "spt-threshold-infinity")
    {
        spt_threshold_infinity = value;
    }
    if(value_path == "ssm-allow-override")
    {
        ssm_allow_override = value;
    }
    if(value_path == "suppress-data-registers")
    {
        suppress_data_registers = value;
    }
    if(value_path == "suppress-rpf-prunes")
    {
        suppress_rpf_prunes = value;
    }
}

Pim::DefaultContext::DefaultContext()
    :
    ipv4(std::make_unique<Pim::DefaultContext::Ipv4>())
	,ipv6(std::make_unique<Pim::DefaultContext::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    yang_name = "default-context"; yang_parent_name = "pim";
}

Pim::DefaultContext::~DefaultContext()
{
}

bool Pim::DefaultContext::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Pim::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation));
}

std::string Pim::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

EntityPath Pim::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Pim::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<Pim::DefaultContext::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4.get();
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
        else
        {
            ipv6 = std::make_unique<Pim::DefaultContext::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::DefaultContext::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6.get();
        }
    }

    return children;
}

void Pim::DefaultContext::set_value(const std::string & value_path, std::string value)
{
}

Pim::Pim()
    :
    default_context(nullptr) // presence node
	,vrfs(std::make_unique<Pim::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-cfg";
}

Pim::~Pim()
{
}

bool Pim::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Pim::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && is_set(default_context->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-cfg:pim";

    return path_buffer.str();

}

EntityPath Pim::get_entity_path(Entity* ancestor) const
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

Entity* Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-context")
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context.get();
        }
        else
        {
            default_context = std::make_unique<Pim::DefaultContext>();
            default_context->parent = this;
            children["default-context"] = default_context.get();
        }
        return children.at("default-context");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Pim::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Pim::get_children()
{
    if(children.find("default-context") == children.end())
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Pim::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Pim::clone_ptr()
{
    return std::make_unique<Pim>();
}

const Enum::Value PimMultipathEnum::enable {0, "enable"};
const Enum::Value PimMultipathEnum::interface_hash {1, "interface-hash"};
const Enum::Value PimMultipathEnum::source_hash {2, "source-hash"};
const Enum::Value PimMultipathEnum::source_next_hop_hash {3, "source-next-hop-hash"};
const Enum::Value PimMultipathEnum::source_group_hash {4, "source-group-hash"};


}
}

