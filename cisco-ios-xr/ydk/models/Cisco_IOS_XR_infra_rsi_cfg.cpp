
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_rsi_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rsi_cfg {

Vrfs::Vrf::VpnId::VpnId()
    :
    	vpn_index{YType::uint32, "vpn-index"},
	 vpn_oui{YType::uint32, "vpn-oui"}
{
    yang_name = "vpn-id"; yang_parent_name = "vrf";
}

Vrfs::Vrf::VpnId::~VpnId()
{
}

bool Vrfs::Vrf::VpnId::has_data() const
{
    return vpn_index.is_set
	|| vpn_oui.is_set;
}

bool Vrfs::Vrf::VpnId::has_operation() const
{
    return is_set(operation)
	|| is_set(vpn_index.operation)
	|| is_set(vpn_oui.operation);
}

std::string Vrfs::Vrf::VpnId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::VpnId::get_entity_path(Entity* ancestor) const
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

    if (vpn_index.is_set || is_set(vpn_index.operation)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (vpn_oui.is_set || is_set(vpn_oui.operation)) leaf_name_data.push_back(vpn_oui.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::VpnId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::VpnId::get_children()
{
    return children;
}

void Vrfs::Vrf::VpnId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpn-index")
    {
        vpn_index = value;
    }
    if(value_path == "vpn-oui")
    {
        vpn_oui = value;
    }
}

Vrfs::Vrf::Afs::Af::MaximumPrefix::MaximumPrefix()
    :
    	mid_threshold{YType::uint32, "mid-threshold"},
	 prefix_limit{YType::uint32, "prefix-limit"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "af";
}

Vrfs::Vrf::Afs::Af::MaximumPrefix::~MaximumPrefix()
{
}

bool Vrfs::Vrf::Afs::Af::MaximumPrefix::has_data() const
{
    return mid_threshold.is_set
	|| prefix_limit.is_set;
}

bool Vrfs::Vrf::Afs::Af::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(mid_threshold.operation)
	|| is_set(prefix_limit.operation);
}

std::string Vrfs::Vrf::Afs::Af::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:maximum-prefix";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::MaximumPrefix::get_entity_path(Entity* ancestor) const
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

    if (mid_threshold.is_set || is_set(mid_threshold.operation)) leaf_name_data.push_back(mid_threshold.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::MaximumPrefix::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mid-threshold")
    {
        mid_threshold = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::AsOrFourByteAs()
    :
    	as{YType::uint32, "as"},
	 as_index{YType::uint32, "as-index"},
	 as_xx{YType::uint32, "as-xx"},
	 stitching_rt{YType::uint32, "stitching-rt"}
{
    yang_name = "as-or-four-byte-as"; yang_parent_name = "route-target";
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::~AsOrFourByteAs()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_data() const
{
    return as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(stitching_rt.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-or-four-byte-as" <<"[as='" <<as.get() <<"']" <<"[as-index='" <<as_index.get() <<"']" <<"[as-xx='" <<as_xx.get() <<"']" <<"[stitching-rt='" <<stitching_rt.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_entity_path(Entity* ancestor) const
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

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.operation)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    	address{YType::str, "address"},
	 address_index{YType::uint32, "address-index"},
	 stitching_rt{YType::uint32, "stitching-rt"}
{
    yang_name = "ipv4-address"; yang_parent_name = "route-target";
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(stitching_rt.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address.get() <<"']" <<"[address-index='" <<address_index.get() <<"']" <<"[stitching-rt='" <<stitching_rt.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_entity_path(Entity* ancestor) const
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
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.operation)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::RouteTarget()
    :
    	type{YType::enumeration, "type"}
{
    yang_name = "route-target"; yang_parent_name = "route-targets";
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(type.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-or-four-byte-as")
    {
        for(auto const & c : as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs>();
        c->parent = this;
        as_or_four_byte_as.push_back(std::move(c));
        children[segment_path] = as_or_four_byte_as.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(std::move(c));
        children[segment_path] = ipv4_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::get_children()
{
    for (auto const & c : as_or_four_byte_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTargets()
{
    yang_name = "route-targets"; yang_parent_name = "import-route-targets";
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::~RouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::ImportRouteTargets()
    :
    route_targets(std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets>())
{
    route_targets->parent = this;
    children["route-targets"] = route_targets.get();

    yang_name = "import-route-targets"; yang_parent_name = "bgp";
}

Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::~ImportRouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::has_data() const
{
    return (route_targets !=  nullptr && route_targets->has_data());
}

bool Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::has_operation() const
{
    return is_set(operation)
	|| (route_targets !=  nullptr && is_set(route_targets->operation));
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-targets";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets.get();
        }
        else
        {
            route_targets = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::RouteTargets>();
            route_targets->parent = this;
            children["route-targets"] = route_targets.get();
        }
        return children.at("route-targets");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::get_children()
{
    if(children.find("route-targets") == children.end())
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::AsOrFourByteAs()
    :
    	as{YType::uint32, "as"},
	 as_index{YType::uint32, "as-index"},
	 as_xx{YType::uint32, "as-xx"},
	 stitching_rt{YType::uint32, "stitching-rt"}
{
    yang_name = "as-or-four-byte-as"; yang_parent_name = "route-target";
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::~AsOrFourByteAs()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_data() const
{
    return as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(stitching_rt.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-or-four-byte-as" <<"[as='" <<as.get() <<"']" <<"[as-index='" <<as_index.get() <<"']" <<"[as-xx='" <<as_xx.get() <<"']" <<"[stitching-rt='" <<stitching_rt.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_entity_path(Entity* ancestor) const
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

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.operation)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    	address{YType::str, "address"},
	 address_index{YType::uint32, "address-index"},
	 stitching_rt{YType::uint32, "stitching-rt"}
{
    yang_name = "ipv4-address"; yang_parent_name = "route-target";
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(stitching_rt.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[address='" <<address.get() <<"']" <<"[address-index='" <<address_index.get() <<"']" <<"[stitching-rt='" <<stitching_rt.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_entity_path(Entity* ancestor) const
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
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (stitching_rt.is_set || is_set(stitching_rt.operation)) leaf_name_data.push_back(stitching_rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "stitching-rt")
    {
        stitching_rt = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::RouteTarget()
    :
    	type{YType::enumeration, "type"}
{
    yang_name = "route-target"; yang_parent_name = "route-targets";
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return type.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<as_or_four_byte_as.size(); index++)
    {
        if(as_or_four_byte_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(type.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_entity_path(Entity* ancestor) const
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

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-or-four-byte-as")
    {
        for(auto const & c : as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::AsOrFourByteAs>();
        c->parent = this;
        as_or_four_byte_as.push_back(std::move(c));
        children[segment_path] = as_or_four_byte_as.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(std::move(c));
        children[segment_path] = ipv4_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::get_children()
{
    for (auto const & c : as_or_four_byte_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTargets()
{
    yang_name = "route-targets"; yang_parent_name = "export-route-targets";
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::~RouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::ExportRouteTargets()
    :
    route_targets(std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets>())
{
    route_targets->parent = this;
    children["route-targets"] = route_targets.get();

    yang_name = "export-route-targets"; yang_parent_name = "bgp";
}

Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::~ExportRouteTargets()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::has_data() const
{
    return (route_targets !=  nullptr && route_targets->has_data());
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::has_operation() const
{
    return is_set(operation)
	|| (route_targets !=  nullptr && is_set(route_targets->operation));
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-targets";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets.get();
        }
        else
        {
            route_targets = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::RouteTargets>();
            route_targets->parent = this;
            children["route-targets"] = route_targets.get();
        }
        return children.at("route-targets");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::get_children()
{
    if(children.find("route-targets") == children.end())
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::VrfToGlobalExportRoutePolicy()
    :
    	allow_imported_vpn{YType::boolean, "allow-imported-vpn"},
	 route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "vrf-to-global-export-route-policy"; yang_parent_name = "bgp";
}

Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::~VrfToGlobalExportRoutePolicy()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::has_data() const
{
    return allow_imported_vpn.is_set
	|| route_policy_name.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_imported_vpn.operation)
	|| is_set(route_policy_name.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-to-global-export-route-policy";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_entity_path(Entity* ancestor) const
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

    if (allow_imported_vpn.is_set || is_set(allow_imported_vpn.operation)) leaf_name_data.push_back(allow_imported_vpn.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-imported-vpn")
    {
        allow_imported_vpn = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::ExportVrfOptions()
    :
    	allow_imported_vpn{YType::boolean, "allow-imported-vpn"},
	 import_stitching_rt{YType::boolean, "import-stitching-rt"}
{
    yang_name = "export-vrf-options"; yang_parent_name = "bgp";
}

Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::~ExportVrfOptions()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::has_data() const
{
    return allow_imported_vpn.is_set
	|| import_stitching_rt.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_imported_vpn.operation)
	|| is_set(import_stitching_rt.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-vrf-options";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_entity_path(Entity* ancestor) const
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

    if (allow_imported_vpn.is_set || is_set(allow_imported_vpn.operation)) leaf_name_data.push_back(allow_imported_vpn.get_name_leafdata());
    if (import_stitching_rt.is_set || is_set(import_stitching_rt.operation)) leaf_name_data.push_back(import_stitching_rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-imported-vpn")
    {
        allow_imported_vpn = value;
    }
    if(value_path == "import-stitching-rt")
    {
        import_stitching_rt = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::GlobalToVrfImportRoutePolicy()
    :
    	advertise_as_vpn{YType::boolean, "advertise-as-vpn"},
	 route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "global-to-vrf-import-route-policy"; yang_parent_name = "bgp";
}

Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::~GlobalToVrfImportRoutePolicy()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::has_data() const
{
    return advertise_as_vpn.is_set
	|| route_policy_name.is_set;
}

bool Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_as_vpn.operation)
	|| is_set(route_policy_name.operation);
}

std::string Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-to-vrf-import-route-policy";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_entity_path(Entity* ancestor) const
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

    if (advertise_as_vpn.is_set || is_set(advertise_as_vpn.operation)) leaf_name_data.push_back(advertise_as_vpn.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::get_children()
{
    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-as-vpn")
    {
        advertise_as_vpn = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Vrfs::Vrf::Afs::Af::Bgp::Bgp()
    :
    	export_route_policy{YType::str, "export-route-policy"},
	 import_route_policy{YType::str, "import-route-policy"}
    	,
    export_route_targets(std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets>())
	,export_vrf_options(std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions>())
	,global_to_vrf_import_route_policy(nullptr) // presence node
	,import_route_targets(std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets>())
	,vrf_to_global_export_route_policy(nullptr) // presence node
{
    export_route_targets->parent = this;
    children["export-route-targets"] = export_route_targets.get();

    export_vrf_options->parent = this;
    children["export-vrf-options"] = export_vrf_options.get();

    import_route_targets->parent = this;
    children["import-route-targets"] = import_route_targets.get();

    yang_name = "bgp"; yang_parent_name = "af";
}

Vrfs::Vrf::Afs::Af::Bgp::~Bgp()
{
}

bool Vrfs::Vrf::Afs::Af::Bgp::has_data() const
{
    return export_route_policy.is_set
	|| import_route_policy.is_set
	|| (export_route_targets !=  nullptr && export_route_targets->has_data())
	|| (export_vrf_options !=  nullptr && export_vrf_options->has_data())
	|| (global_to_vrf_import_route_policy !=  nullptr && global_to_vrf_import_route_policy->has_data())
	|| (import_route_targets !=  nullptr && import_route_targets->has_data())
	|| (vrf_to_global_export_route_policy !=  nullptr && vrf_to_global_export_route_policy->has_data());
}

bool Vrfs::Vrf::Afs::Af::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(export_route_policy.operation)
	|| is_set(import_route_policy.operation)
	|| (export_route_targets !=  nullptr && is_set(export_route_targets->operation))
	|| (export_vrf_options !=  nullptr && is_set(export_vrf_options->operation))
	|| (global_to_vrf_import_route_policy !=  nullptr && is_set(global_to_vrf_import_route_policy->operation))
	|| (import_route_targets !=  nullptr && is_set(import_route_targets->operation))
	|| (vrf_to_global_export_route_policy !=  nullptr && is_set(vrf_to_global_export_route_policy->operation));
}

std::string Vrfs::Vrf::Afs::Af::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-cfg:bgp";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::Bgp::get_entity_path(Entity* ancestor) const
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

    if (export_route_policy.is_set || is_set(export_route_policy.operation)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (import_route_policy.is_set || is_set(import_route_policy.operation)) leaf_name_data.push_back(import_route_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "export-route-targets")
    {
        if(export_route_targets != nullptr)
        {
            children["export-route-targets"] = export_route_targets.get();
        }
        else
        {
            export_route_targets = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportRouteTargets>();
            export_route_targets->parent = this;
            children["export-route-targets"] = export_route_targets.get();
        }
        return children.at("export-route-targets");
    }

    if(child_yang_name == "export-vrf-options")
    {
        if(export_vrf_options != nullptr)
        {
            children["export-vrf-options"] = export_vrf_options.get();
        }
        else
        {
            export_vrf_options = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ExportVrfOptions>();
            export_vrf_options->parent = this;
            children["export-vrf-options"] = export_vrf_options.get();
        }
        return children.at("export-vrf-options");
    }

    if(child_yang_name == "global-to-vrf-import-route-policy")
    {
        if(global_to_vrf_import_route_policy != nullptr)
        {
            children["global-to-vrf-import-route-policy"] = global_to_vrf_import_route_policy.get();
        }
        else
        {
            global_to_vrf_import_route_policy = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::GlobalToVrfImportRoutePolicy>();
            global_to_vrf_import_route_policy->parent = this;
            children["global-to-vrf-import-route-policy"] = global_to_vrf_import_route_policy.get();
        }
        return children.at("global-to-vrf-import-route-policy");
    }

    if(child_yang_name == "import-route-targets")
    {
        if(import_route_targets != nullptr)
        {
            children["import-route-targets"] = import_route_targets.get();
        }
        else
        {
            import_route_targets = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::ImportRouteTargets>();
            import_route_targets->parent = this;
            children["import-route-targets"] = import_route_targets.get();
        }
        return children.at("import-route-targets");
    }

    if(child_yang_name == "vrf-to-global-export-route-policy")
    {
        if(vrf_to_global_export_route_policy != nullptr)
        {
            children["vrf-to-global-export-route-policy"] = vrf_to_global_export_route_policy.get();
        }
        else
        {
            vrf_to_global_export_route_policy = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp::VrfToGlobalExportRoutePolicy>();
            vrf_to_global_export_route_policy->parent = this;
            children["vrf-to-global-export-route-policy"] = vrf_to_global_export_route_policy.get();
        }
        return children.at("vrf-to-global-export-route-policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::Bgp::get_children()
{
    if(children.find("export-route-targets") == children.end())
    {
        if(export_route_targets != nullptr)
        {
            children["export-route-targets"] = export_route_targets.get();
        }
    }

    if(children.find("export-vrf-options") == children.end())
    {
        if(export_vrf_options != nullptr)
        {
            children["export-vrf-options"] = export_vrf_options.get();
        }
    }

    if(children.find("global-to-vrf-import-route-policy") == children.end())
    {
        if(global_to_vrf_import_route_policy != nullptr)
        {
            children["global-to-vrf-import-route-policy"] = global_to_vrf_import_route_policy.get();
        }
    }

    if(children.find("import-route-targets") == children.end())
    {
        if(import_route_targets != nullptr)
        {
            children["import-route-targets"] = import_route_targets.get();
        }
    }

    if(children.find("vrf-to-global-export-route-policy") == children.end())
    {
        if(vrf_to_global_export_route_policy != nullptr)
        {
            children["vrf-to-global-export-route-policy"] = vrf_to_global_export_route_policy.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy = value;
    }
}

Vrfs::Vrf::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 saf_name{YType::enumeration, "saf-name"},
	 topology_name{YType::str, "topology-name"},
	 create{YType::empty, "create"}
    	,
    bgp(std::make_unique<Vrfs::Vrf::Afs::Af::Bgp>())
	,maximum_prefix(nullptr) // presence node
{
    bgp->parent = this;
    children["bgp"] = bgp.get();

    yang_name = "af"; yang_parent_name = "afs";
}

Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| create.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data());
}

bool Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(create.operation)
	|| (bgp !=  nullptr && is_set(bgp->operation))
	|| (maximum_prefix !=  nullptr && is_set(maximum_prefix->operation));
}

std::string Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']" <<"[saf-name='" <<saf_name.get() <<"']" <<"[topology-name='" <<topology_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp.get();
        }
        else
        {
            bgp = std::make_unique<Vrfs::Vrf::Afs::Af::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp.get();
        }
        return children.at("bgp");
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix != nullptr)
        {
            children["maximum-prefix"] = maximum_prefix.get();
        }
        else
        {
            maximum_prefix = std::make_unique<Vrfs::Vrf::Afs::Af::MaximumPrefix>();
            maximum_prefix->parent = this;
            children["maximum-prefix"] = maximum_prefix.get();
        }
        return children.at("maximum-prefix");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::Af::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp.get();
        }
    }

    if(children.find("maximum-prefix") == children.end())
    {
        if(maximum_prefix != nullptr)
        {
            children["maximum-prefix"] = maximum_prefix.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
}

Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

Vrfs::Vrf::Afs::~Afs()
{
}

bool Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

Vrfs::Vrf::MulticastHost::Ipv4::Ipv4()
    :
    	interface{YType::str, "interface"}
{
    yang_name = "ipv4"; yang_parent_name = "multicast-host";
}

Vrfs::Vrf::MulticastHost::Ipv4::~Ipv4()
{
}

bool Vrfs::Vrf::MulticastHost::Ipv4::has_data() const
{
    return interface.is_set;
}

bool Vrfs::Vrf::MulticastHost::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Vrfs::Vrf::MulticastHost::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::MulticastHost::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::MulticastHost::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::MulticastHost::Ipv4::get_children()
{
    return children;
}

void Vrfs::Vrf::MulticastHost::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Vrfs::Vrf::MulticastHost::Ipv6::Ipv6()
    :
    	interface{YType::str, "interface"}
{
    yang_name = "ipv6"; yang_parent_name = "multicast-host";
}

Vrfs::Vrf::MulticastHost::Ipv6::~Ipv6()
{
}

bool Vrfs::Vrf::MulticastHost::Ipv6::has_data() const
{
    return interface.is_set;
}

bool Vrfs::Vrf::MulticastHost::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Vrfs::Vrf::MulticastHost::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::MulticastHost::Ipv6::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::MulticastHost::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vrfs::Vrf::MulticastHost::Ipv6::get_children()
{
    return children;
}

void Vrfs::Vrf::MulticastHost::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Vrfs::Vrf::MulticastHost::MulticastHost()
    :
    ipv4(std::make_unique<Vrfs::Vrf::MulticastHost::Ipv4>())
	,ipv6(std::make_unique<Vrfs::Vrf::MulticastHost::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    yang_name = "multicast-host"; yang_parent_name = "vrf";
}

Vrfs::Vrf::MulticastHost::~MulticastHost()
{
}

bool Vrfs::Vrf::MulticastHost::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Vrfs::Vrf::MulticastHost::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation));
}

std::string Vrfs::Vrf::MulticastHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-vrf-cfg:multicast-host";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::MulticastHost::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::Vrf::MulticastHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4 = std::make_unique<Vrfs::Vrf::MulticastHost::Ipv4>();
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
            ipv6 = std::make_unique<Vrfs::Vrf::MulticastHost::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::MulticastHost::get_children()
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

void Vrfs::Vrf::MulticastHost::set_value(const std::string & value_path, std::string value)
{
}

Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 create{YType::empty, "create"},
	 description{YType::str, "description"},
	 fallback_vrf{YType::str, "fallback-vrf"},
	 mode_big{YType::empty, "mode-big"},
	 remote_route_filter_disable{YType::empty, "remote-route-filter-disable"}
    	,
    afs(std::make_unique<Vrfs::Vrf::Afs>())
	,multicast_host(std::make_unique<Vrfs::Vrf::MulticastHost>())
	,vpn_id(nullptr) // presence node
{
    afs->parent = this;
    children["afs"] = afs.get();

    multicast_host->parent = this;
    children["multicast-host"] = multicast_host.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Vrfs::Vrf::~Vrf()
{
}

bool Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| create.is_set
	|| description.is_set
	|| fallback_vrf.is_set
	|| mode_big.is_set
	|| remote_route_filter_disable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (multicast_host !=  nullptr && multicast_host->has_data())
	|| (vpn_id !=  nullptr && vpn_id->has_data());
}

bool Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(create.operation)
	|| is_set(description.operation)
	|| is_set(fallback_vrf.operation)
	|| is_set(mode_big.operation)
	|| is_set(remote_route_filter_disable.operation)
	|| (afs !=  nullptr && is_set(afs->operation))
	|| (multicast_host !=  nullptr && is_set(multicast_host->operation))
	|| (vpn_id !=  nullptr && is_set(vpn_id->operation));
}

std::string Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (fallback_vrf.is_set || is_set(fallback_vrf.operation)) leaf_name_data.push_back(fallback_vrf.get_name_leafdata());
    if (mode_big.is_set || is_set(mode_big.operation)) leaf_name_data.push_back(mode_big.get_name_leafdata());
    if (remote_route_filter_disable.is_set || is_set(remote_route_filter_disable.operation)) leaf_name_data.push_back(remote_route_filter_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<Vrfs::Vrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    if(child_yang_name == "multicast-host")
    {
        if(multicast_host != nullptr)
        {
            children["multicast-host"] = multicast_host.get();
        }
        else
        {
            multicast_host = std::make_unique<Vrfs::Vrf::MulticastHost>();
            multicast_host->parent = this;
            children["multicast-host"] = multicast_host.get();
        }
        return children.at("multicast-host");
    }

    if(child_yang_name == "vpn-id")
    {
        if(vpn_id != nullptr)
        {
            children["vpn-id"] = vpn_id.get();
        }
        else
        {
            vpn_id = std::make_unique<Vrfs::Vrf::VpnId>();
            vpn_id->parent = this;
            children["vpn-id"] = vpn_id.get();
        }
        return children.at("vpn-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::Vrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    if(children.find("multicast-host") == children.end())
    {
        if(multicast_host != nullptr)
        {
            children["multicast-host"] = multicast_host.get();
        }
    }

    if(children.find("vpn-id") == children.end())
    {
        if(vpn_id != nullptr)
        {
            children["vpn-id"] = vpn_id.get();
        }
    }

    return children;
}

void Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "fallback-vrf")
    {
        fallback_vrf = value;
    }
    if(value_path == "mode-big")
    {
        mode_big = value;
    }
    if(value_path == "remote-route-filter-disable")
    {
        remote_route_filter_disable = value;
    }
}

Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg";
}

Vrfs::~Vrfs()
{
}

bool Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrfs";

    return path_buffer.str();

}

EntityPath Vrfs::get_entity_path(Entity* ancestor) const
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

Entity* Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vrfs::get_children()
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

void Vrfs::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Vrfs::clone_ptr()
{
    return std::make_unique<Vrfs>();
}
GlobalAf::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 saf_name{YType::enumeration, "saf-name"},
	 topology_name{YType::str, "topology-name"},
	 create{YType::empty, "create"}
{
    yang_name = "af"; yang_parent_name = "afs";
}

GlobalAf::Afs::Af::~Af()
{
}

bool GlobalAf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| create.is_set;
}

bool GlobalAf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(create.operation);
}

std::string GlobalAf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']" <<"[saf-name='" <<saf_name.get() <<"']" <<"[topology-name='" <<topology_name.get() <<"']";

    return path_buffer.str();

}

EntityPath GlobalAf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:global-af/afs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* GlobalAf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & GlobalAf::Afs::Af::get_children()
{
    return children;
}

void GlobalAf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
}

GlobalAf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "global-af";
}

GlobalAf::Afs::~Afs()
{
}

bool GlobalAf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool GlobalAf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GlobalAf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath GlobalAf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:global-af/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* GlobalAf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<GlobalAf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & GlobalAf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void GlobalAf::Afs::set_value(const std::string & value_path, std::string value)
{
}

GlobalAf::GlobalAf()
    :
    afs(std::make_unique<GlobalAf::Afs>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    yang_name = "global-af"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg";
}

GlobalAf::~GlobalAf()
{
}

bool GlobalAf::has_data() const
{
    return (afs !=  nullptr && afs->has_data());
}

bool GlobalAf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && is_set(afs->operation));
}

std::string GlobalAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:global-af";

    return path_buffer.str();

}

EntityPath GlobalAf::get_entity_path(Entity* ancestor) const
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

Entity* GlobalAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<GlobalAf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & GlobalAf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    return children;
}

void GlobalAf::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> GlobalAf::clone_ptr()
{
    return std::make_unique<GlobalAf>();
}
Srlg::Interfaces::Interface::IncludeOptical::IncludeOptical()
    :
    	enable{YType::empty, "enable"},
	 priority{YType::enumeration, "priority"}
{
    yang_name = "include-optical"; yang_parent_name = "interface";
}

Srlg::Interfaces::Interface::IncludeOptical::~IncludeOptical()
{
}

bool Srlg::Interfaces::Interface::IncludeOptical::has_data() const
{
    return enable.is_set
	|| priority.is_set;
}

bool Srlg::Interfaces::Interface::IncludeOptical::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(priority.operation);
}

std::string Srlg::Interfaces::Interface::IncludeOptical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-optical";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::IncludeOptical::get_entity_path(Entity* ancestor) const
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
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::Interface::IncludeOptical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::IncludeOptical::get_children()
{
    return children;
}

void Srlg::Interfaces::Interface::IncludeOptical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::GroupName()
    :
    	group_name_index{YType::uint32, "group-name-index"},
	 group_name{YType::str, "group-name"},
	 srlg_priority{YType::enumeration, "srlg-priority"}
{
    yang_name = "group-name"; yang_parent_name = "group-names";
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::~GroupName()
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::has_data() const
{
    return group_name_index.is_set
	|| group_name.is_set
	|| srlg_priority.is_set;
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name_index.operation)
	|| is_set(group_name.operation)
	|| is_set(srlg_priority.operation);
}

std::string Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-name" <<"[group-name-index='" <<group_name_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_entity_path(Entity* ancestor) const
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

    if (group_name_index.is_set || is_set(group_name_index.operation)) leaf_name_data.push_back(group_name_index.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.operation)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::get_children()
{
    return children;
}

void Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name-index")
    {
        group_name_index = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
    }
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupNames()
{
    yang_name = "group-names"; yang_parent_name = "interface-group";
}

Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::~GroupNames()
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::has_data() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::has_operation() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-names";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-name")
    {
        for(auto const & c : group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::GroupName>();
        c->parent = this;
        group_name.push_back(std::move(c));
        children[segment_path] = group_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::get_children()
{
    for (auto const & c : group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Interfaces::Interface::InterfaceGroup::GroupNames::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Interfaces::Interface::InterfaceGroup::InterfaceGroup()
    :
    	enable{YType::empty, "enable"}
    	,
    group_names(std::make_unique<Srlg::Interfaces::Interface::InterfaceGroup::GroupNames>())
{
    group_names->parent = this;
    children["group-names"] = group_names.get();

    yang_name = "interface-group"; yang_parent_name = "interface";
}

Srlg::Interfaces::Interface::InterfaceGroup::~InterfaceGroup()
{
}

bool Srlg::Interfaces::Interface::InterfaceGroup::has_data() const
{
    return enable.is_set
	|| (group_names !=  nullptr && group_names->has_data());
}

bool Srlg::Interfaces::Interface::InterfaceGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (group_names !=  nullptr && is_set(group_names->operation));
}

std::string Srlg::Interfaces::Interface::InterfaceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-group";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::InterfaceGroup::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::Interface::InterfaceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-names")
    {
        if(group_names != nullptr)
        {
            children["group-names"] = group_names.get();
        }
        else
        {
            group_names = std::make_unique<Srlg::Interfaces::Interface::InterfaceGroup::GroupNames>();
            group_names->parent = this;
            children["group-names"] = group_names.get();
        }
        return children.at("group-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::InterfaceGroup::get_children()
{
    if(children.find("group-names") == children.end())
    {
        if(group_names != nullptr)
        {
            children["group-names"] = group_names.get();
        }
    }

    return children;
}

void Srlg::Interfaces::Interface::InterfaceGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Srlg::Interfaces::Interface::Values::Value_::Value_()
    :
    	srlg_index{YType::uint32, "srlg-index"},
	 srlg_priority{YType::enumeration, "srlg-priority"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "value"; yang_parent_name = "values";
}

Srlg::Interfaces::Interface::Values::Value_::~Value_()
{
}

bool Srlg::Interfaces::Interface::Values::Value_::has_data() const
{
    return srlg_index.is_set
	|| srlg_priority.is_set
	|| srlg_value.is_set;
}

bool Srlg::Interfaces::Interface::Values::Value_::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_index.operation)
	|| is_set(srlg_priority.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::Interfaces::Interface::Values::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value" <<"[srlg-index='" <<srlg_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::Values::Value_::get_entity_path(Entity* ancestor) const
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

    if (srlg_index.is_set || is_set(srlg_index.operation)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.operation)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::Interface::Values::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::Values::Value_::get_children()
{
    return children;
}

void Srlg::Interfaces::Interface::Values::Value_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-index")
    {
        srlg_index = value;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Interfaces::Interface::Values::Values()
{
    yang_name = "values"; yang_parent_name = "interface";
}

Srlg::Interfaces::Interface::Values::~Values()
{
}

bool Srlg::Interfaces::Interface::Values::has_data() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::Interface::Values::has_operation() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Interfaces::Interface::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::Values::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Interfaces::Interface::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "value")
    {
        for(auto const & c : value_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Interfaces::Interface::Values::Value_>();
        c->parent = this;
        value_.push_back(std::move(c));
        children[segment_path] = value_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::Values::get_children()
{
    for (auto const & c : value_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Interfaces::Interface::Values::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::InterfaceSrlgName()
    :
    	srlg_name{YType::str, "srlg-name"}
{
    yang_name = "interface-srlg-name"; yang_parent_name = "interface-srlg-names";
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::~InterfaceSrlgName()
{
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::has_data() const
{
    return srlg_name.is_set;
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation);
}

std::string Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-name" <<"[srlg-name='" <<srlg_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_entity_path(Entity* ancestor) const
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

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::get_children()
{
    return children;
}

void Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgNames()
{
    yang_name = "interface-srlg-names"; yang_parent_name = "interface";
}

Srlg::Interfaces::Interface::InterfaceSrlgNames::~InterfaceSrlgNames()
{
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::has_data() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::Interface::InterfaceSrlgNames::has_operation() const
{
    for (std::size_t index=0; index<interface_srlg_name.size(); index++)
    {
        if(interface_srlg_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Interfaces::Interface::InterfaceSrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-srlg-names";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::InterfaceSrlgNames::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Interfaces::Interface::InterfaceSrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-srlg-name")
    {
        for(auto const & c : interface_srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Interfaces::Interface::InterfaceSrlgNames::InterfaceSrlgName>();
        c->parent = this;
        interface_srlg_name.push_back(std::move(c));
        children[segment_path] = interface_srlg_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::InterfaceSrlgNames::get_children()
{
    for (auto const & c : interface_srlg_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Interfaces::Interface::InterfaceSrlgNames::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 enable{YType::empty, "enable"}
    	,
    include_optical(std::make_unique<Srlg::Interfaces::Interface::IncludeOptical>())
	,interface_group(std::make_unique<Srlg::Interfaces::Interface::InterfaceGroup>())
	,interface_srlg_names(std::make_unique<Srlg::Interfaces::Interface::InterfaceSrlgNames>())
	,values(std::make_unique<Srlg::Interfaces::Interface::Values>())
{
    include_optical->parent = this;
    children["include-optical"] = include_optical.get();

    interface_group->parent = this;
    children["interface-group"] = interface_group.get();

    interface_srlg_names->parent = this;
    children["interface-srlg-names"] = interface_srlg_names.get();

    values->parent = this;
    children["values"] = values.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Srlg::Interfaces::Interface::~Interface()
{
}

bool Srlg::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| (include_optical !=  nullptr && include_optical->has_data())
	|| (interface_group !=  nullptr && interface_group->has_data())
	|| (interface_srlg_names !=  nullptr && interface_srlg_names->has_data())
	|| (values !=  nullptr && values->has_data());
}

bool Srlg::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(enable.operation)
	|| (include_optical !=  nullptr && is_set(include_optical->operation))
	|| (interface_group !=  nullptr && is_set(interface_group->operation))
	|| (interface_srlg_names !=  nullptr && is_set(interface_srlg_names->operation))
	|| (values !=  nullptr && is_set(values->operation));
}

std::string Srlg::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "include-optical")
    {
        if(include_optical != nullptr)
        {
            children["include-optical"] = include_optical.get();
        }
        else
        {
            include_optical = std::make_unique<Srlg::Interfaces::Interface::IncludeOptical>();
            include_optical->parent = this;
            children["include-optical"] = include_optical.get();
        }
        return children.at("include-optical");
    }

    if(child_yang_name == "interface-group")
    {
        if(interface_group != nullptr)
        {
            children["interface-group"] = interface_group.get();
        }
        else
        {
            interface_group = std::make_unique<Srlg::Interfaces::Interface::InterfaceGroup>();
            interface_group->parent = this;
            children["interface-group"] = interface_group.get();
        }
        return children.at("interface-group");
    }

    if(child_yang_name == "interface-srlg-names")
    {
        if(interface_srlg_names != nullptr)
        {
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
        else
        {
            interface_srlg_names = std::make_unique<Srlg::Interfaces::Interface::InterfaceSrlgNames>();
            interface_srlg_names->parent = this;
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
        return children.at("interface-srlg-names");
    }

    if(child_yang_name == "values")
    {
        if(values != nullptr)
        {
            children["values"] = values.get();
        }
        else
        {
            values = std::make_unique<Srlg::Interfaces::Interface::Values>();
            values->parent = this;
            children["values"] = values.get();
        }
        return children.at("values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Interfaces::Interface::get_children()
{
    if(children.find("include-optical") == children.end())
    {
        if(include_optical != nullptr)
        {
            children["include-optical"] = include_optical.get();
        }
    }

    if(children.find("interface-group") == children.end())
    {
        if(interface_group != nullptr)
        {
            children["interface-group"] = interface_group.get();
        }
    }

    if(children.find("interface-srlg-names") == children.end())
    {
        if(interface_srlg_names != nullptr)
        {
            children["interface-srlg-names"] = interface_srlg_names.get();
        }
    }

    if(children.find("values") == children.end())
    {
        if(values != nullptr)
        {
            children["values"] = values.get();
        }
    }

    return children;
}

void Srlg::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Srlg::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "srlg";
}

Srlg::Interfaces::~Interfaces()
{
}

bool Srlg::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Srlg::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Srlg::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Interfaces::get_children()
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

void Srlg::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Srlg::SrlgNames::SrlgName::SrlgName()
    :
    	srlg_name{YType::str, "srlg-name"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "srlg-name"; yang_parent_name = "srlg-names";
}

Srlg::SrlgNames::SrlgName::~SrlgName()
{
}

bool Srlg::SrlgNames::SrlgName::has_data() const
{
    return srlg_name.is_set
	|| srlg_value.is_set;
}

bool Srlg::SrlgNames::SrlgName::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::SrlgNames::SrlgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-name" <<"[srlg-name='" <<srlg_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::SrlgNames::SrlgName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/srlg-names/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::SrlgNames::SrlgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::SrlgNames::SrlgName::get_children()
{
    return children;
}

void Srlg::SrlgNames::SrlgName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::SrlgNames::SrlgNames()
{
    yang_name = "srlg-names"; yang_parent_name = "srlg";
}

Srlg::SrlgNames::~SrlgNames()
{
}

bool Srlg::SrlgNames::has_data() const
{
    for (std::size_t index=0; index<srlg_name.size(); index++)
    {
        if(srlg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::SrlgNames::has_operation() const
{
    for (std::size_t index=0; index<srlg_name.size(); index++)
    {
        if(srlg_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::SrlgNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-names";

    return path_buffer.str();

}

EntityPath Srlg::SrlgNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::SrlgNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-name")
    {
        for(auto const & c : srlg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::SrlgNames::SrlgName>();
        c->parent = this;
        srlg_name.push_back(std::move(c));
        children[segment_path] = srlg_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::SrlgNames::get_children()
{
    for (auto const & c : srlg_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::SrlgNames::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Groups::Group::GroupValues::GroupValue::GroupValue()
    :
    	srlg_index{YType::uint32, "srlg-index"},
	 srlg_priority{YType::enumeration, "srlg-priority"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "group-value"; yang_parent_name = "group-values";
}

Srlg::Groups::Group::GroupValues::GroupValue::~GroupValue()
{
}

bool Srlg::Groups::Group::GroupValues::GroupValue::has_data() const
{
    return srlg_index.is_set
	|| srlg_priority.is_set
	|| srlg_value.is_set;
}

bool Srlg::Groups::Group::GroupValues::GroupValue::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_index.operation)
	|| is_set(srlg_priority.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::Groups::Group::GroupValues::GroupValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-value" <<"[srlg-index='" <<srlg_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Groups::Group::GroupValues::GroupValue::get_entity_path(Entity* ancestor) const
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

    if (srlg_index.is_set || is_set(srlg_index.operation)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.operation)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Groups::Group::GroupValues::GroupValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::Groups::Group::GroupValues::GroupValue::get_children()
{
    return children;
}

void Srlg::Groups::Group::GroupValues::GroupValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-index")
    {
        srlg_index = value;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::Groups::Group::GroupValues::GroupValues()
{
    yang_name = "group-values"; yang_parent_name = "group";
}

Srlg::Groups::Group::GroupValues::~GroupValues()
{
}

bool Srlg::Groups::Group::GroupValues::has_data() const
{
    for (std::size_t index=0; index<group_value.size(); index++)
    {
        if(group_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Groups::Group::GroupValues::has_operation() const
{
    for (std::size_t index=0; index<group_value.size(); index++)
    {
        if(group_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Groups::Group::GroupValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-values";

    return path_buffer.str();

}

EntityPath Srlg::Groups::Group::GroupValues::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::Groups::Group::GroupValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-value")
    {
        for(auto const & c : group_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Groups::Group::GroupValues::GroupValue>();
        c->parent = this;
        group_value.push_back(std::move(c));
        children[segment_path] = group_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Groups::Group::GroupValues::get_children()
{
    for (auto const & c : group_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Groups::Group::GroupValues::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Groups::Group::Group()
    :
    	group_name{YType::str, "group-name"},
	 enable{YType::empty, "enable"}
    	,
    group_values(std::make_unique<Srlg::Groups::Group::GroupValues>())
{
    group_values->parent = this;
    children["group-values"] = group_values.get();

    yang_name = "group"; yang_parent_name = "groups";
}

Srlg::Groups::Group::~Group()
{
}

bool Srlg::Groups::Group::has_data() const
{
    return group_name.is_set
	|| enable.is_set
	|| (group_values !=  nullptr && group_values->has_data());
}

bool Srlg::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(enable.operation)
	|| (group_values !=  nullptr && is_set(group_values->operation));
}

std::string Srlg::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-name='" <<group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-values")
    {
        if(group_values != nullptr)
        {
            children["group-values"] = group_values.get();
        }
        else
        {
            group_values = std::make_unique<Srlg::Groups::Group::GroupValues>();
            group_values->parent = this;
            children["group-values"] = group_values.get();
        }
        return children.at("group-values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Groups::Group::get_children()
{
    if(children.find("group-values") == children.end())
    {
        if(group_values != nullptr)
        {
            children["group-values"] = group_values.get();
        }
    }

    return children;
}

void Srlg::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Srlg::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "srlg";
}

Srlg::Groups::~Groups()
{
}

bool Srlg::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Srlg::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::Groups::set_value(const std::string & value_path, std::string value)
{
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::InheritNodeValue()
    :
    	srlg_index{YType::uint32, "srlg-index"},
	 srlg_priority{YType::enumeration, "srlg-priority"},
	 srlg_value{YType::uint32, "srlg-value"}
{
    yang_name = "inherit-node-value"; yang_parent_name = "inherit-node-values";
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::~InheritNodeValue()
{
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::has_data() const
{
    return srlg_index.is_set
	|| srlg_priority.is_set
	|| srlg_value.is_set;
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_index.operation)
	|| is_set(srlg_priority.operation)
	|| is_set(srlg_value.operation);
}

std::string Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node-value" <<"[srlg-index='" <<srlg_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_entity_path(Entity* ancestor) const
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

    if (srlg_index.is_set || is_set(srlg_index.operation)) leaf_name_data.push_back(srlg_index.get_name_leafdata());
    if (srlg_priority.is_set || is_set(srlg_priority.operation)) leaf_name_data.push_back(srlg_priority.get_name_leafdata());
    if (srlg_value.is_set || is_set(srlg_value.operation)) leaf_name_data.push_back(srlg_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::get_children()
{
    return children;
}

void Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-index")
    {
        srlg_index = value;
    }
    if(value_path == "srlg-priority")
    {
        srlg_priority = value;
    }
    if(value_path == "srlg-value")
    {
        srlg_value = value;
    }
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValues()
{
    yang_name = "inherit-node-values"; yang_parent_name = "inherit-node";
}

Srlg::InheritNodes::InheritNode::InheritNodeValues::~InheritNodeValues()
{
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::has_data() const
{
    for (std::size_t index=0; index<inherit_node_value.size(); index++)
    {
        if(inherit_node_value[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InheritNodes::InheritNode::InheritNodeValues::has_operation() const
{
    for (std::size_t index=0; index<inherit_node_value.size(); index++)
    {
        if(inherit_node_value[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::InheritNodes::InheritNode::InheritNodeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node-values";

    return path_buffer.str();

}

EntityPath Srlg::InheritNodes::InheritNode::InheritNodeValues::get_entity_path(Entity* ancestor) const
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

Entity* Srlg::InheritNodes::InheritNode::InheritNodeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inherit-node-value")
    {
        for(auto const & c : inherit_node_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::InheritNodes::InheritNode::InheritNodeValues::InheritNodeValue>();
        c->parent = this;
        inherit_node_value.push_back(std::move(c));
        children[segment_path] = inherit_node_value.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::InheritNodes::InheritNode::InheritNodeValues::get_children()
{
    for (auto const & c : inherit_node_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::InheritNodes::InheritNode::InheritNodeValues::set_value(const std::string & value_path, std::string value)
{
}

Srlg::InheritNodes::InheritNode::InheritNode()
    :
    	inherit_node_name{YType::str, "inherit-node-name"},
	 enable{YType::empty, "enable"}
    	,
    inherit_node_values(std::make_unique<Srlg::InheritNodes::InheritNode::InheritNodeValues>())
{
    inherit_node_values->parent = this;
    children["inherit-node-values"] = inherit_node_values.get();

    yang_name = "inherit-node"; yang_parent_name = "inherit-nodes";
}

Srlg::InheritNodes::InheritNode::~InheritNode()
{
}

bool Srlg::InheritNodes::InheritNode::has_data() const
{
    return inherit_node_name.is_set
	|| enable.is_set
	|| (inherit_node_values !=  nullptr && inherit_node_values->has_data());
}

bool Srlg::InheritNodes::InheritNode::has_operation() const
{
    return is_set(operation)
	|| is_set(inherit_node_name.operation)
	|| is_set(enable.operation)
	|| (inherit_node_values !=  nullptr && is_set(inherit_node_values->operation));
}

std::string Srlg::InheritNodes::InheritNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-node" <<"[inherit-node-name='" <<inherit_node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Srlg::InheritNodes::InheritNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/inherit-nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit_node_name.is_set || is_set(inherit_node_name.operation)) leaf_name_data.push_back(inherit_node_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::InheritNodes::InheritNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inherit-node-values")
    {
        if(inherit_node_values != nullptr)
        {
            children["inherit-node-values"] = inherit_node_values.get();
        }
        else
        {
            inherit_node_values = std::make_unique<Srlg::InheritNodes::InheritNode::InheritNodeValues>();
            inherit_node_values->parent = this;
            children["inherit-node-values"] = inherit_node_values.get();
        }
        return children.at("inherit-node-values");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::InheritNodes::InheritNode::get_children()
{
    if(children.find("inherit-node-values") == children.end())
    {
        if(inherit_node_values != nullptr)
        {
            children["inherit-node-values"] = inherit_node_values.get();
        }
    }

    return children;
}

void Srlg::InheritNodes::InheritNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inherit-node-name")
    {
        inherit_node_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Srlg::InheritNodes::InheritNodes()
{
    yang_name = "inherit-nodes"; yang_parent_name = "srlg";
}

Srlg::InheritNodes::~InheritNodes()
{
}

bool Srlg::InheritNodes::has_data() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_data())
            return true;
    }
    return false;
}

bool Srlg::InheritNodes::has_operation() const
{
    for (std::size_t index=0; index<inherit_node.size(); index++)
    {
        if(inherit_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srlg::InheritNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit-nodes";

    return path_buffer.str();

}

EntityPath Srlg::InheritNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::InheritNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inherit-node")
    {
        for(auto const & c : inherit_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srlg::InheritNodes::InheritNode>();
        c->parent = this;
        inherit_node.push_back(std::move(c));
        children[segment_path] = inherit_node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::InheritNodes::get_children()
{
    for (auto const & c : inherit_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srlg::InheritNodes::set_value(const std::string & value_path, std::string value)
{
}

Srlg::Srlg()
    :
    	enable{YType::empty, "enable"}
    	,
    groups(std::make_unique<Srlg::Groups>())
	,inherit_nodes(std::make_unique<Srlg::InheritNodes>())
	,interfaces(std::make_unique<Srlg::Interfaces>())
	,srlg_names(std::make_unique<Srlg::SrlgNames>())
{
    groups->parent = this;
    children["groups"] = groups.get();

    inherit_nodes->parent = this;
    children["inherit-nodes"] = inherit_nodes.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    srlg_names->parent = this;
    children["srlg-names"] = srlg_names.get();

    yang_name = "srlg"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg";
}

Srlg::~Srlg()
{
}

bool Srlg::has_data() const
{
    return enable.is_set
	|| (groups !=  nullptr && groups->has_data())
	|| (inherit_nodes !=  nullptr && inherit_nodes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (srlg_names !=  nullptr && srlg_names->has_data());
}

bool Srlg::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (groups !=  nullptr && is_set(groups->operation))
	|| (inherit_nodes !=  nullptr && is_set(inherit_nodes->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (srlg_names !=  nullptr && is_set(srlg_names->operation));
}

std::string Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:srlg";

    return path_buffer.str();

}

EntityPath Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
        else
        {
            groups = std::make_unique<Srlg::Groups>();
            groups->parent = this;
            children["groups"] = groups.get();
        }
        return children.at("groups");
    }

    if(child_yang_name == "inherit-nodes")
    {
        if(inherit_nodes != nullptr)
        {
            children["inherit-nodes"] = inherit_nodes.get();
        }
        else
        {
            inherit_nodes = std::make_unique<Srlg::InheritNodes>();
            inherit_nodes->parent = this;
            children["inherit-nodes"] = inherit_nodes.get();
        }
        return children.at("inherit-nodes");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Srlg::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "srlg-names")
    {
        if(srlg_names != nullptr)
        {
            children["srlg-names"] = srlg_names.get();
        }
        else
        {
            srlg_names = std::make_unique<Srlg::SrlgNames>();
            srlg_names->parent = this;
            children["srlg-names"] = srlg_names.get();
        }
        return children.at("srlg-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srlg::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
    }

    if(children.find("inherit-nodes") == children.end())
    {
        if(inherit_nodes != nullptr)
        {
            children["inherit-nodes"] = inherit_nodes.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("srlg-names") == children.end())
    {
        if(srlg_names != nullptr)
        {
            children["srlg-names"] = srlg_names.get();
        }
    }

    return children;
}

void Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::unique_ptr<Entity> Srlg::clone_ptr()
{
    return std::make_unique<Srlg>();
}
VrfGroups::VrfGroup::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

VrfGroups::VrfGroup::Vrfs::Vrf::~Vrf()
{
}

bool VrfGroups::VrfGroup::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set;
}

bool VrfGroups::VrfGroup::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string VrfGroups::VrfGroup::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath VrfGroups::VrfGroup::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
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

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* VrfGroups::VrfGroup::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & VrfGroups::VrfGroup::Vrfs::Vrf::get_children()
{
    return children;
}

void VrfGroups::VrfGroup::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

VrfGroups::VrfGroup::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "vrf-group";
}

VrfGroups::VrfGroup::Vrfs::~Vrfs()
{
}

bool VrfGroups::VrfGroup::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroups::VrfGroup::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string VrfGroups::VrfGroup::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath VrfGroups::VrfGroup::Vrfs::get_entity_path(Entity* ancestor) const
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

Entity* VrfGroups::VrfGroup::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<VrfGroups::VrfGroup::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroups::VrfGroup::Vrfs::get_children()
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

void VrfGroups::VrfGroup::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

VrfGroups::VrfGroup::VrfGroup()
    :
    	vrf_group_name{YType::str, "vrf-group-name"},
	 enable{YType::empty, "enable"}
    	,
    vrfs(std::make_unique<VrfGroups::VrfGroup::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "vrf-group"; yang_parent_name = "vrf-groups";
}

VrfGroups::VrfGroup::~VrfGroup()
{
}

bool VrfGroups::VrfGroup::has_data() const
{
    return vrf_group_name.is_set
	|| enable.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool VrfGroups::VrfGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_group_name.operation)
	|| is_set(enable.operation)
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string VrfGroups::VrfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-group" <<"[vrf-group-name='" <<vrf_group_name.get() <<"']";

    return path_buffer.str();

}

EntityPath VrfGroups::VrfGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrf-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_group_name.is_set || is_set(vrf_group_name.operation)) leaf_name_data.push_back(vrf_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* VrfGroups::VrfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            vrfs = std::make_unique<VrfGroups::VrfGroup::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroups::VrfGroup::get_children()
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

void VrfGroups::VrfGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-group-name")
    {
        vrf_group_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

VrfGroups::VrfGroups()
{
    yang_name = "vrf-groups"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg";
}

VrfGroups::~VrfGroups()
{
}

bool VrfGroups::has_data() const
{
    for (std::size_t index=0; index<vrf_group.size(); index++)
    {
        if(vrf_group[index]->has_data())
            return true;
    }
    return false;
}

bool VrfGroups::has_operation() const
{
    for (std::size_t index=0; index<vrf_group.size(); index++)
    {
        if(vrf_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string VrfGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:vrf-groups";

    return path_buffer.str();

}

EntityPath VrfGroups::get_entity_path(Entity* ancestor) const
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

Entity* VrfGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-group")
    {
        for(auto const & c : vrf_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<VrfGroups::VrfGroup>();
        c->parent = this;
        vrf_group.push_back(std::move(c));
        children[segment_path] = vrf_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & VrfGroups::get_children()
{
    for (auto const & c : vrf_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void VrfGroups::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> VrfGroups::clone_ptr()
{
    return std::make_unique<VrfGroups>();
}
SelectiveVrfDownload::SelectiveVrfDownload()
    :
    	disable{YType::empty, "disable"}
{
    yang_name = "selective-vrf-download"; yang_parent_name = "Cisco-IOS-XR-infra-rsi-cfg";
}

SelectiveVrfDownload::~SelectiveVrfDownload()
{
}

bool SelectiveVrfDownload::has_data() const
{
    return disable.is_set;
}

bool SelectiveVrfDownload::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string SelectiveVrfDownload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download";

    return path_buffer.str();

}

EntityPath SelectiveVrfDownload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SelectiveVrfDownload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SelectiveVrfDownload::get_children()
{
    return children;
}

void SelectiveVrfDownload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

std::unique_ptr<Entity> SelectiveVrfDownload::clone_ptr()
{
    return std::make_unique<SelectiveVrfDownload>();
}

const Enum::Value VrfAddressFamilyEnum::ipv4 {1, "ipv4"};
const Enum::Value VrfAddressFamilyEnum::ipv6 {2, "ipv6"};

const Enum::Value SrlgPriorityEnum::critical {0, "critical"};
const Enum::Value SrlgPriorityEnum::high {1, "high"};
const Enum::Value SrlgPriorityEnum::default_ {2, "default"};
const Enum::Value SrlgPriorityEnum::low {3, "low"};
const Enum::Value SrlgPriorityEnum::very_low {4, "very-low"};

const Enum::Value VrfSubAddressFamilyEnum::unicast {1, "unicast"};
const Enum::Value VrfSubAddressFamilyEnum::multicast {2, "multicast"};
const Enum::Value VrfSubAddressFamilyEnum::flow_spec {133, "flow-spec"};


}
}

