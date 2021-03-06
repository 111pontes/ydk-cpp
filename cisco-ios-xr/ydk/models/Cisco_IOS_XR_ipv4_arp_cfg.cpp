
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_arp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_arp_cfg {

Arp::Arp()
    :
    	inner_cos{YType::uint32, "inner-cos"},
	 max_entries{YType::uint32, "max-entries"},
	 outer_cos{YType::uint32, "outer-cos"}
{
    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg";
}

Arp::~Arp()
{
}

bool Arp::has_data() const
{
    return inner_cos.is_set
	|| max_entries.is_set
	|| outer_cos.is_set;
}

bool Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(inner_cos.operation)
	|| is_set(max_entries.operation)
	|| is_set(outer_cos.operation);
}

std::string Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp";

    return path_buffer.str();

}

EntityPath Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (max_entries.is_set || is_set(max_entries.operation)) leaf_name_data.push_back(max_entries.get_name_leafdata());
    if (outer_cos.is_set || is_set(outer_cos.operation)) leaf_name_data.push_back(outer_cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Arp::get_children()
{
    return children;
}

void Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "max-entries")
    {
        max_entries = value;
    }
    if(value_path == "outer-cos")
    {
        outer_cos = value;
    }
}

std::unique_ptr<Entity> Arp::clone_ptr()
{
    return std::make_unique<Arp>();
}
Arpgmp::Vrf::Entries::Entry::Entry()
    :
    	address{YType::str, "address"},
	 encapsulation{YType::enumeration, "encapsulation"},
	 entry_type{YType::enumeration, "entry-type"},
	 interface{YType::str, "interface"},
	 mac_address{YType::str, "mac-address"}
{
    yang_name = "entry"; yang_parent_name = "entries";
}

Arpgmp::Vrf::Entries::Entry::~Entry()
{
}

bool Arpgmp::Vrf::Entries::Entry::has_data() const
{
    return address.is_set
	|| encapsulation.is_set
	|| entry_type.is_set
	|| interface.is_set
	|| mac_address.is_set;
}

bool Arpgmp::Vrf::Entries::Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(entry_type.operation)
	|| is_set(interface.operation)
	|| is_set(mac_address.operation);
}

std::string Arpgmp::Vrf::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Arpgmp::Vrf::Entries::Entry::get_entity_path(Entity* ancestor) const
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
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.operation)) leaf_name_data.push_back(entry_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Arpgmp::Vrf::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Arpgmp::Vrf::Entries::Entry::get_children()
{
    return children;
}

void Arpgmp::Vrf::Entries::Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Arpgmp::Vrf::Entries::Entries()
{
    yang_name = "entries"; yang_parent_name = "vrf";
}

Arpgmp::Vrf::Entries::~Entries()
{
}

bool Arpgmp::Vrf::Entries::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arpgmp::Vrf::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arpgmp::Vrf::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";

    return path_buffer.str();

}

EntityPath Arpgmp::Vrf::Entries::get_entity_path(Entity* ancestor) const
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

Entity* Arpgmp::Vrf::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Arpgmp::Vrf::Entries::Entry>();
        c->parent = this;
        entry.push_back(std::move(c));
        children[segment_path] = entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Arpgmp::Vrf::Entries::get_children()
{
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Arpgmp::Vrf::Entries::set_value(const std::string & value_path, std::string value)
{
}

Arpgmp::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    entries(std::make_unique<Arpgmp::Vrf::Entries>())
{
    entries->parent = this;
    children["entries"] = entries.get();

    yang_name = "vrf"; yang_parent_name = "arpgmp";
}

Arpgmp::Vrf::~Vrf()
{
}

bool Arpgmp::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (entries !=  nullptr && entries->has_data());
}

bool Arpgmp::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (entries !=  nullptr && is_set(entries->operation));
}

std::string Arpgmp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Arpgmp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arpgmp/" << get_segment_path();
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

Entity* Arpgmp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "entries")
    {
        if(entries != nullptr)
        {
            children["entries"] = entries.get();
        }
        else
        {
            entries = std::make_unique<Arpgmp::Vrf::Entries>();
            entries->parent = this;
            children["entries"] = entries.get();
        }
        return children.at("entries");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Arpgmp::Vrf::get_children()
{
    if(children.find("entries") == children.end())
    {
        if(entries != nullptr)
        {
            children["entries"] = entries.get();
        }
    }

    return children;
}

void Arpgmp::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Arpgmp::Arpgmp()
{
    yang_name = "arpgmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg";
}

Arpgmp::~Arpgmp()
{
}

bool Arpgmp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Arpgmp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arpgmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arpgmp";

    return path_buffer.str();

}

EntityPath Arpgmp::get_entity_path(Entity* ancestor) const
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

Entity* Arpgmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Arpgmp::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Arpgmp::get_children()
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

void Arpgmp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Arpgmp::clone_ptr()
{
    return std::make_unique<Arpgmp>();
}
ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::Peer()
    :
    	prefix_string{YType::str, "prefix-string"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::~Peer()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::has_data() const
{
    return prefix_string.is_set;
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_string.operation);
}

std::string ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[prefix-string='" <<prefix_string.get() <<"']";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_entity_path(Entity* ancestor) const
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

    if (prefix_string.is_set || is_set(prefix_string.operation)) leaf_name_data.push_back(prefix_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::get_children()
{
    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-string")
    {
        prefix_string = value;
    }
}

ArpRedundancy::Redundancy::Groups::Group::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "group";
}

ArpRedundancy::Redundancy::Groups::Group::Peers::~Peers()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ArpRedundancy::Redundancy::Groups::Group::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpRedundancy::Redundancy::Groups::Group::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::Group::Peers::get_entity_path(Entity* ancestor) const
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

