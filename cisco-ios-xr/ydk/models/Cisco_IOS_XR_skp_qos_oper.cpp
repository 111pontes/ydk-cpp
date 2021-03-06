
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_skp_qos_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_skp_qos_oper {

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "bundle-input";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    children["interface-config-rate"] = interface_config_rate.get();

    interface_program_rate->parent = this;
    children["interface-program-rate"] = interface_program_rate.get();

    port_shaper_rate->parent = this;
    children["port-shaper-rate"] = port_shaper_rate.get();

    yang_name = "interface-parameters"; yang_parent_name = "bundle-input";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| (interface_config_rate !=  nullptr && is_set(interface_config_rate->operation))
	|| (interface_program_rate !=  nullptr && is_set(interface_program_rate->operation))
	|| (port_shaper_rate !=  nullptr && is_set(port_shaper_rate->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
        else
        {
            interface_config_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceConfigRate>();
            interface_config_rate->parent = this;
            children["interface-config-rate"] = interface_config_rate.get();
        }
        return children.at("interface-config-rate");
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
        else
        {
            interface_program_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::InterfaceProgramRate>();
            interface_program_rate->parent = this;
            children["interface-program-rate"] = interface_program_rate.get();
        }
        return children.at("interface-program-rate");
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        else
        {
            port_shaper_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::PortShaperRate>();
            port_shaper_rate->parent = this;
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        return children.at("port-shaper-rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::get_children()
{
    if(children.find("interface-config-rate") == children.end())
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
    }

    if(children.find("interface-program-rate") == children.end())
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
    }

    if(children.find("port-shaper-rate") == children.end())
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    	queue_id{YType::uint32, "queue-id"},
	 queue_type{YType::str, "queue-type"}
{
    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(queue_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_entity_path(Entity* ancestor) const
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

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
	,pir(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "committed-weight"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "programmed-wfq"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    	excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    children["committed-weight"] = committed_weight.get();

    programmed_wfq->parent = this;
    children["programmed-wfq"] = programmed_wfq.get();

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_weight.operation)
	|| (committed_weight !=  nullptr && is_set(committed_weight->operation))
	|| (programmed_wfq !=  nullptr && is_set(programmed_wfq->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "committed-weight")
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
        else
        {
            committed_weight = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
            committed_weight->parent = this;
            children["committed-weight"] = committed_weight.get();
        }
        return children.at("committed-weight");
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
        else
        {
            programmed_wfq = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
            programmed_wfq->parent = this;
            children["programmed-wfq"] = programmed_wfq.get();
        }
        return children.at("programmed-wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children()
{
    if(children.find("committed-weight") == children.end())
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
    }

    if(children.find("programmed-wfq") == children.end())
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    	policer_id{YType::uint32, "policer-id"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
	,cir(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_id.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_entity_path(Entity* ancestor) const
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

    if (policer_id.is_set || is_set(policer_id.operation)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "mark-only";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "mark-only"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    children["mark-only"] = mark_only.get();

    police_conform->parent = this;
    children["police-conform"] = police_conform.get();

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed.get();

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(operation)
	|| (mark_only !=  nullptr && is_set(mark_only->operation))
	|| (police_conform !=  nullptr && is_set(police_conform->operation))
	|| (police_exceed !=  nullptr && is_set(police_exceed->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-only")
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
        else
        {
            mark_only = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
            mark_only->parent = this;
            children["mark-only"] = mark_only.get();
        }
        return children.at("mark-only");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
        else
        {
            police_conform = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform.get();
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
        else
        {
            police_exceed = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed.get();
        }
        return children.at("police-exceed");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children()
{
    if(children.find("mark-only") == children.end())
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"}
    	,
    marking(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
	,police(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,queue(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
{
    marking->parent = this;
    children["marking"] = marking.get();

    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (marking !=  nullptr && marking->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| (marking !=  nullptr && is_set(marking->operation))
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "marking")
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
        else
        {
            marking = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
            marking->parent = this;
            children["marking"] = marking.get();
        }
        return children.at("marking");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::get_children()
{
    if(children.find("marking") == children.end())
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "bundle-input";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-pclass-st")
    {
        for(auto const & c : qos_show_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::BundleInput()
    :
    header(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header>())
	,interface_parameters(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "bundle-input"; yang_parent_name = "member-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::~BundleInput()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-input";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "bundle-output";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    children["interface-config-rate"] = interface_config_rate.get();

    interface_program_rate->parent = this;
    children["interface-program-rate"] = interface_program_rate.get();

    port_shaper_rate->parent = this;
    children["port-shaper-rate"] = port_shaper_rate.get();

    yang_name = "interface-parameters"; yang_parent_name = "bundle-output";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| (interface_config_rate !=  nullptr && is_set(interface_config_rate->operation))
	|| (interface_program_rate !=  nullptr && is_set(interface_program_rate->operation))
	|| (port_shaper_rate !=  nullptr && is_set(port_shaper_rate->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
        else
        {
            interface_config_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceConfigRate>();
            interface_config_rate->parent = this;
            children["interface-config-rate"] = interface_config_rate.get();
        }
        return children.at("interface-config-rate");
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
        else
        {
            interface_program_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::InterfaceProgramRate>();
            interface_program_rate->parent = this;
            children["interface-program-rate"] = interface_program_rate.get();
        }
        return children.at("interface-program-rate");
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        else
        {
            port_shaper_rate = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::PortShaperRate>();
            port_shaper_rate->parent = this;
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        return children.at("port-shaper-rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::get_children()
{
    if(children.find("interface-config-rate") == children.end())
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
    }

    if(children.find("interface-program-rate") == children.end())
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
    }

    if(children.find("port-shaper-rate") == children.end())
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    	queue_id{YType::uint32, "queue-id"},
	 queue_type{YType::str, "queue-type"}
{
    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(queue_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_entity_path(Entity* ancestor) const
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

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
	,pir(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "committed-weight"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "programmed-wfq"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    	excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    children["committed-weight"] = committed_weight.get();

    programmed_wfq->parent = this;
    children["programmed-wfq"] = programmed_wfq.get();

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_weight.operation)
	|| (committed_weight !=  nullptr && is_set(committed_weight->operation))
	|| (programmed_wfq !=  nullptr && is_set(programmed_wfq->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "committed-weight")
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
        else
        {
            committed_weight = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
            committed_weight->parent = this;
            children["committed-weight"] = committed_weight.get();
        }
        return children.at("committed-weight");
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
        else
        {
            programmed_wfq = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
            programmed_wfq->parent = this;
            children["programmed-wfq"] = programmed_wfq.get();
        }
        return children.at("programmed-wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children()
{
    if(children.find("committed-weight") == children.end())
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
    }

    if(children.find("programmed-wfq") == children.end())
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    	policer_id{YType::uint32, "policer-id"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
	,cir(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_id.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_entity_path(Entity* ancestor) const
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

    if (policer_id.is_set || is_set(policer_id.operation)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "mark-only";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "mark-only"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    children["mark-only"] = mark_only.get();

    police_conform->parent = this;
    children["police-conform"] = police_conform.get();

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed.get();

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(operation)
	|| (mark_only !=  nullptr && is_set(mark_only->operation))
	|| (police_conform !=  nullptr && is_set(police_conform->operation))
	|| (police_exceed !=  nullptr && is_set(police_exceed->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-only")
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
        else
        {
            mark_only = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
            mark_only->parent = this;
            children["mark-only"] = mark_only.get();
        }
        return children.at("mark-only");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
        else
        {
            police_conform = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform.get();
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
        else
        {
            police_exceed = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed.get();
        }
        return children.at("police-exceed");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children()
{
    if(children.find("mark-only") == children.end())
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"}
    	,
    marking(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
	,police(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,queue(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
{
    marking->parent = this;
    children["marking"] = marking.get();

    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (marking !=  nullptr && marking->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| (marking !=  nullptr && is_set(marking->operation))
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "marking")
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
        else
        {
            marking = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
            marking->parent = this;
            children["marking"] = marking.get();
        }
        return children.at("marking");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::get_children()
{
    if(children.find("marking") == children.end())
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "bundle-output";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-pclass-st")
    {
        for(auto const & c : qos_show_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::BundleOutput()
    :
    header(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header>())
	,interface_parameters(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "bundle-output"; yang_parent_name = "member-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::~BundleOutput()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-output";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    bundle_input(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>())
	,bundle_output(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>())
{
    bundle_input->parent = this;
    children["bundle-input"] = bundle_input.get();

    bundle_output->parent = this;
    children["bundle-output"] = bundle_output.get();

    yang_name = "member-interface"; yang_parent_name = "member-interfaces";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (bundle_input !=  nullptr && bundle_input->has_data())
	|| (bundle_output !=  nullptr && bundle_output->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (bundle_input !=  nullptr && is_set(bundle_input->operation))
	|| (bundle_output !=  nullptr && is_set(bundle_output->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-input")
    {
        if(bundle_input != nullptr)
        {
            children["bundle-input"] = bundle_input.get();
        }
        else
        {
            bundle_input = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>();
            bundle_input->parent = this;
            children["bundle-input"] = bundle_input.get();
        }
        return children.at("bundle-input");
    }

    if(child_yang_name == "bundle-output")
    {
        if(bundle_output != nullptr)
        {
            children["bundle-output"] = bundle_output.get();
        }
        else
        {
            bundle_output = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>();
            bundle_output->parent = this;
            children["bundle-output"] = bundle_output.get();
        }
        return children.at("bundle-output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_children()
{
    if(children.find("bundle-input") == children.end())
    {
        if(bundle_input != nullptr)
        {
            children["bundle-input"] = bundle_input.get();
        }
    }

    if(children.find("bundle-output") == children.end())
    {
        if(bundle_output != nullptr)
        {
            children["bundle-output"] = bundle_output.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterfaces()
{
    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(std::move(c));
        children[segment_path] = member_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_children()
{
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    member_interfaces(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
{
    member_interfaces->parent = this;
    children["member-interfaces"] = member_interfaces.get();

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    return interface_name.is_set
	|| (member_interfaces !=  nullptr && member_interfaces->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (member_interfaces !=  nullptr && is_set(member_interfaces->operation));
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces.get();
        }
        else
        {
            member_interfaces = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>();
            member_interfaces->parent = this;
            children["member-interfaces"] = member_interfaces.get();
        }
        return children.at("member-interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::get_children()
{
    if(children.find("member-interfaces") == children.end())
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "node";
}

PlatformQos::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(std::move(c));
        children[segment_path] = bundle_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::BundleInterfaces::get_children()
{
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Capability::Capability()
    :
    	max_bundle_members{YType::uint32, "max-bundle-members"},
	 max_classes_per_policy{YType::uint32, "max-classes-per-policy"},
	 max_classmap_name_length{YType::uint32, "max-classmap-name-length"},
	 max_marking_actions_per_class{YType::uint32, "max-marking-actions-per-class"},
	 max_matches_per_class{YType::uint32, "max-matches-per-class"},
	 max_police_actions_per_class{YType::uint32, "max-police-actions-per-class"},
	 max_policy_hierarchy{YType::uint32, "max-policy-hierarchy"},
	 max_policy_maps{YType::uint32, "max-policy-maps"},
	 max_policy_name_length{YType::uint32, "max-policy-name-length"}
{
    yang_name = "capability"; yang_parent_name = "node";
}

PlatformQos::Nodes::Node::Capability::~Capability()
{
}

bool PlatformQos::Nodes::Node::Capability::has_data() const
{
    return max_bundle_members.is_set
	|| max_classes_per_policy.is_set
	|| max_classmap_name_length.is_set
	|| max_marking_actions_per_class.is_set
	|| max_matches_per_class.is_set
	|| max_police_actions_per_class.is_set
	|| max_policy_hierarchy.is_set
	|| max_policy_maps.is_set
	|| max_policy_name_length.is_set;
}

bool PlatformQos::Nodes::Node::Capability::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bundle_members.operation)
	|| is_set(max_classes_per_policy.operation)
	|| is_set(max_classmap_name_length.operation)
	|| is_set(max_marking_actions_per_class.operation)
	|| is_set(max_matches_per_class.operation)
	|| is_set(max_police_actions_per_class.operation)
	|| is_set(max_policy_hierarchy.operation)
	|| is_set(max_policy_maps.operation)
	|| is_set(max_policy_name_length.operation);
}

std::string PlatformQos::Nodes::Node::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Capability::get_entity_path(Entity* ancestor) const
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

    if (max_bundle_members.is_set || is_set(max_bundle_members.operation)) leaf_name_data.push_back(max_bundle_members.get_name_leafdata());
    if (max_classes_per_policy.is_set || is_set(max_classes_per_policy.operation)) leaf_name_data.push_back(max_classes_per_policy.get_name_leafdata());
    if (max_classmap_name_length.is_set || is_set(max_classmap_name_length.operation)) leaf_name_data.push_back(max_classmap_name_length.get_name_leafdata());
    if (max_marking_actions_per_class.is_set || is_set(max_marking_actions_per_class.operation)) leaf_name_data.push_back(max_marking_actions_per_class.get_name_leafdata());
    if (max_matches_per_class.is_set || is_set(max_matches_per_class.operation)) leaf_name_data.push_back(max_matches_per_class.get_name_leafdata());
    if (max_police_actions_per_class.is_set || is_set(max_police_actions_per_class.operation)) leaf_name_data.push_back(max_police_actions_per_class.get_name_leafdata());
    if (max_policy_hierarchy.is_set || is_set(max_policy_hierarchy.operation)) leaf_name_data.push_back(max_policy_hierarchy.get_name_leafdata());
    if (max_policy_maps.is_set || is_set(max_policy_maps.operation)) leaf_name_data.push_back(max_policy_maps.get_name_leafdata());
    if (max_policy_name_length.is_set || is_set(max_policy_name_length.operation)) leaf_name_data.push_back(max_policy_name_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Capability::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Capability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-bundle-members")
    {
        max_bundle_members = value;
    }
    if(value_path == "max-classes-per-policy")
    {
        max_classes_per_policy = value;
    }
    if(value_path == "max-classmap-name-length")
    {
        max_classmap_name_length = value;
    }
    if(value_path == "max-marking-actions-per-class")
    {
        max_marking_actions_per_class = value;
    }
    if(value_path == "max-matches-per-class")
    {
        max_matches_per_class = value;
    }
    if(value_path == "max-police-actions-per-class")
    {
        max_police_actions_per_class = value;
    }
    if(value_path == "max-policy-hierarchy")
    {
        max_policy_hierarchy = value;
    }
    if(value_path == "max-policy-maps")
    {
        max_policy_maps = value;
    }
    if(value_path == "max-policy-name-length")
    {
        max_policy_name_length = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "output";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    children["interface-config-rate"] = interface_config_rate.get();

    interface_program_rate->parent = this;
    children["interface-program-rate"] = interface_program_rate.get();

    port_shaper_rate->parent = this;
    children["port-shaper-rate"] = port_shaper_rate.get();

    yang_name = "interface-parameters"; yang_parent_name = "output";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| (interface_config_rate !=  nullptr && is_set(interface_config_rate->operation))
	|| (interface_program_rate !=  nullptr && is_set(interface_program_rate->operation))
	|| (port_shaper_rate !=  nullptr && is_set(port_shaper_rate->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
        else
        {
            interface_config_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceConfigRate>();
            interface_config_rate->parent = this;
            children["interface-config-rate"] = interface_config_rate.get();
        }
        return children.at("interface-config-rate");
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
        else
        {
            interface_program_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::InterfaceProgramRate>();
            interface_program_rate->parent = this;
            children["interface-program-rate"] = interface_program_rate.get();
        }
        return children.at("interface-program-rate");
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        else
        {
            port_shaper_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::PortShaperRate>();
            port_shaper_rate->parent = this;
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        return children.at("port-shaper-rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::get_children()
{
    if(children.find("interface-config-rate") == children.end())
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
    }

    if(children.find("interface-program-rate") == children.end())
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
    }

    if(children.find("port-shaper-rate") == children.end())
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    	queue_id{YType::uint32, "queue-id"},
	 queue_type{YType::str, "queue-type"}
{
    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(queue_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_entity_path(Entity* ancestor) const
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

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
	,pir(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "committed-weight"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "programmed-wfq"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    	excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    children["committed-weight"] = committed_weight.get();

    programmed_wfq->parent = this;
    children["programmed-wfq"] = programmed_wfq.get();

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_weight.operation)
	|| (committed_weight !=  nullptr && is_set(committed_weight->operation))
	|| (programmed_wfq !=  nullptr && is_set(programmed_wfq->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "committed-weight")
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
        else
        {
            committed_weight = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
            committed_weight->parent = this;
            children["committed-weight"] = committed_weight.get();
        }
        return children.at("committed-weight");
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
        else
        {
            programmed_wfq = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
            programmed_wfq->parent = this;
            children["programmed-wfq"] = programmed_wfq.get();
        }
        return children.at("programmed-wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children()
{
    if(children.find("committed-weight") == children.end())
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
    }

    if(children.find("programmed-wfq") == children.end())
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    	policer_id{YType::uint32, "policer-id"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
	,cir(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_id.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_entity_path(Entity* ancestor) const
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

    if (policer_id.is_set || is_set(policer_id.operation)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "mark-only";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "mark-only"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    children["mark-only"] = mark_only.get();

    police_conform->parent = this;
    children["police-conform"] = police_conform.get();

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed.get();

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(operation)
	|| (mark_only !=  nullptr && is_set(mark_only->operation))
	|| (police_conform !=  nullptr && is_set(police_conform->operation))
	|| (police_exceed !=  nullptr && is_set(police_exceed->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-only")
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
        else
        {
            mark_only = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
            mark_only->parent = this;
            children["mark-only"] = mark_only.get();
        }
        return children.at("mark-only");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
        else
        {
            police_conform = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform.get();
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
        else
        {
            police_exceed = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed.get();
        }
        return children.at("police-exceed");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children()
{
    if(children.find("mark-only") == children.end())
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"}
    	,
    marking(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
	,police(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,queue(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
{
    marking->parent = this;
    children["marking"] = marking.get();

    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (marking !=  nullptr && marking->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| (marking !=  nullptr && is_set(marking->operation))
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "marking")
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
        else
        {
            marking = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
            marking->parent = this;
            children["marking"] = marking.get();
        }
        return children.at("marking");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::get_children()
{
    if(children.find("marking") == children.end())
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "output";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-pclass-st")
    {
        for(auto const & c : qos_show_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::Output()
    :
    header(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header>())
	,interface_parameters(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "output"; yang_parent_name = "interface";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Output::~Output()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Output::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Output::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Output::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "input";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::InterfaceConfigRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-config-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::~InterfaceConfigRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-config-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::InterfaceProgramRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "interface-program-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::~InterfaceProgramRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-program-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceParameters()
    :
    interface_config_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate>())
	,interface_program_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate>())
	,port_shaper_rate(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate>())
{
    interface_config_rate->parent = this;
    children["interface-config-rate"] = interface_config_rate.get();

    interface_program_rate->parent = this;
    children["interface-program-rate"] = interface_program_rate.get();

    port_shaper_rate->parent = this;
    children["port-shaper-rate"] = port_shaper_rate.get();

    yang_name = "interface-parameters"; yang_parent_name = "input";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::has_data() const
{
    return (interface_config_rate !=  nullptr && interface_config_rate->has_data())
	|| (interface_program_rate !=  nullptr && interface_program_rate->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| (interface_config_rate !=  nullptr && is_set(interface_config_rate->operation))
	|| (interface_program_rate !=  nullptr && is_set(interface_program_rate->operation))
	|| (port_shaper_rate !=  nullptr && is_set(port_shaper_rate->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-config-rate")
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
        else
        {
            interface_config_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceConfigRate>();
            interface_config_rate->parent = this;
            children["interface-config-rate"] = interface_config_rate.get();
        }
        return children.at("interface-config-rate");
    }

    if(child_yang_name == "interface-program-rate")
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
        else
        {
            interface_program_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::InterfaceProgramRate>();
            interface_program_rate->parent = this;
            children["interface-program-rate"] = interface_program_rate.get();
        }
        return children.at("interface-program-rate");
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        else
        {
            port_shaper_rate = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::PortShaperRate>();
            port_shaper_rate->parent = this;
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
        return children.at("port-shaper-rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::get_children()
{
    if(children.find("interface-config-rate") == children.end())
    {
        if(interface_config_rate != nullptr)
        {
            children["interface-config-rate"] = interface_config_rate.get();
        }
    }

    if(children.find("interface-program-rate") == children.end())
    {
        if(interface_program_rate != nullptr)
        {
            children["interface-program-rate"] = interface_program_rate.get();
        }
    }

    if(children.find("port-shaper-rate") == children.end())
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::Queue()
    :
    	queue_id{YType::uint32, "queue-id"},
	 queue_type{YType::str, "queue-type"}
{
    yang_name = "queue"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_data() const
{
    return queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(queue_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_entity_path(Entity* ancestor) const
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

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>())
	,pir(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::CommittedWeight()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "committed-weight"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::~CommittedWeight()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "committed-weight";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "programmed-wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::ProgrammedWfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "programmed-wfq"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::~ProgrammedWfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::Wfq()
    :
    	excess_weight{YType::uint16, "excess-weight"}
    	,
    committed_weight(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>())
	,programmed_wfq(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>())
{
    committed_weight->parent = this;
    children["committed-weight"] = committed_weight.get();

    programmed_wfq->parent = this;
    children["programmed-wfq"] = programmed_wfq.get();

    yang_name = "wfq"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_data() const
{
    return excess_weight.is_set
	|| (committed_weight !=  nullptr && committed_weight->has_data())
	|| (programmed_wfq !=  nullptr && programmed_wfq->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_weight.operation)
	|| (committed_weight !=  nullptr && is_set(committed_weight->operation))
	|| (programmed_wfq !=  nullptr && is_set(programmed_wfq->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "committed-weight")
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
        else
        {
            committed_weight = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::CommittedWeight>();
            committed_weight->parent = this;
            children["committed-weight"] = committed_weight.get();
        }
        return children.at("committed-weight");
    }

    if(child_yang_name == "programmed-wfq")
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
        else
        {
            programmed_wfq = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::ProgrammedWfq>();
            programmed_wfq->parent = this;
            children["programmed-wfq"] = programmed_wfq.get();
        }
        return children.at("programmed-wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::get_children()
{
    if(children.find("committed-weight") == children.end())
    {
        if(committed_weight != nullptr)
        {
            children["committed-weight"] = committed_weight.get();
        }
    }

    if(children.find("programmed-wfq") == children.end())
    {
        if(programmed_wfq != nullptr)
        {
            children["programmed-wfq"] = programmed_wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Police()
    :
    	policer_id{YType::uint32, "policer-id"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>())
	,cir(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_data() const
{
    return policer_id.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_id.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_entity_path(Entity* ancestor) const
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

    if (policer_id.is_set || is_set(policer_id.operation)) leaf_name_data.push_back(policer_id.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-id")
    {
        policer_id = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "mark-only";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkOnly()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "mark-only"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::~MarkOnly()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-only";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::PoliceConform()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::MarkDetail()
    :
    	action_opcode{YType::enumeration, "action-opcode"},
	 mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
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

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::PoliceExceed()
    :
    	action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "marking";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_entity_path(Entity* ancestor) const
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

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::Marking()
    :
    mark_only(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>())
	,police_conform(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>())
	,police_exceed(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>())
{
    mark_only->parent = this;
    children["mark-only"] = mark_only.get();

    police_conform->parent = this;
    children["police-conform"] = police_conform.get();

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed.get();

    yang_name = "marking"; yang_parent_name = "qos-show-pclass-st";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::~Marking()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_data() const
{
    return (mark_only !=  nullptr && mark_only->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::has_operation() const
{
    return is_set(operation)
	|| (mark_only !=  nullptr && is_set(mark_only->operation))
	|| (police_conform !=  nullptr && is_set(police_conform->operation))
	|| (police_exceed !=  nullptr && is_set(police_exceed->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-only")
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
        else
        {
            mark_only = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::MarkOnly>();
            mark_only->parent = this;
            children["mark-only"] = mark_only.get();
        }
        return children.at("mark-only");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
        else
        {
            police_conform = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform.get();
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
        else
        {
            police_exceed = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed.get();
        }
        return children.at("police-exceed");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::get_children()
{
    if(children.find("mark-only") == children.end())
    {
        if(mark_only != nullptr)
        {
            children["mark-only"] = mark_only.get();
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform.get();
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::QosShowPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"}
    	,
    marking(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking>())
	,police(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police>())
	,queue(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue>())
	,shape(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape>())
	,wfq(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>())
{
    marking->parent = this;
    children["marking"] = marking.get();

    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "qos-show-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::~QosShowPclassSt()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| (marking !=  nullptr && marking->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| (marking !=  nullptr && is_set(marking->operation))
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "marking")
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
        else
        {
            marking = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Marking>();
            marking->parent = this;
            children["marking"] = marking.get();
        }
        return children.at("marking");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::get_children()
{
    if(children.find("marking") == children.end())
    {
        if(marking != nullptr)
        {
            children["marking"] = marking.get();
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "input";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_pclass_st.size(); index++)
    {
        if(qos_show_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-pclass-st")
    {
        for(auto const & c : qos_show_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::QosShowPclassSt>();
        c->parent = this;
        qos_show_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::Input()
    :
    header(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header>())
	,interface_parameters(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "input"; yang_parent_name = "interface";
}

PlatformQos::Nodes::Node::Interfaces::Interface::Input::~Input()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::Input::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::Input::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::Input::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    input(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input>())
	,output(std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output>())
{
    input->parent = this;
    children["input"] = input.get();

    output->parent = this;
    children["output"] = output.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

PlatformQos::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool PlatformQos::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (input !=  nullptr && is_set(input->operation))
	|| (output !=  nullptr && is_set(output->operation));
}

std::string PlatformQos::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::Interface::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQos::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

PlatformQos::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PlatformQos::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformQos::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::Interfaces::get_children()
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

void PlatformQos::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces>())
	,capability(std::make_unique<PlatformQos::Nodes::Node::Capability>())
	,interfaces(std::make_unique<PlatformQos::Nodes::Node::Interfaces>())
{
    bundle_interfaces->parent = this;
    children["bundle-interfaces"] = bundle_interfaces.get();

    capability->parent = this;
    children["capability"] = capability.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

PlatformQos::Nodes::Node::~Node()
{
}

bool PlatformQos::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PlatformQos::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (bundle_interfaces !=  nullptr && is_set(bundle_interfaces->operation))
	|| (capability !=  nullptr && is_set(capability->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string PlatformQos::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos/nodes/" << get_segment_path();
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

Entity* PlatformQos::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        else
        {
            bundle_interfaces = std::make_unique<PlatformQos::Nodes::Node::BundleInterfaces>();
            bundle_interfaces->parent = this;
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        return children.at("bundle-interfaces");
    }

    if(child_yang_name == "capability")
    {
        if(capability != nullptr)
        {
            children["capability"] = capability.get();
        }
        else
        {
            capability = std::make_unique<PlatformQos::Nodes::Node::Capability>();
            capability->parent = this;
            children["capability"] = capability.get();
        }
        return children.at("capability");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<PlatformQos::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::Node::get_children()
{
    if(children.find("bundle-interfaces") == children.end())
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
    }

    if(children.find("capability") == children.end())
    {
        if(capability != nullptr)
        {
            children["capability"] = capability.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PlatformQos::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "platform-qos";
}

PlatformQos::Nodes::~Nodes()
{
}

bool PlatformQos::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQos::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformQos::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::Nodes::get_children()
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

void PlatformQos::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::PlatformQos()
    :
    nodes(std::make_unique<PlatformQos::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "platform-qos"; yang_parent_name = "Cisco-IOS-XR-skp-qos-oper";
}

PlatformQos::~PlatformQos()
{
}

bool PlatformQos::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformQos::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string PlatformQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos";

    return path_buffer.str();

}

EntityPath PlatformQos::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<PlatformQos::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQos::get_children()
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

void PlatformQos::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PlatformQos::clone_ptr()
{
    return std::make_unique<PlatformQos>();
}
PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::InterfaceParameters()
    :
    	bundle_id{YType::uint16, "bundle-id"},
	 hierarchical_depth{YType::uint8, "hierarchical-depth"},
	 interface_handle{YType::str, "interface-handle"},
	 interface_rate{YType::uint32, "interface-rate"},
	 interface_type{YType::str, "interface-type"},
	 policy_map_id{YType::uint16, "policy-map-id"},
	 policy_name{YType::str, "policy-name"},
	 port{YType::uint32, "port"},
	 port_shaper_rate{YType::uint32, "port-shaper-rate"},
	 qos_interface_handle{YType::uint64, "qos-interface-handle"},
	 uidb_index{YType::uint16, "uidb-index"},
	 under_line_interface_handle{YType::str, "under-line-interface-handle"}
{
    yang_name = "interface-parameters"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::has_data() const
{
    return bundle_id.is_set
	|| hierarchical_depth.is_set
	|| interface_handle.is_set
	|| interface_rate.is_set
	|| interface_type.is_set
	|| policy_map_id.is_set
	|| policy_name.is_set
	|| port.is_set
	|| port_shaper_rate.is_set
	|| qos_interface_handle.is_set
	|| uidb_index.is_set
	|| under_line_interface_handle.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_id.operation)
	|| is_set(hierarchical_depth.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_rate.operation)
	|| is_set(interface_type.operation)
	|| is_set(policy_map_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(port.operation)
	|| is_set(port_shaper_rate.operation)
	|| is_set(qos_interface_handle.operation)
	|| is_set(uidb_index.operation)
	|| is_set(under_line_interface_handle.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

    if (bundle_id.is_set || is_set(bundle_id.operation)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.operation)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.operation)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.operation)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.operation)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.operation)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.operation)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.operation)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    	color_aware{YType::boolean, "color-aware"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
	,cir(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    return color_aware.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(color_aware.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_entity_path(Entity* ancestor) const
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

    if (color_aware.is_set || is_set(color_aware.operation)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
	,pir(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "wfq"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    	node_config{YType::str, "node-config"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
	,shape(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
	,wfq(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    children["police"] = police.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(node_config.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_entity_path(Entity* ancestor) const
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

    if (node_config.is_set || is_set(node_config.operation)) leaf_name_data.push_back(node_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-config")
    {
        node_config = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    	commit_tx{YType::uint32, "commit-tx"},
	 drop{YType::uint32, "drop"},
	 excess_tx{YType::uint32, "excess-tx"},
	 queue_id{YType::uint32, "queue-id"}
{
    yang_name = "queue"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    return commit_tx.is_set
	|| drop.is_set
	|| excess_tx.is_set
	|| queue_id.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(commit_tx.operation)
	|| is_set(drop.operation)
	|| is_set(excess_tx.operation)
	|| is_set(queue_id.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_entity_path(Entity* ancestor) const
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

    if (commit_tx.is_set || is_set(commit_tx.operation)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.operation)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "commit-tx")
    {
        commit_tx = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    	conform{YType::uint32, "conform"},
	 exceed{YType::uint32, "exceed"},
	 token_bucket_id{YType::uint32, "token-bucket-id"},
	 violate{YType::uint32, "violate"}
{
    yang_name = "police"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    return conform.is_set
	|| exceed.is_set
	|| token_bucket_id.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(conform.operation)
	|| is_set(exceed.operation)
	|| is_set(token_bucket_id.operation)
	|| is_set(violate.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_entity_path(Entity* ancestor) const
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

    if (conform.is_set || is_set(conform.operation)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.operation)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (token_bucket_id.is_set || is_set(token_bucket_id.operation)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (violate.is_set || is_set(violate.operation)) leaf_name_data.push_back(violate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform")
    {
        conform = value;
    }
    if(value_path == "exceed")
    {
        exceed = value;
    }
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
    }
    if(value_path == "violate")
    {
        violate = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    	stats_id{YType::uint32, "stats-id"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
	,queue(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
{
    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    return stats_id.is_set
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(operation)
	|| is_set(stats_id.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_entity_path(Entity* ancestor) const
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

    if (stats_id.is_set || is_set(stats_id.operation)) leaf_name_data.push_back(stats_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"},
	 index_{YType::uint16, "index"},
	 node_flags{YType::str, "node-flags"},
	 policy_name{YType::str, "policy-name"},
	 stats_flags{YType::str, "stats-flags"}
    	,
    config(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
	,result(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    children["config"] = config.get();

    result->parent = this;
    children["result"] = result.get();

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| index_.is_set
	|| node_flags.is_set
	|| policy_name.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| is_set(index_.operation)
	|| is_set(node_flags.operation)
	|| is_set(policy_name.operation)
	|| is_set(stats_flags.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (result !=  nullptr && is_set(result->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.operation)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.operation)) leaf_name_data.push_back(stats_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "result")
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
        else
        {
            result = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
            result->parent = this;
            children["result"] = result.get();
        }
        return children.at("result");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("result") == children.end())
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        for(auto const & c : qos_show_ea_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        c->parent = this;
        qos_show_ea_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_ea_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_ea_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Details()
    :
    header(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header>())
	,interface_parameters(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "details"; yang_parent_name = "bundle-output";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::BundleOutput()
    :
    details(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "bundle-output"; yang_parent_name = "member-interface";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::~BundleOutput()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-output";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            details = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::InterfaceParameters()
    :
    	bundle_id{YType::uint16, "bundle-id"},
	 hierarchical_depth{YType::uint8, "hierarchical-depth"},
	 interface_handle{YType::str, "interface-handle"},
	 interface_rate{YType::uint32, "interface-rate"},
	 interface_type{YType::str, "interface-type"},
	 policy_map_id{YType::uint16, "policy-map-id"},
	 policy_name{YType::str, "policy-name"},
	 port{YType::uint32, "port"},
	 port_shaper_rate{YType::uint32, "port-shaper-rate"},
	 qos_interface_handle{YType::uint64, "qos-interface-handle"},
	 uidb_index{YType::uint16, "uidb-index"},
	 under_line_interface_handle{YType::str, "under-line-interface-handle"}
{
    yang_name = "interface-parameters"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::has_data() const
{
    return bundle_id.is_set
	|| hierarchical_depth.is_set
	|| interface_handle.is_set
	|| interface_rate.is_set
	|| interface_type.is_set
	|| policy_map_id.is_set
	|| policy_name.is_set
	|| port.is_set
	|| port_shaper_rate.is_set
	|| qos_interface_handle.is_set
	|| uidb_index.is_set
	|| under_line_interface_handle.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_id.operation)
	|| is_set(hierarchical_depth.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_rate.operation)
	|| is_set(interface_type.operation)
	|| is_set(policy_map_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(port.operation)
	|| is_set(port_shaper_rate.operation)
	|| is_set(qos_interface_handle.operation)
	|| is_set(uidb_index.operation)
	|| is_set(under_line_interface_handle.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

    if (bundle_id.is_set || is_set(bundle_id.operation)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.operation)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.operation)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.operation)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.operation)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.operation)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.operation)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.operation)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    	color_aware{YType::boolean, "color-aware"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
	,cir(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    return color_aware.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(color_aware.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_entity_path(Entity* ancestor) const
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

    if (color_aware.is_set || is_set(color_aware.operation)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
	,pir(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "wfq"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    	node_config{YType::str, "node-config"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
	,shape(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
	,wfq(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    children["police"] = police.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(node_config.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_entity_path(Entity* ancestor) const
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

    if (node_config.is_set || is_set(node_config.operation)) leaf_name_data.push_back(node_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-config")
    {
        node_config = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    	commit_tx{YType::uint32, "commit-tx"},
	 drop{YType::uint32, "drop"},
	 excess_tx{YType::uint32, "excess-tx"},
	 queue_id{YType::uint32, "queue-id"}
{
    yang_name = "queue"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    return commit_tx.is_set
	|| drop.is_set
	|| excess_tx.is_set
	|| queue_id.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(commit_tx.operation)
	|| is_set(drop.operation)
	|| is_set(excess_tx.operation)
	|| is_set(queue_id.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_entity_path(Entity* ancestor) const
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

    if (commit_tx.is_set || is_set(commit_tx.operation)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.operation)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "commit-tx")
    {
        commit_tx = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    	conform{YType::uint32, "conform"},
	 exceed{YType::uint32, "exceed"},
	 token_bucket_id{YType::uint32, "token-bucket-id"},
	 violate{YType::uint32, "violate"}
{
    yang_name = "police"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    return conform.is_set
	|| exceed.is_set
	|| token_bucket_id.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(conform.operation)
	|| is_set(exceed.operation)
	|| is_set(token_bucket_id.operation)
	|| is_set(violate.operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_entity_path(Entity* ancestor) const
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

    if (conform.is_set || is_set(conform.operation)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.operation)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (token_bucket_id.is_set || is_set(token_bucket_id.operation)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (violate.is_set || is_set(violate.operation)) leaf_name_data.push_back(violate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform")
    {
        conform = value;
    }
    if(value_path == "exceed")
    {
        exceed = value;
    }
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
    }
    if(value_path == "violate")
    {
        violate = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    	stats_id{YType::uint32, "stats-id"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
	,queue(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
{
    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    return stats_id.is_set
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(operation)
	|| is_set(stats_id.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_entity_path(Entity* ancestor) const
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

    if (stats_id.is_set || is_set(stats_id.operation)) leaf_name_data.push_back(stats_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"},
	 index_{YType::uint16, "index"},
	 node_flags{YType::str, "node-flags"},
	 policy_name{YType::str, "policy-name"},
	 stats_flags{YType::str, "stats-flags"}
    	,
    config(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
	,result(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    children["config"] = config.get();

    result->parent = this;
    children["result"] = result.get();

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| index_.is_set
	|| node_flags.is_set
	|| policy_name.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| is_set(index_.operation)
	|| is_set(node_flags.operation)
	|| is_set(policy_name.operation)
	|| is_set(stats_flags.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (result !=  nullptr && is_set(result->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.operation)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.operation)) leaf_name_data.push_back(stats_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "result")
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
        else
        {
            result = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
            result->parent = this;
            children["result"] = result.get();
        }
        return children.at("result");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("result") == children.end())
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        for(auto const & c : qos_show_ea_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        c->parent = this;
        qos_show_ea_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_ea_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_ea_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Details()
    :
    header(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header>())
	,interface_parameters(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "details"; yang_parent_name = "bundle-input";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::BundleInput()
    :
    details(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "bundle-input"; yang_parent_name = "member-interface";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::~BundleInput()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-input";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            details = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::MemberInterface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    bundle_input(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>())
	,bundle_output(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>())
{
    bundle_input->parent = this;
    children["bundle-input"] = bundle_input.get();

    bundle_output->parent = this;
    children["bundle-output"] = bundle_output.get();

    yang_name = "member-interface"; yang_parent_name = "member-interfaces";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (bundle_input !=  nullptr && bundle_input->has_data())
	|| (bundle_output !=  nullptr && bundle_output->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (bundle_input !=  nullptr && is_set(bundle_input->operation))
	|| (bundle_output !=  nullptr && is_set(bundle_output->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-input")
    {
        if(bundle_input != nullptr)
        {
            children["bundle-input"] = bundle_input.get();
        }
        else
        {
            bundle_input = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleInput>();
            bundle_input->parent = this;
            children["bundle-input"] = bundle_input.get();
        }
        return children.at("bundle-input");
    }

    if(child_yang_name == "bundle-output")
    {
        if(bundle_output != nullptr)
        {
            children["bundle-output"] = bundle_output.get();
        }
        else
        {
            bundle_output = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput>();
            bundle_output->parent = this;
            children["bundle-output"] = bundle_output.get();
        }
        return children.at("bundle-output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::get_children()
{
    if(children.find("bundle-input") == children.end())
    {
        if(bundle_input != nullptr)
        {
            children["bundle-input"] = bundle_input.get();
        }
    }

    if(children.find("bundle-output") == children.end())
    {
        if(bundle_output != nullptr)
        {
            children["bundle-output"] = bundle_output.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterfaces()
{
    yang_name = "member-interfaces"; yang_parent_name = "bundle-interface";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(std::move(c));
        children[segment_path] = member_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::get_children()
{
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    member_interfaces(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>())
{
    member_interfaces->parent = this;
    children["member-interfaces"] = member_interfaces.get();

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    return interface_name.is_set
	|| (member_interfaces !=  nullptr && member_interfaces->has_data());
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (member_interfaces !=  nullptr && is_set(member_interfaces->operation));
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces.get();
        }
        else
        {
            member_interfaces = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces>();
            member_interfaces->parent = this;
            children["member-interfaces"] = member_interfaces.get();
        }
        return children.at("member-interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::get_children()
{
    if(children.find("member-interfaces") == children.end())
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "node";
}

PlatformQosEa::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::BundleInterfaces::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(std::move(c));
        children[segment_path] = bundle_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::BundleInterfaces::get_children()
{
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::InterfaceParameters()
    :
    	bundle_id{YType::uint16, "bundle-id"},
	 hierarchical_depth{YType::uint8, "hierarchical-depth"},
	 interface_handle{YType::str, "interface-handle"},
	 interface_rate{YType::uint32, "interface-rate"},
	 interface_type{YType::str, "interface-type"},
	 policy_map_id{YType::uint16, "policy-map-id"},
	 policy_name{YType::str, "policy-name"},
	 port{YType::uint32, "port"},
	 port_shaper_rate{YType::uint32, "port-shaper-rate"},
	 qos_interface_handle{YType::uint64, "qos-interface-handle"},
	 uidb_index{YType::uint16, "uidb-index"},
	 under_line_interface_handle{YType::str, "under-line-interface-handle"}
{
    yang_name = "interface-parameters"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::has_data() const
{
    return bundle_id.is_set
	|| hierarchical_depth.is_set
	|| interface_handle.is_set
	|| interface_rate.is_set
	|| interface_type.is_set
	|| policy_map_id.is_set
	|| policy_name.is_set
	|| port.is_set
	|| port_shaper_rate.is_set
	|| qos_interface_handle.is_set
	|| uidb_index.is_set
	|| under_line_interface_handle.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_id.operation)
	|| is_set(hierarchical_depth.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_rate.operation)
	|| is_set(interface_type.operation)
	|| is_set(policy_map_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(port.operation)
	|| is_set(port_shaper_rate.operation)
	|| is_set(qos_interface_handle.operation)
	|| is_set(uidb_index.operation)
	|| is_set(under_line_interface_handle.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

    if (bundle_id.is_set || is_set(bundle_id.operation)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.operation)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.operation)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.operation)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.operation)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.operation)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.operation)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.operation)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    	color_aware{YType::boolean, "color-aware"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
	,cir(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    return color_aware.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(color_aware.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_entity_path(Entity* ancestor) const
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

    if (color_aware.is_set || is_set(color_aware.operation)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
	,pir(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "wfq"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    	node_config{YType::str, "node-config"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
	,shape(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
	,wfq(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    children["police"] = police.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(node_config.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_entity_path(Entity* ancestor) const
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

    if (node_config.is_set || is_set(node_config.operation)) leaf_name_data.push_back(node_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-config")
    {
        node_config = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    	commit_tx{YType::uint32, "commit-tx"},
	 drop{YType::uint32, "drop"},
	 excess_tx{YType::uint32, "excess-tx"},
	 queue_id{YType::uint32, "queue-id"}
{
    yang_name = "queue"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    return commit_tx.is_set
	|| drop.is_set
	|| excess_tx.is_set
	|| queue_id.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(commit_tx.operation)
	|| is_set(drop.operation)
	|| is_set(excess_tx.operation)
	|| is_set(queue_id.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_entity_path(Entity* ancestor) const
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

    if (commit_tx.is_set || is_set(commit_tx.operation)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.operation)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "commit-tx")
    {
        commit_tx = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    	conform{YType::uint32, "conform"},
	 exceed{YType::uint32, "exceed"},
	 token_bucket_id{YType::uint32, "token-bucket-id"},
	 violate{YType::uint32, "violate"}
{
    yang_name = "police"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    return conform.is_set
	|| exceed.is_set
	|| token_bucket_id.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(conform.operation)
	|| is_set(exceed.operation)
	|| is_set(token_bucket_id.operation)
	|| is_set(violate.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_entity_path(Entity* ancestor) const
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

    if (conform.is_set || is_set(conform.operation)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.operation)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (token_bucket_id.is_set || is_set(token_bucket_id.operation)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (violate.is_set || is_set(violate.operation)) leaf_name_data.push_back(violate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform")
    {
        conform = value;
    }
    if(value_path == "exceed")
    {
        exceed = value;
    }
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
    }
    if(value_path == "violate")
    {
        violate = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    	stats_id{YType::uint32, "stats-id"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
	,queue(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
{
    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    return stats_id.is_set
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(operation)
	|| is_set(stats_id.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_entity_path(Entity* ancestor) const
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

    if (stats_id.is_set || is_set(stats_id.operation)) leaf_name_data.push_back(stats_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"},
	 index_{YType::uint16, "index"},
	 node_flags{YType::str, "node-flags"},
	 policy_name{YType::str, "policy-name"},
	 stats_flags{YType::str, "stats-flags"}
    	,
    config(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
	,result(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    children["config"] = config.get();

    result->parent = this;
    children["result"] = result.get();

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| index_.is_set
	|| node_flags.is_set
	|| policy_name.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| is_set(index_.operation)
	|| is_set(node_flags.operation)
	|| is_set(policy_name.operation)
	|| is_set(stats_flags.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (result !=  nullptr && is_set(result->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.operation)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.operation)) leaf_name_data.push_back(stats_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "result")
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
        else
        {
            result = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
            result->parent = this;
            children["result"] = result.get();
        }
        return children.at("result");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("result") == children.end())
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        for(auto const & c : qos_show_ea_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        c->parent = this;
        qos_show_ea_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_ea_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_ea_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Details()
    :
    header(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header>())
	,interface_parameters(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "details"; yang_parent_name = "output";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Output()
    :
    details(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "output"; yang_parent_name = "interface";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::~Output()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            details = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::Header()
    :
    	classes{YType::uint16, "classes"},
	 direction{YType::str, "direction"},
	 interface_name{YType::str, "interface-name"},
	 policy_name{YType::str, "policy-name"}
{
    yang_name = "header"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::~Header()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::has_data() const
{
    return classes.is_set
	|| direction.is_set
	|| interface_name.is_set
	|| policy_name.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(direction.operation)
	|| is_set(interface_name.operation)
	|| is_set(policy_name.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_entity_path(Entity* ancestor) const
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

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::InterfaceParameters()
    :
    	bundle_id{YType::uint16, "bundle-id"},
	 hierarchical_depth{YType::uint8, "hierarchical-depth"},
	 interface_handle{YType::str, "interface-handle"},
	 interface_rate{YType::uint32, "interface-rate"},
	 interface_type{YType::str, "interface-type"},
	 policy_map_id{YType::uint16, "policy-map-id"},
	 policy_name{YType::str, "policy-name"},
	 port{YType::uint32, "port"},
	 port_shaper_rate{YType::uint32, "port-shaper-rate"},
	 qos_interface_handle{YType::uint64, "qos-interface-handle"},
	 uidb_index{YType::uint16, "uidb-index"},
	 under_line_interface_handle{YType::str, "under-line-interface-handle"}
{
    yang_name = "interface-parameters"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::has_data() const
{
    return bundle_id.is_set
	|| hierarchical_depth.is_set
	|| interface_handle.is_set
	|| interface_rate.is_set
	|| interface_type.is_set
	|| policy_map_id.is_set
	|| policy_name.is_set
	|| port.is_set
	|| port_shaper_rate.is_set
	|| qos_interface_handle.is_set
	|| uidb_index.is_set
	|| under_line_interface_handle.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_id.operation)
	|| is_set(hierarchical_depth.operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_rate.operation)
	|| is_set(interface_type.operation)
	|| is_set(policy_map_id.operation)
	|| is_set(policy_name.operation)
	|| is_set(port.operation)
	|| is_set(port_shaper_rate.operation)
	|| is_set(qos_interface_handle.operation)
	|| is_set(uidb_index.operation)
	|| is_set(under_line_interface_handle.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_entity_path(Entity* ancestor) const
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

    if (bundle_id.is_set || is_set(bundle_id.operation)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (hierarchical_depth.is_set || is_set(hierarchical_depth.operation)) leaf_name_data.push_back(hierarchical_depth.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_rate.is_set || is_set(interface_rate.operation)) leaf_name_data.push_back(interface_rate.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (policy_map_id.is_set || is_set(policy_map_id.operation)) leaf_name_data.push_back(policy_map_id.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (port_shaper_rate.is_set || is_set(port_shaper_rate.operation)) leaf_name_data.push_back(port_shaper_rate.get_name_leafdata());
    if (qos_interface_handle.is_set || is_set(qos_interface_handle.operation)) leaf_name_data.push_back(qos_interface_handle.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.operation)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (under_line_interface_handle.is_set || is_set(under_line_interface_handle.operation)) leaf_name_data.push_back(under_line_interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
    }
    if(value_path == "hierarchical-depth")
    {
        hierarchical_depth = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-rate")
    {
        interface_rate = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "policy-map-id")
    {
        policy_map_id = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "port-shaper-rate")
    {
        port_shaper_rate = value;
    }
    if(value_path == "qos-interface-handle")
    {
        qos_interface_handle = value;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
    }
    if(value_path == "under-line-interface-handle")
    {
        under_line_interface_handle = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::Cir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::~Cir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::Cbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::~Cbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Police()
    :
    	color_aware{YType::boolean, "color-aware"},
	 policer_type{YType::enumeration, "policer-type"}
    	,
    cbs(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>())
	,cir(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>())
{
    cbs->parent = this;
    children["cbs"] = cbs.get();

    cir->parent = this;
    children["cir"] = cir.get();

    yang_name = "police"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_data() const
{
    return color_aware.is_set
	|| policer_type.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(color_aware.operation)
	|| is_set(policer_type.operation)
	|| (cbs !=  nullptr && is_set(cbs->operation))
	|| (cir !=  nullptr && is_set(cir->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_entity_path(Entity* ancestor) const
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

    if (color_aware.is_set || is_set(color_aware.operation)) leaf_name_data.push_back(color_aware.get_name_leafdata());
    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
        else
        {
            cbs = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs.get();
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
        else
        {
            cir = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir.get();
        }
        return children.at("cir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs.get();
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "color-aware")
    {
        color_aware = value;
    }
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::Pir()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::~Pir()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::Pbs()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::~Pbs()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Shape()
    :
    pbs(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>())
	,pir(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs.get();

    pir->parent = this;
    children["pir"] = pir.get();

    yang_name = "shape"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::~Shape()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_data() const
{
    return (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::has_operation() const
{
    return is_set(operation)
	|| (pbs !=  nullptr && is_set(pbs->operation))
	|| (pir !=  nullptr && is_set(pir->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
        else
        {
            pbs = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs.get();
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
        else
        {
            pir = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir.get();
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs.get();
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::Bandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::SumOfBandwidth()
    :
    	unit{YType::enumeration, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "sum-of-bandwidth"; yang_parent_name = "wfq";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::~SumOfBandwidth()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sum-of-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_entity_path(Entity* ancestor) const
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

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Wfq()
    :
    	excess_ratio{YType::uint16, "excess-ratio"}
    	,
    bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>())
	,sum_of_bandwidth(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth.get();

    sum_of_bandwidth->parent = this;
    children["sum-of-bandwidth"] = sum_of_bandwidth.get();

    yang_name = "wfq"; yang_parent_name = "config";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::~Wfq()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_data() const
{
    return excess_ratio.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (sum_of_bandwidth !=  nullptr && sum_of_bandwidth->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(excess_ratio.operation)
	|| (bandwidth !=  nullptr && is_set(bandwidth->operation))
	|| (sum_of_bandwidth !=  nullptr && is_set(sum_of_bandwidth->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_entity_path(Entity* ancestor) const
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

    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
        else
        {
            bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth.get();
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "sum-of-bandwidth")
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        else
        {
            sum_of_bandwidth = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth>();
            sum_of_bandwidth->parent = this;
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
        return children.at("sum-of-bandwidth");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth.get();
        }
    }

    if(children.find("sum-of-bandwidth") == children.end())
    {
        if(sum_of_bandwidth != nullptr)
        {
            children["sum-of-bandwidth"] = sum_of_bandwidth.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Config()
    :
    	node_config{YType::str, "node-config"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>())
	,shape(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>())
	,wfq(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>())
{
    police->parent = this;
    children["police"] = police.get();

    shape->parent = this;
    children["shape"] = shape.get();

    wfq->parent = this;
    children["wfq"] = wfq.get();

    yang_name = "config"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::~Config()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_data() const
{
    return node_config.is_set
	|| (police !=  nullptr && police->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(node_config.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (shape !=  nullptr && is_set(shape->operation))
	|| (wfq !=  nullptr && is_set(wfq->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_entity_path(Entity* ancestor) const
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

    if (node_config.is_set || is_set(node_config.operation)) leaf_name_data.push_back(node_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
        else
        {
            wfq = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq.get();
        }
        return children.at("wfq");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-config")
    {
        node_config = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::Queue()
    :
    	commit_tx{YType::uint32, "commit-tx"},
	 drop{YType::uint32, "drop"},
	 excess_tx{YType::uint32, "excess-tx"},
	 queue_id{YType::uint32, "queue-id"}
{
    yang_name = "queue"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::~Queue()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_data() const
{
    return commit_tx.is_set
	|| drop.is_set
	|| excess_tx.is_set
	|| queue_id.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(commit_tx.operation)
	|| is_set(drop.operation)
	|| is_set(excess_tx.operation)
	|| is_set(queue_id.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_entity_path(Entity* ancestor) const
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

    if (commit_tx.is_set || is_set(commit_tx.operation)) leaf_name_data.push_back(commit_tx.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (excess_tx.is_set || is_set(excess_tx.operation)) leaf_name_data.push_back(excess_tx.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "commit-tx")
    {
        commit_tx = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "excess-tx")
    {
        excess_tx = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::Police()
    :
    	conform{YType::uint32, "conform"},
	 exceed{YType::uint32, "exceed"},
	 token_bucket_id{YType::uint32, "token-bucket-id"},
	 violate{YType::uint32, "violate"}
{
    yang_name = "police"; yang_parent_name = "result";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::~Police()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_data() const
{
    return conform.is_set
	|| exceed.is_set
	|| token_bucket_id.is_set
	|| violate.is_set;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(conform.operation)
	|| is_set(exceed.operation)
	|| is_set(token_bucket_id.operation)
	|| is_set(violate.operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_entity_path(Entity* ancestor) const
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

    if (conform.is_set || is_set(conform.operation)) leaf_name_data.push_back(conform.get_name_leafdata());
    if (exceed.is_set || is_set(exceed.operation)) leaf_name_data.push_back(exceed.get_name_leafdata());
    if (token_bucket_id.is_set || is_set(token_bucket_id.operation)) leaf_name_data.push_back(token_bucket_id.get_name_leafdata());
    if (violate.is_set || is_set(violate.operation)) leaf_name_data.push_back(violate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::get_children()
{
    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conform")
    {
        conform = value;
    }
    if(value_path == "exceed")
    {
        exceed = value;
    }
    if(value_path == "token-bucket-id")
    {
        token_bucket_id = value;
    }
    if(value_path == "violate")
    {
        violate = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Result()
    :
    	stats_id{YType::uint32, "stats-id"}
    	,
    police(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>())
	,queue(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>())
{
    police->parent = this;
    children["police"] = police.get();

    queue->parent = this;
    children["queue"] = queue.get();

    yang_name = "result"; yang_parent_name = "qos-show-ea-pclass-st";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::~Result()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_data() const
{
    return stats_id.is_set
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::has_operation() const
{
    return is_set(operation)
	|| is_set(stats_id.operation)
	|| (police !=  nullptr && is_set(police->operation))
	|| (queue !=  nullptr && is_set(queue->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_entity_path(Entity* ancestor) const
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

    if (stats_id.is_set || is_set(stats_id.operation)) leaf_name_data.push_back(stats_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
        else
        {
            queue = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue>();
            queue->parent = this;
            children["queue"] = queue.get();
        }
        return children.at("queue");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::get_children()
{
    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stats-id")
    {
        stats_id = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::QosShowEaPclassSt()
    :
    	class_level{YType::uint8, "class-level"},
	 class_name{YType::str, "class-name"},
	 index_{YType::uint16, "index"},
	 node_flags{YType::str, "node-flags"},
	 policy_name{YType::str, "policy-name"},
	 stats_flags{YType::str, "stats-flags"}
    	,
    config(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>())
	,result(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>())
{
    config->parent = this;
    children["config"] = config.get();

    result->parent = this;
    children["result"] = result.get();

    yang_name = "qos-show-ea-pclass-st"; yang_parent_name = "skywarp-qos-policy-class";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::~QosShowEaPclassSt()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| index_.is_set
	|| node_flags.is_set
	|| policy_name.is_set
	|| stats_flags.is_set
	|| (config !=  nullptr && config->has_data())
	|| (result !=  nullptr && result->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| is_set(index_.operation)
	|| is_set(node_flags.operation)
	|| is_set(policy_name.operation)
	|| is_set(stats_flags.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (result !=  nullptr && is_set(result->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-pclass-st";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_entity_path(Entity* ancestor) const
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

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (node_flags.is_set || is_set(node_flags.operation)) leaf_name_data.push_back(node_flags.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (stats_flags.is_set || is_set(stats_flags.operation)) leaf_name_data.push_back(stats_flags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
        else
        {
            config = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "result")
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
        else
        {
            result = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result>();
            result->parent = this;
            children["result"] = result.get();
        }
        return children.at("result");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("result") == children.end())
    {
        if(result != nullptr)
        {
            children["result"] = result.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "node-flags")
    {
        node_flags = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "stats-flags")
    {
        stats_flags = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::SkywarpQosPolicyClass()
{
    yang_name = "skywarp-qos-policy-class"; yang_parent_name = "details";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::~SkywarpQosPolicyClass()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_pclass_st.size(); index++)
    {
        if(qos_show_ea_pclass_st[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "skywarp-qos-policy-class";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-ea-pclass-st")
    {
        for(auto const & c : qos_show_ea_pclass_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt>();
        c->parent = this;
        qos_show_ea_pclass_st.push_back(std::move(c));
        children[segment_path] = qos_show_ea_pclass_st.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::get_children()
{
    for (auto const & c : qos_show_ea_pclass_st)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Details()
    :
    header(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header>())
	,interface_parameters(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters>())
	,skywarp_qos_policy_class(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass>())
{
    header->parent = this;
    children["header"] = header.get();

    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters.get();

    skywarp_qos_policy_class->parent = this;
    children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();

    yang_name = "details"; yang_parent_name = "input";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::~Details()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (skywarp_qos_policy_class !=  nullptr && skywarp_qos_policy_class->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && is_set(header->operation))
	|| (interface_parameters !=  nullptr && is_set(interface_parameters->operation))
	|| (skywarp_qos_policy_class !=  nullptr && is_set(skywarp_qos_policy_class->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
        else
        {
            header = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header>();
            header->parent = this;
            children["header"] = header.get();
        }
        return children.at("header");
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
        else
        {
            interface_parameters = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters.get();
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "skywarp-qos-policy-class")
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        else
        {
            skywarp_qos_policy_class = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass>();
            skywarp_qos_policy_class->parent = this;
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
        return children.at("skywarp-qos-policy-class");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header.get();
        }
    }

    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters.get();
        }
    }

    if(children.find("skywarp-qos-policy-class") == children.end())
    {
        if(skywarp_qos_policy_class != nullptr)
        {
            children["skywarp-qos-policy-class"] = skywarp_qos_policy_class.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Input()
    :
    details(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details>())
{
    details->parent = this;
    children["details"] = details.get();

    yang_name = "input"; yang_parent_name = "interface";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::~Input()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::has_data() const
{
    return (details !=  nullptr && details->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::has_operation() const
{
    return is_set(operation)
	|| (details !=  nullptr && is_set(details->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            details = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    input(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input>())
	,output(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output>())
{
    input->parent = this;
    children["input"] = input.get();

    output->parent = this;
    children["output"] = output.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

PlatformQosEa::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool PlatformQosEa::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (input !=  nullptr && is_set(input->operation))
	|| (output !=  nullptr && is_set(output->operation));
}

std::string PlatformQosEa::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::Interface::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQosEa::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

PlatformQosEa::Nodes::Node::Interfaces::~Interfaces()
{
}

bool PlatformQosEa::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::Interfaces::get_children()
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

void PlatformQosEa::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces>())
	,interfaces(std::make_unique<PlatformQosEa::Nodes::Node::Interfaces>())
{
    bundle_interfaces->parent = this;
    children["bundle-interfaces"] = bundle_interfaces.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

PlatformQosEa::Nodes::Node::~Node()
{
}

bool PlatformQosEa::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool PlatformQosEa::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (bundle_interfaces !=  nullptr && is_set(bundle_interfaces->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string PlatformQosEa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos-ea/nodes/" << get_segment_path();
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

Entity* PlatformQosEa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        else
        {
            bundle_interfaces = std::make_unique<PlatformQosEa::Nodes::Node::BundleInterfaces>();
            bundle_interfaces->parent = this;
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        return children.at("bundle-interfaces");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<PlatformQosEa::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::Node::get_children()
{
    if(children.find("bundle-interfaces") == children.end())
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void PlatformQosEa::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

PlatformQosEa::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "platform-qos-ea";
}

PlatformQosEa::Nodes::~Nodes()
{
}

bool PlatformQosEa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQosEa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQosEa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath PlatformQosEa::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos-ea/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PlatformQosEa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<PlatformQosEa::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::Nodes::get_children()
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

void PlatformQosEa::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PlatformQosEa::PlatformQosEa()
    :
    nodes(std::make_unique<PlatformQosEa::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "platform-qos-ea"; yang_parent_name = "Cisco-IOS-XR-skp-qos-oper";
}

PlatformQosEa::~PlatformQosEa()
{
}

bool PlatformQosEa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PlatformQosEa::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string PlatformQosEa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-skp-qos-oper:platform-qos-ea";

    return path_buffer.str();

}

EntityPath PlatformQosEa::get_entity_path(Entity* ancestor) const
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

Entity* PlatformQosEa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<PlatformQosEa::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PlatformQosEa::get_children()
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

void PlatformQosEa::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PlatformQosEa::clone_ptr()
{
    return std::make_unique<PlatformQosEa>();
}

const Enum::Value WredEnum::wred_cos_cmd {0, "wred-cos-cmd"};
const Enum::Value WredEnum::wred_dscp_cmd {1, "wred-dscp-cmd"};
const Enum::Value WredEnum::wred_precedence_cmd {2, "wred-precedence-cmd"};
const Enum::Value WredEnum::wred_discard_class_cmd {3, "wred-discard-class-cmd"};
const Enum::Value WredEnum::wred_mpls_exp_cmd {4, "wred-mpls-exp-cmd"};
const Enum::Value WredEnum::red_with_user_min_max {5, "red-with-user-min-max"};
const Enum::Value WredEnum::red_with_default_min_max {6, "red-with-default-min-max"};
const Enum::Value WredEnum::wred_dei_cmd {7, "wred-dei-cmd"};
const Enum::Value WredEnum::wred_ecn_cmd {8, "wred-ecn-cmd"};
const Enum::Value WredEnum::wred_invalid_cmd {9, "wred-invalid-cmd"};

const Enum::Value ActionOpcodeEnum::precedence {0, "precedence"};
const Enum::Value ActionOpcodeEnum::dscp {1, "dscp"};
const Enum::Value ActionOpcodeEnum::discard_class {2, "discard-class"};
const Enum::Value ActionOpcodeEnum::qos_group {3, "qos-group"};
const Enum::Value ActionOpcodeEnum::cos_inner {4, "cos-inner"};
const Enum::Value ActionOpcodeEnum::cos {5, "cos"};
const Enum::Value ActionOpcodeEnum::exp_top {6, "exp-top"};
const Enum::Value ActionOpcodeEnum::exp_imp {7, "exp-imp"};
const Enum::Value ActionOpcodeEnum::tunnel_precedence {8, "tunnel-precedence"};
const Enum::Value ActionOpcodeEnum::tunnel_dscp {9, "tunnel-dscp"};
const Enum::Value ActionOpcodeEnum::itag_dei {10, "itag-dei"};
const Enum::Value ActionOpcodeEnum::itag_cos {11, "itag-cos"};
const Enum::Value ActionOpcodeEnum::cos_imposition {12, "cos-imposition"};
const Enum::Value ActionOpcodeEnum::dei_imposition {13, "dei-imposition"};
const Enum::Value ActionOpcodeEnum::dei {14, "dei"};
const Enum::Value ActionOpcodeEnum::no_marking {15, "no-marking"};

const Enum::Value TbAlgorithmEnum::inactive {0, "inactive"};
const Enum::Value TbAlgorithmEnum::single {1, "single"};
const Enum::Value TbAlgorithmEnum::single_rate_tcm {2, "single-rate-tcm"};
const Enum::Value TbAlgorithmEnum::two_rate_tcm {3, "two-rate-tcm"};
const Enum::Value TbAlgorithmEnum::mef_tcm {4, "mef-tcm"};
const Enum::Value TbAlgorithmEnum::dummy {5, "dummy"};

const Enum::Value PolicyParamUnitEnum::policy_param_unit_invalid {0, "policy-param-unit-invalid"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_bytes {1, "policy-param-unit-bytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_kbytes {2, "policy-param-unit-kbytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_mbytes {3, "policy-param-unit-mbytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_gbytes {4, "policy-param-unit-gbytes"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_bitsps {5, "policy-param-unit-bitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_kbitsps {6, "policy-param-unit-kbitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_mbitsps {7, "policy-param-unit-mbitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_gbitsps {8, "policy-param-unit-gbitsps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_cells_ps {9, "policy-param-unit-cells-ps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_packets_ps {10, "policy-param-unit-packets-ps"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_us {11, "policy-param-unit-us"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_ms {12, "policy-param-unit-ms"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_seconds {13, "policy-param-unit-seconds"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_packets {14, "policy-param-unit-packets"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_cells {15, "policy-param-unit-cells"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_percent {16, "policy-param-unit-percent"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_per_thousand {17, "policy-param-unit-per-thousand"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_per_million {18, "policy-param-unit-per-million"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_hz {19, "policy-param-unit-hz"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_khz {20, "policy-param-unit-khz"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_mhz {21, "policy-param-unit-mhz"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_ratio {22, "policy-param-unit-ratio"};
const Enum::Value PolicyParamUnitEnum::policy_param_unit_max {23, "policy-param-unit-max"};

const Enum::Value ActionEnum::police_transmit {0, "police-transmit"};
const Enum::Value ActionEnum::police_set_transmit {1, "police-set-transmit"};
const Enum::Value ActionEnum::police_drop {2, "police-drop"};
const Enum::Value ActionEnum::police_unknown {3, "police-unknown"};

const Enum::Value CacStateEnum::unknown {0, "unknown"};
const Enum::Value CacStateEnum::admit {1, "admit"};
const Enum::Value CacStateEnum::redirect {2, "redirect"};
const Enum::Value CacStateEnum::ubrl {3, "ubrl"};

const Enum::Value QosUnitEnum::invalid {0, "invalid"};
const Enum::Value QosUnitEnum::bytes {1, "bytes"};
const Enum::Value QosUnitEnum::kilobytes {2, "kilobytes"};
const Enum::Value QosUnitEnum::megabytes {3, "megabytes"};
const Enum::Value QosUnitEnum::gigabytes {4, "gigabytes"};
const Enum::Value QosUnitEnum::bps {5, "bps"};
const Enum::Value QosUnitEnum::kbps {6, "kbps"};
const Enum::Value QosUnitEnum::mbps {7, "mbps"};
const Enum::Value QosUnitEnum::gbps {8, "gbps"};
const Enum::Value QosUnitEnum::cells_per_second {9, "cells-per-second"};
const Enum::Value QosUnitEnum::packets_per_second {10, "packets-per-second"};
const Enum::Value QosUnitEnum::microsecond {11, "microsecond"};
const Enum::Value QosUnitEnum::millisecond {12, "millisecond"};
const Enum::Value QosUnitEnum::packets {13, "packets"};
const Enum::Value QosUnitEnum::cells {14, "cells"};
const Enum::Value QosUnitEnum::percentage {15, "percentage"};
const Enum::Value QosUnitEnum::ratio {16, "ratio"};

const Enum::Value PolicyStateEnum::active {0, "active"};
const Enum::Value PolicyStateEnum::suspended {1, "suspended"};


}
}

