
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_cdp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cdp_oper {

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::Address()
    :
    	address_type{YType::enumeration, "address-type"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "cdp-addr-entry";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::~Address()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_entity_path(Entity* ancestor) const
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

    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-type")
    {
        address_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::CdpAddrEntry()
    :
    address(std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address>())
{
    address->parent = this;
    children["address"] = address.get();

    yang_name = "cdp-addr-entry"; yang_parent_name = "network-addresses";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::~CdpAddrEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && is_set(address->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-addr-entry";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::Address>();
            address->parent = this;
            children["address"] = address.get();
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::get_children()
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

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::NetworkAddresses()
{
    yang_name = "network-addresses"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::~NetworkAddresses()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-addr-entry")
    {
        for(auto const & c : cdp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::CdpAddrEntry>();
        c->parent = this;
        cdp_addr_entry.push_back(std::move(c));
        children[segment_path] = cdp_addr_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::get_children()
{
    for (auto const & c : cdp_addr_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::CdpProtHelloEntry()
    :
    	hello_message{YType::str, "hello-message"}
{
    yang_name = "cdp-prot-hello-entry"; yang_parent_name = "protocol-hello-list";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::~CdpProtHelloEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::has_data() const
{
    return hello_message.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_message.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-prot-hello-entry";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_entity_path(Entity* ancestor) const
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

    if (hello_message.is_set || is_set(hello_message.operation)) leaf_name_data.push_back(hello_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-message")
    {
        hello_message = value;
    }
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::ProtocolHelloList()
{
    yang_name = "protocol-hello-list"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::~ProtocolHelloList()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::has_data() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::has_operation() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-hello-list";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-prot-hello-entry")
    {
        for(auto const & c : cdp_prot_hello_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::CdpProtHelloEntry>();
        c->parent = this;
        cdp_prot_hello_entry.push_back(std::move(c));
        children[segment_path] = cdp_prot_hello_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::get_children()
{
    for (auto const & c : cdp_prot_hello_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::Detail_()
    :
    	duplex{YType::enumeration, "duplex"},
	 native_vlan{YType::uint32, "native-vlan"},
	 system_name{YType::str, "system-name"},
	 version{YType::str, "version"},
	 vtp_domain{YType::str, "vtp-domain"}
    	,
    network_addresses(std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses>())
	,protocol_hello_list(std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList>())
{
    network_addresses->parent = this;
    children["network-addresses"] = network_addresses.get();

    protocol_hello_list->parent = this;
    children["protocol-hello-list"] = protocol_hello_list.get();

    yang_name = "detail"; yang_parent_name = "cdp-neighbor";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::~Detail_()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::has_data() const
{
    return duplex.is_set
	|| native_vlan.is_set
	|| system_name.is_set
	|| version.is_set
	|| vtp_domain.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::has_operation() const
{
    return is_set(operation)
	|| is_set(duplex.operation)
	|| is_set(native_vlan.operation)
	|| is_set(system_name.operation)
	|| is_set(version.operation)
	|| is_set(vtp_domain.operation)
	|| (network_addresses !=  nullptr && is_set(network_addresses->operation))
	|| (protocol_hello_list !=  nullptr && is_set(protocol_hello_list->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_entity_path(Entity* ancestor) const
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

    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.operation)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vtp_domain.is_set || is_set(vtp_domain.operation)) leaf_name_data.push_back(vtp_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-addresses")
    {
        if(network_addresses != nullptr)
        {
            children["network-addresses"] = network_addresses.get();
        }
        else
        {
            network_addresses = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::NetworkAddresses>();
            network_addresses->parent = this;
            children["network-addresses"] = network_addresses.get();
        }
        return children.at("network-addresses");
    }

    if(child_yang_name == "protocol-hello-list")
    {
        if(protocol_hello_list != nullptr)
        {
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
        else
        {
            protocol_hello_list = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::ProtocolHelloList>();
            protocol_hello_list->parent = this;
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
        return children.at("protocol-hello-list");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::get_children()
{
    if(children.find("network-addresses") == children.end())
    {
        if(network_addresses != nullptr)
        {
            children["network-addresses"] = network_addresses.get();
        }
    }

    if(children.find("protocol-hello-list") == children.end())
    {
        if(protocol_hello_list != nullptr)
        {
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "system-name")
    {
        system_name = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain = value;
    }
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::CdpNeighbor()
    :
    	capabilities{YType::str, "capabilities"},
	 device_id{YType::str, "device-id"},
	 header_version{YType::uint8, "header-version"},
	 hold_time{YType::uint16, "hold-time"},
	 platform{YType::str, "platform"},
	 port_id{YType::str, "port-id"},
	 receiving_interface_name{YType::str, "receiving-interface-name"}
    	,
    detail(std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "cdp-neighbor"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::~CdpNeighbor()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::has_data() const
{
    return capabilities.is_set
	|| device_id.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| platform.is_set
	|| port_id.is_set
	|| receiving_interface_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities.operation)
	|| is_set(device_id.operation)
	|| is_set(header_version.operation)
	|| is_set(hold_time.operation)
	|| is_set(platform.operation)
	|| is_set(port_id.operation)
	|| is_set(receiving_interface_name.operation)
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_entity_path(Entity* ancestor) const
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

    if (capabilities.is_set || is_set(capabilities.operation)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.operation)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (platform.is_set || is_set(platform.operation)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (receiving_interface_name.is_set || is_set(receiving_interface_name.operation)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::Detail_>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities")
    {
        capabilities = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "header-version")
    {
        header_version = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "platform")
    {
        platform = value;
    }
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
    }
}

Cdp::Nodes::Node::Neighbors::Details::Detail::Detail()
    :
    	device_id{YType::str, "device-id"},
	 interface_name{YType::str, "interface-name"}
{
    yang_name = "detail"; yang_parent_name = "details";
}

Cdp::Nodes::Node::Neighbors::Details::Detail::~Detail()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set
	|| interface_name.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(device_id.operation)
	|| is_set(interface_name.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::Detail::get_entity_path(Entity* ancestor) const
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

    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-neighbor")
    {
        for(auto const & c : cdp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail::CdpNeighbor>();
        c->parent = this;
        cdp_neighbor.push_back(std::move(c));
        children[segment_path] = cdp_neighbor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::Detail::get_children()
{
    for (auto const & c : cdp_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Cdp::Nodes::Node::Neighbors::Details::Details()
{
    yang_name = "details"; yang_parent_name = "neighbors";
}

Cdp::Nodes::Node::Neighbors::Details::~Details()
{
}

bool Cdp::Nodes::Node::Neighbors::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Details::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Details::Detail>();
        c->parent = this;
        detail.push_back(std::move(c));
        children[segment_path] = detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Details::get_children()
{
    for (auto const & c : detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Details::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::Address()
    :
    	address_type{YType::enumeration, "address-type"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "cdp-addr-entry";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::~Address()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_entity_path(Entity* ancestor) const
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

    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-type")
    {
        address_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::CdpAddrEntry()
    :
    address(std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>())
{
    address->parent = this;
    children["address"] = address.get();

    yang_name = "cdp-addr-entry"; yang_parent_name = "network-addresses";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::~CdpAddrEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && is_set(address->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-addr-entry";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>();
            address->parent = this;
            children["address"] = address.get();
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_children()
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

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::NetworkAddresses()
{
    yang_name = "network-addresses"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::~NetworkAddresses()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-addr-entry")
    {
        for(auto const & c : cdp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry>();
        c->parent = this;
        cdp_addr_entry.push_back(std::move(c));
        children[segment_path] = cdp_addr_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::get_children()
{
    for (auto const & c : cdp_addr_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::CdpProtHelloEntry()
    :
    	hello_message{YType::str, "hello-message"}
{
    yang_name = "cdp-prot-hello-entry"; yang_parent_name = "protocol-hello-list";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::~CdpProtHelloEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_data() const
{
    return hello_message.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_message.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-prot-hello-entry";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_entity_path(Entity* ancestor) const
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

    if (hello_message.is_set || is_set(hello_message.operation)) leaf_name_data.push_back(hello_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-message")
    {
        hello_message = value;
    }
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::ProtocolHelloList()
{
    yang_name = "protocol-hello-list"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::~ProtocolHelloList()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::has_data() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::has_operation() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-hello-list";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-prot-hello-entry")
    {
        for(auto const & c : cdp_prot_hello_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry>();
        c->parent = this;
        cdp_prot_hello_entry.push_back(std::move(c));
        children[segment_path] = cdp_prot_hello_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::get_children()
{
    for (auto const & c : cdp_prot_hello_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::Detail()
    :
    	duplex{YType::enumeration, "duplex"},
	 native_vlan{YType::uint32, "native-vlan"},
	 system_name{YType::str, "system-name"},
	 version{YType::str, "version"},
	 vtp_domain{YType::str, "vtp-domain"}
    	,
    network_addresses(std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses>())
	,protocol_hello_list(std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList>())
{
    network_addresses->parent = this;
    children["network-addresses"] = network_addresses.get();

    protocol_hello_list->parent = this;
    children["protocol-hello-list"] = protocol_hello_list.get();

    yang_name = "detail"; yang_parent_name = "cdp-neighbor";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::~Detail()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::has_data() const
{
    return duplex.is_set
	|| native_vlan.is_set
	|| system_name.is_set
	|| version.is_set
	|| vtp_domain.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(duplex.operation)
	|| is_set(native_vlan.operation)
	|| is_set(system_name.operation)
	|| is_set(version.operation)
	|| is_set(vtp_domain.operation)
	|| (network_addresses !=  nullptr && is_set(network_addresses->operation))
	|| (protocol_hello_list !=  nullptr && is_set(protocol_hello_list->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_entity_path(Entity* ancestor) const
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

    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.operation)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vtp_domain.is_set || is_set(vtp_domain.operation)) leaf_name_data.push_back(vtp_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-addresses")
    {
        if(network_addresses != nullptr)
        {
            children["network-addresses"] = network_addresses.get();
        }
        else
        {
            network_addresses = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::NetworkAddresses>();
            network_addresses->parent = this;
            children["network-addresses"] = network_addresses.get();
        }
        return children.at("network-addresses");
    }

    if(child_yang_name == "protocol-hello-list")
    {
        if(protocol_hello_list != nullptr)
        {
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
        else
        {
            protocol_hello_list = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::ProtocolHelloList>();
            protocol_hello_list->parent = this;
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
        return children.at("protocol-hello-list");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::get_children()
{
    if(children.find("network-addresses") == children.end())
    {
        if(network_addresses != nullptr)
        {
            children["network-addresses"] = network_addresses.get();
        }
    }

    if(children.find("protocol-hello-list") == children.end())
    {
        if(protocol_hello_list != nullptr)
        {
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "system-name")
    {
        system_name = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain = value;
    }
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::CdpNeighbor()
    :
    	capabilities{YType::str, "capabilities"},
	 device_id{YType::str, "device-id"},
	 header_version{YType::uint8, "header-version"},
	 hold_time{YType::uint16, "hold-time"},
	 platform{YType::str, "platform"},
	 port_id{YType::str, "port-id"},
	 receiving_interface_name{YType::str, "receiving-interface-name"}
    	,
    detail(std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "cdp-neighbor"; yang_parent_name = "device";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::~CdpNeighbor()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::has_data() const
{
    return capabilities.is_set
	|| device_id.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| platform.is_set
	|| port_id.is_set
	|| receiving_interface_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities.operation)
	|| is_set(device_id.operation)
	|| is_set(header_version.operation)
	|| is_set(hold_time.operation)
	|| is_set(platform.operation)
	|| is_set(port_id.operation)
	|| is_set(receiving_interface_name.operation)
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_entity_path(Entity* ancestor) const
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

    if (capabilities.is_set || is_set(capabilities.operation)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.operation)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (platform.is_set || is_set(platform.operation)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (receiving_interface_name.is_set || is_set(receiving_interface_name.operation)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities")
    {
        capabilities = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "header-version")
    {
        header_version = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "platform")
    {
        platform = value;
    }
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
    }
}

Cdp::Nodes::Node::Neighbors::Devices::Device::Device()
    :
    	device_id{YType::str, "device-id"}
{
    yang_name = "device"; yang_parent_name = "devices";
}

Cdp::Nodes::Node::Neighbors::Devices::Device::~Device()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::has_data() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Devices::Device::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(device_id.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device" <<"[device-id='" <<device_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::Device::get_entity_path(Entity* ancestor) const
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

    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-neighbor")
    {
        for(auto const & c : cdp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device::CdpNeighbor>();
        c->parent = this;
        cdp_neighbor.push_back(std::move(c));
        children[segment_path] = cdp_neighbor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::Device::get_children()
{
    for (auto const & c : cdp_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::Device::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-id")
    {
        device_id = value;
    }
}

Cdp::Nodes::Node::Neighbors::Devices::Devices()
{
    yang_name = "devices"; yang_parent_name = "neighbors";
}

Cdp::Nodes::Node::Neighbors::Devices::~Devices()
{
}

bool Cdp::Nodes::Node::Neighbors::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Devices::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "device")
    {
        for(auto const & c : device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices::Device>();
        c->parent = this;
        device.push_back(std::move(c));
        children[segment_path] = device.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Devices::get_children()
{
    for (auto const & c : device)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Devices::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::Address()
    :
    	address_type{YType::enumeration, "address-type"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "cdp-addr-entry";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::~Address()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_entity_path(Entity* ancestor) const
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

    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-type")
    {
        address_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::CdpAddrEntry()
    :
    address(std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>())
{
    address->parent = this;
    children["address"] = address.get();

    yang_name = "cdp-addr-entry"; yang_parent_name = "network-addresses";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::~CdpAddrEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && is_set(address->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-addr-entry";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::Address>();
            address->parent = this;
            children["address"] = address.get();
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::get_children()
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

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::NetworkAddresses()
{
    yang_name = "network-addresses"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::~NetworkAddresses()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::has_data() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::has_operation() const
{
    for (std::size_t index=0; index<cdp_addr_entry.size(); index++)
    {
        if(cdp_addr_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-addresses";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-addr-entry")
    {
        for(auto const & c : cdp_addr_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::CdpAddrEntry>();
        c->parent = this;
        cdp_addr_entry.push_back(std::move(c));
        children[segment_path] = cdp_addr_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::get_children()
{
    for (auto const & c : cdp_addr_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::CdpProtHelloEntry()
    :
    	hello_message{YType::str, "hello-message"}
{
    yang_name = "cdp-prot-hello-entry"; yang_parent_name = "protocol-hello-list";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::~CdpProtHelloEntry()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_data() const
{
    return hello_message.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_message.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-prot-hello-entry";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_entity_path(Entity* ancestor) const
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

    if (hello_message.is_set || is_set(hello_message.operation)) leaf_name_data.push_back(hello_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-message")
    {
        hello_message = value;
    }
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::ProtocolHelloList()
{
    yang_name = "protocol-hello-list"; yang_parent_name = "detail";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::~ProtocolHelloList()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::has_data() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::has_operation() const
{
    for (std::size_t index=0; index<cdp_prot_hello_entry.size(); index++)
    {
        if(cdp_prot_hello_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-hello-list";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-prot-hello-entry")
    {
        for(auto const & c : cdp_prot_hello_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::CdpProtHelloEntry>();
        c->parent = this;
        cdp_prot_hello_entry.push_back(std::move(c));
        children[segment_path] = cdp_prot_hello_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::get_children()
{
    for (auto const & c : cdp_prot_hello_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::Detail()
    :
    	duplex{YType::enumeration, "duplex"},
	 native_vlan{YType::uint32, "native-vlan"},
	 system_name{YType::str, "system-name"},
	 version{YType::str, "version"},
	 vtp_domain{YType::str, "vtp-domain"}
    	,
    network_addresses(std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses>())
	,protocol_hello_list(std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList>())
{
    network_addresses->parent = this;
    children["network-addresses"] = network_addresses.get();

    protocol_hello_list->parent = this;
    children["protocol-hello-list"] = protocol_hello_list.get();

    yang_name = "detail"; yang_parent_name = "cdp-neighbor";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::~Detail()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::has_data() const
{
    return duplex.is_set
	|| native_vlan.is_set
	|| system_name.is_set
	|| version.is_set
	|| vtp_domain.is_set
	|| (network_addresses !=  nullptr && network_addresses->has_data())
	|| (protocol_hello_list !=  nullptr && protocol_hello_list->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(duplex.operation)
	|| is_set(native_vlan.operation)
	|| is_set(system_name.operation)
	|| is_set(version.operation)
	|| is_set(vtp_domain.operation)
	|| (network_addresses !=  nullptr && is_set(network_addresses->operation))
	|| (protocol_hello_list !=  nullptr && is_set(protocol_hello_list->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_entity_path(Entity* ancestor) const
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

    if (duplex.is_set || is_set(duplex.operation)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.operation)) leaf_name_data.push_back(system_name.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vtp_domain.is_set || is_set(vtp_domain.operation)) leaf_name_data.push_back(vtp_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-addresses")
    {
        if(network_addresses != nullptr)
        {
            children["network-addresses"] = network_addresses.get();
        }
        else
        {
            network_addresses = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::NetworkAddresses>();
            network_addresses->parent = this;
            children["network-addresses"] = network_addresses.get();
        }
        return children.at("network-addresses");
    }

    if(child_yang_name == "protocol-hello-list")
    {
        if(protocol_hello_list != nullptr)
        {
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
        else
        {
            protocol_hello_list = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::ProtocolHelloList>();
            protocol_hello_list->parent = this;
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
        return children.at("protocol-hello-list");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::get_children()
{
    if(children.find("network-addresses") == children.end())
    {
        if(network_addresses != nullptr)
        {
            children["network-addresses"] = network_addresses.get();
        }
    }

    if(children.find("protocol-hello-list") == children.end())
    {
        if(protocol_hello_list != nullptr)
        {
            children["protocol-hello-list"] = protocol_hello_list.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplex")
    {
        duplex = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "system-name")
    {
        system_name = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vtp-domain")
    {
        vtp_domain = value;
    }
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::CdpNeighbor()
    :
    	capabilities{YType::str, "capabilities"},
	 device_id{YType::str, "device-id"},
	 header_version{YType::uint8, "header-version"},
	 hold_time{YType::uint16, "hold-time"},
	 platform{YType::str, "platform"},
	 port_id{YType::str, "port-id"},
	 receiving_interface_name{YType::str, "receiving-interface-name"}
    	,
    detail(std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "cdp-neighbor"; yang_parent_name = "summary";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::~CdpNeighbor()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::has_data() const
{
    return capabilities.is_set
	|| device_id.is_set
	|| header_version.is_set
	|| hold_time.is_set
	|| platform.is_set
	|| port_id.is_set
	|| receiving_interface_name.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(capabilities.operation)
	|| is_set(device_id.operation)
	|| is_set(header_version.operation)
	|| is_set(hold_time.operation)
	|| is_set(platform.operation)
	|| is_set(port_id.operation)
	|| is_set(receiving_interface_name.operation)
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp-neighbor";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_entity_path(Entity* ancestor) const
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

    if (capabilities.is_set || is_set(capabilities.operation)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (header_version.is_set || is_set(header_version.operation)) leaf_name_data.push_back(header_version.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (platform.is_set || is_set(platform.operation)) leaf_name_data.push_back(platform.get_name_leafdata());
    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (receiving_interface_name.is_set || is_set(receiving_interface_name.operation)) leaf_name_data.push_back(receiving_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capabilities")
    {
        capabilities = value;
    }
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "header-version")
    {
        header_version = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "platform")
    {
        platform = value;
    }
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "receiving-interface-name")
    {
        receiving_interface_name = value;
    }
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::Summary()
    :
    	device_id{YType::str, "device-id"},
	 interface_name{YType::str, "interface-name"}
{
    yang_name = "summary"; yang_parent_name = "summaries";
}

Cdp::Nodes::Node::Neighbors::Summaries::Summary::~Summary()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::has_data() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_data())
            return true;
    }
    return device_id.is_set
	|| interface_name.is_set;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::Summary::has_operation() const
{
    for (std::size_t index=0; index<cdp_neighbor.size(); index++)
    {
        if(cdp_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(device_id.operation)
	|| is_set(interface_name.operation);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_entity_path(Entity* ancestor) const
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

    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cdp-neighbor")
    {
        for(auto const & c : cdp_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary::CdpNeighbor>();
        c->parent = this;
        cdp_neighbor.push_back(std::move(c));
        children[segment_path] = cdp_neighbor.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::Summary::get_children()
{
    for (auto const & c : cdp_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Cdp::Nodes::Node::Neighbors::Summaries::Summaries()
{
    yang_name = "summaries"; yang_parent_name = "neighbors";
}

Cdp::Nodes::Node::Neighbors::Summaries::~Summaries()
{
}

bool Cdp::Nodes::Node::Neighbors::Summaries::has_data() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Neighbors::Summaries::has_operation() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Neighbors::Summaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summaries";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::Summaries::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::Summaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        for(auto const & c : summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries::Summary>();
        c->parent = this;
        summary.push_back(std::move(c));
        children[segment_path] = summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::Summaries::get_children()
{
    for (auto const & c : summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::Summaries::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Neighbors::Neighbors()
    :
    details(std::make_unique<Cdp::Nodes::Node::Neighbors::Details>())
	,devices(std::make_unique<Cdp::Nodes::Node::Neighbors::Devices>())
	,summaries(std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries>())
{
    details->parent = this;
    children["details"] = details.get();

    devices->parent = this;
    children["devices"] = devices.get();

    summaries->parent = this;
    children["summaries"] = summaries.get();

    yang_name = "neighbors"; yang_parent_name = "node";
}

Cdp::Nodes::Node::Neighbors::~Neighbors()
{
}

bool Cdp::Nodes::Node::Neighbors::has_data() const
{
    return (details !=  nullptr && details->has_data())
	|| (devices !=  nullptr && devices->has_data())
	|| (summaries !=  nullptr && summaries->has_data());
}

bool Cdp::Nodes::Node::Neighbors::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation))
	|| (devices !=  nullptr && is_set(devices->operation))
	|| (summaries !=  nullptr && is_set(summaries->operation));
}

std::string Cdp::Nodes::Node::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Neighbors::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
        else
        {
            details = std::make_unique<Cdp::Nodes::Node::Neighbors::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    if(child_yang_name == "devices")
    {
        if(devices != nullptr)
        {
            children["devices"] = devices.get();
        }
        else
        {
            devices = std::make_unique<Cdp::Nodes::Node::Neighbors::Devices>();
            devices->parent = this;
            children["devices"] = devices.get();
        }
        return children.at("devices");
    }

    if(child_yang_name == "summaries")
    {
        if(summaries != nullptr)
        {
            children["summaries"] = summaries.get();
        }
        else
        {
            summaries = std::make_unique<Cdp::Nodes::Node::Neighbors::Summaries>();
            summaries->parent = this;
            children["summaries"] = summaries.get();
        }
        return children.at("summaries");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Neighbors::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    if(children.find("devices") == children.end())
    {
        if(devices != nullptr)
        {
            children["devices"] = devices.get();
        }
    }

    if(children.find("summaries") == children.end())
    {
        if(summaries != nullptr)
        {
            children["summaries"] = summaries.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Statistics::Statistics()
    :
    	bad_packet_errors{YType::uint32, "bad-packet-errors"},
	 checksum_errors{YType::uint32, "checksum-errors"},
	 encapsulation_errors{YType::uint32, "encapsulation-errors"},
	 header_errors{YType::uint32, "header-errors"},
	 header_version_errors{YType::uint32, "header-version-errors"},
	 open_file_errors{YType::uint32, "open-file-errors"},
	 out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
	 received_packets{YType::uint32, "received-packets"},
	 received_packets_v1{YType::uint32, "received-packets-v1"},
	 received_packets_v2{YType::uint32, "received-packets-v2"},
	 transmitted_packets{YType::uint32, "transmitted-packets"},
	 transmitted_packets_v1{YType::uint32, "transmitted-packets-v1"},
	 transmitted_packets_v2{YType::uint32, "transmitted-packets-v2"},
	 truncated_packet_errors{YType::uint32, "truncated-packet-errors"}
{
    yang_name = "statistics"; yang_parent_name = "node";
}

Cdp::Nodes::Node::Statistics::~Statistics()
{
}

bool Cdp::Nodes::Node::Statistics::has_data() const
{
    return bad_packet_errors.is_set
	|| checksum_errors.is_set
	|| encapsulation_errors.is_set
	|| header_errors.is_set
	|| header_version_errors.is_set
	|| open_file_errors.is_set
	|| out_of_memory_errors.is_set
	|| received_packets.is_set
	|| received_packets_v1.is_set
	|| received_packets_v2.is_set
	|| transmitted_packets.is_set
	|| transmitted_packets_v1.is_set
	|| transmitted_packets_v2.is_set
	|| truncated_packet_errors.is_set;
}

bool Cdp::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_packet_errors.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(encapsulation_errors.operation)
	|| is_set(header_errors.operation)
	|| is_set(header_version_errors.operation)
	|| is_set(open_file_errors.operation)
	|| is_set(out_of_memory_errors.operation)
	|| is_set(received_packets.operation)
	|| is_set(received_packets_v1.operation)
	|| is_set(received_packets_v2.operation)
	|| is_set(transmitted_packets.operation)
	|| is_set(transmitted_packets_v1.operation)
	|| is_set(transmitted_packets_v2.operation)
	|| is_set(truncated_packet_errors.operation);
}

std::string Cdp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
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

    if (bad_packet_errors.is_set || is_set(bad_packet_errors.operation)) leaf_name_data.push_back(bad_packet_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (encapsulation_errors.is_set || is_set(encapsulation_errors.operation)) leaf_name_data.push_back(encapsulation_errors.get_name_leafdata());
    if (header_errors.is_set || is_set(header_errors.operation)) leaf_name_data.push_back(header_errors.get_name_leafdata());
    if (header_version_errors.is_set || is_set(header_version_errors.operation)) leaf_name_data.push_back(header_version_errors.get_name_leafdata());
    if (open_file_errors.is_set || is_set(open_file_errors.operation)) leaf_name_data.push_back(open_file_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.operation)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (received_packets_v1.is_set || is_set(received_packets_v1.operation)) leaf_name_data.push_back(received_packets_v1.get_name_leafdata());
    if (received_packets_v2.is_set || is_set(received_packets_v2.operation)) leaf_name_data.push_back(received_packets_v2.get_name_leafdata());
    if (transmitted_packets.is_set || is_set(transmitted_packets.operation)) leaf_name_data.push_back(transmitted_packets.get_name_leafdata());
    if (transmitted_packets_v1.is_set || is_set(transmitted_packets_v1.operation)) leaf_name_data.push_back(transmitted_packets_v1.get_name_leafdata());
    if (transmitted_packets_v2.is_set || is_set(transmitted_packets_v2.operation)) leaf_name_data.push_back(transmitted_packets_v2.get_name_leafdata());
    if (truncated_packet_errors.is_set || is_set(truncated_packet_errors.operation)) leaf_name_data.push_back(truncated_packet_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Statistics::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-packet-errors")
    {
        bad_packet_errors = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "encapsulation-errors")
    {
        encapsulation_errors = value;
    }
    if(value_path == "header-errors")
    {
        header_errors = value;
    }
    if(value_path == "header-version-errors")
    {
        header_version_errors = value;
    }
    if(value_path == "open-file-errors")
    {
        open_file_errors = value;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "received-packets-v1")
    {
        received_packets_v1 = value;
    }
    if(value_path == "received-packets-v2")
    {
        received_packets_v2 = value;
    }
    if(value_path == "transmitted-packets")
    {
        transmitted_packets = value;
    }
    if(value_path == "transmitted-packets-v1")
    {
        transmitted_packets_v1 = value;
    }
    if(value_path == "transmitted-packets-v2")
    {
        transmitted_packets_v2 = value;
    }
    if(value_path == "truncated-packet-errors")
    {
        truncated_packet_errors = value;
    }
}

Cdp::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 basecaps_state{YType::uint32, "basecaps-state"},
	 cdp_protocol_state{YType::uint32, "cdp-protocol-state"},
	 interface_encaps{YType::str, "interface-encaps"},
	 interface_name_xr{YType::str, "interface-name-xr"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Cdp::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Cdp::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| basecaps_state.is_set
	|| cdp_protocol_state.is_set
	|| interface_encaps.is_set
	|| interface_name_xr.is_set;
}

bool Cdp::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(basecaps_state.operation)
	|| is_set(cdp_protocol_state.operation)
	|| is_set(interface_encaps.operation)
	|| is_set(interface_name_xr.operation);
}

std::string Cdp::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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
    if (basecaps_state.is_set || is_set(basecaps_state.operation)) leaf_name_data.push_back(basecaps_state.get_name_leafdata());
    if (cdp_protocol_state.is_set || is_set(cdp_protocol_state.operation)) leaf_name_data.push_back(cdp_protocol_state.get_name_leafdata());
    if (interface_encaps.is_set || is_set(interface_encaps.operation)) leaf_name_data.push_back(interface_encaps.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Cdp::Nodes::Node::Interfaces::Interface::get_children()
{
    return children;
}

void Cdp::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "basecaps-state")
    {
        basecaps_state = value;
    }
    if(value_path == "cdp-protocol-state")
    {
        cdp_protocol_state = value;
    }
    if(value_path == "interface-encaps")
    {
        interface_encaps = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

Cdp::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Cdp::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Cdp::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Cdp::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::Interfaces::get_children()
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

void Cdp::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    interfaces(std::make_unique<Cdp::Nodes::Node::Interfaces>())
	,neighbors(std::make_unique<Cdp::Nodes::Node::Neighbors>())
	,statistics(std::make_unique<Cdp::Nodes::Node::Statistics>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    neighbors->parent = this;
    children["neighbors"] = neighbors.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Cdp::Nodes::Node::~Node()
{
}

bool Cdp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Cdp::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (neighbors !=  nullptr && is_set(neighbors->operation))
	|| (statistics !=  nullptr && is_set(statistics->operation));
}

std::string Cdp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cdp-oper:cdp/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<Cdp::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors.get();
        }
        else
        {
            neighbors = std::make_unique<Cdp::Nodes::Node::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors.get();
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Cdp::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::Node::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void Cdp::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Cdp::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "cdp";
}

Cdp::Nodes::~Nodes()
{
}

bool Cdp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Cdp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Cdp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Cdp::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-cdp-oper:cdp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Cdp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Cdp::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Cdp::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Cdp::Cdp()
    :
    nodes(std::make_unique<Cdp::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "cdp"; yang_parent_name = "Cisco-IOS-XR-cdp-oper";
}

Cdp::~Cdp()
{
}

bool Cdp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Cdp::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-oper:cdp";

    return path_buffer.str();

}

EntityPath Cdp::get_entity_path(Entity* ancestor) const
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

Entity* Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Cdp::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Cdp::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Cdp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Cdp::clone_ptr()
{
    return std::make_unique<Cdp>();
}

const Enum::Value CdpDuplexEnum::cdp_dplx_none {0, "cdp-dplx-none"};
const Enum::Value CdpDuplexEnum::cdp_dplx_half {1, "cdp-dplx-half"};
const Enum::Value CdpDuplexEnum::cdp_dplx_full {2, "cdp-dplx-full"};

const Enum::Value CdpL3AddrProtocolEnum::ipv4 {0, "ipv4"};
const Enum::Value CdpL3AddrProtocolEnum::ipv6 {1, "ipv6"};


}
}