Entity* ArpRedundancy::Redundancy::Groups::Group::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ArpRedundancy::Redundancy::Groups::Group::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::Group::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::Peers::set_value(const std::string & value_path, std::string value)
{
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 interface_id{YType::uint32, "interface-id"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::~Interface()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_id.is_set;
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_id.operation);
}

std::string ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::get_children()
{
    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-list";
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::~Interfaces()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::get_children()
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

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::InterfaceList()
    :
    	enable{YType::empty, "enable"}
    	,
    interfaces(std::make_unique<ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "interface-list"; yang_parent_name = "group";
}

ArpRedundancy::Redundancy::Groups::Group::InterfaceList::~InterfaceList()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::has_data() const
{
    return enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool ArpRedundancy::Redundancy::Groups::Group::InterfaceList::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_entity_path(Entity* ancestor) const
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

Entity* ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<ArpRedundancy::Redundancy::Groups::Group::InterfaceList::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::Group::InterfaceList::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

ArpRedundancy::Redundancy::Groups::Group::Group()
    :
    	group_id{YType::uint32, "group-id"},
	 source_interface{YType::str, "source-interface"}
    	,
    interface_list(nullptr) // presence node
	,peers(std::make_unique<ArpRedundancy::Redundancy::Groups::Group::Peers>())
{
    peers->parent = this;
    children["peers"] = peers.get();

    yang_name = "group"; yang_parent_name = "groups";
}

ArpRedundancy::Redundancy::Groups::Group::~Group()
{
}

bool ArpRedundancy::Redundancy::Groups::Group::has_data() const
{
    return group_id.is_set
	|| source_interface.is_set
	|| (interface_list !=  nullptr && interface_list->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ArpRedundancy::Redundancy::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(source_interface.operation)
	|| (interface_list !=  nullptr && is_set(interface_list->operation))
	|| (peers !=  nullptr && is_set(peers->operation));
}

std::string ArpRedundancy::Redundancy::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-id='" <<group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy/redundancy/groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ArpRedundancy::Redundancy::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list.get();
        }
        else
        {
            interface_list = std::make_unique<ArpRedundancy::Redundancy::Groups::Group::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list.get();
        }
        return children.at("interface-list");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers.get();
        }
        else
        {
            peers = std::make_unique<ArpRedundancy::Redundancy::Groups::Group::Peers>();
            peers->parent = this;
            children["peers"] = peers.get();
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::Group::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list.get();
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers.get();
        }
    }

    return children;
}

void ArpRedundancy::Redundancy::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

ArpRedundancy::Redundancy::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "redundancy";
}

ArpRedundancy::Redundancy::Groups::~Groups()
{
}

bool ArpRedundancy::Redundancy::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool ArpRedundancy::Redundancy::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpRedundancy::Redundancy::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy/redundancy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ArpRedundancy::Redundancy::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<ArpRedundancy::Redundancy::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::Groups::get_children()
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

void ArpRedundancy::Redundancy::Groups::set_value(const std::string & value_path, std::string value)
{
}

ArpRedundancy::Redundancy::Redundancy()
    :
    	enable{YType::empty, "enable"}
    	,
    groups(std::make_unique<ArpRedundancy::Redundancy::Groups>())
{
    groups->parent = this;
    children["groups"] = groups.get();

    yang_name = "redundancy"; yang_parent_name = "arp-redundancy";
}

ArpRedundancy::Redundancy::~Redundancy()
{
}

bool ArpRedundancy::Redundancy::has_data() const
{
    return enable.is_set
	|| (groups !=  nullptr && groups->has_data());
}

bool ArpRedundancy::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (groups !=  nullptr && is_set(groups->operation));
}

std::string ArpRedundancy::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath ArpRedundancy::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy/" << get_segment_path();
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

Entity* ArpRedundancy::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            groups = std::make_unique<ArpRedundancy::Redundancy::Groups>();
            groups->parent = this;
            children["groups"] = groups.get();
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::Redundancy::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups.get();
        }
    }

    return children;
}

void ArpRedundancy::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

ArpRedundancy::ArpRedundancy()
    :
    redundancy(nullptr) // presence node
{
    yang_name = "arp-redundancy"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-cfg";
}

ArpRedundancy::~ArpRedundancy()
{
}

bool ArpRedundancy::has_data() const
{
    return (redundancy !=  nullptr && redundancy->has_data());
}

bool ArpRedundancy::has_operation() const
{
    return is_set(operation)
	|| (redundancy !=  nullptr && is_set(redundancy->operation));
}

std::string ArpRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy";

    return path_buffer.str();

}

EntityPath ArpRedundancy::get_entity_path(Entity* ancestor) const
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

Entity* ArpRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy.get();
        }
        else
        {
            redundancy = std::make_unique<ArpRedundancy::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy.get();
        }
        return children.at("redundancy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ArpRedundancy::get_children()
{
    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy.get();
        }
    }

    return children;
}

void ArpRedundancy::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ArpRedundancy::clone_ptr()
{
    return std::make_unique<ArpRedundancy>();
}

const Enum::Value ArpEntryEnum::static_ {0, "static"};
const Enum::Value ArpEntryEnum::alias {1, "alias"};

const Enum::Value ArpEncapEnum::arpa {1, "arpa"};
const Enum::Value ArpEncapEnum::srp {4, "srp"};
const Enum::Value ArpEncapEnum::srpa {5, "srpa"};
const Enum::Value ArpEncapEnum::srpb {6, "srpb"};


}
}

