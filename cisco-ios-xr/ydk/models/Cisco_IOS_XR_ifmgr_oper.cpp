
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ifmgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_oper {

InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::InterfaceDampening_()
    :
    	flaps{YType::uint32, "flaps"},
	 is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
	 penalty{YType::uint32, "penalty"},
	 seconds_remaining{YType::uint32, "seconds-remaining"},
	 state{YType::enumeration, "state"}
{
    yang_name = "interface-dampening"; yang_parent_name = "if-dampening";
}

InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::~InterfaceDampening_()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::has_data() const
{
    return flaps.is_set
	|| is_suppressed_enabled.is_set
	|| penalty.is_set
	|| seconds_remaining.is_set
	|| state.is_set;
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::has_operation() const
{
    return is_set(operation)
	|| is_set(flaps.operation)
	|| is_set(is_suppressed_enabled.operation)
	|| is_set(penalty.operation)
	|| is_set(seconds_remaining.operation)
	|| is_set(state.operation);
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flaps.is_set || is_set(flaps.operation)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.operation)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.operation)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.operation)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::get_children()
{
    return children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flaps")
    {
        flaps = value;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
    }
    if(value_path == "penalty")
    {
        penalty = value;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::CapsulationDampening()
    :
    	flaps{YType::uint32, "flaps"},
	 is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
	 penalty{YType::uint32, "penalty"},
	 seconds_remaining{YType::uint32, "seconds-remaining"},
	 state{YType::enumeration, "state"}
{
    yang_name = "capsulation-dampening"; yang_parent_name = "capsulation";
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::~CapsulationDampening()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::has_data() const
{
    return flaps.is_set
	|| is_suppressed_enabled.is_set
	|| penalty.is_set
	|| seconds_remaining.is_set
	|| state.is_set;
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::has_operation() const
{
    return is_set(operation)
	|| is_set(flaps.operation)
	|| is_set(is_suppressed_enabled.operation)
	|| is_set(penalty.operation)
	|| is_set(seconds_remaining.operation)
	|| is_set(state.operation);
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flaps.is_set || is_set(flaps.operation)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.operation)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.operation)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.operation)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::get_children()
{
    return children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flaps")
    {
        flaps = value;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
    }
    if(value_path == "penalty")
    {
        penalty = value;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::Capsulation()
    :
    	capsulation_number{YType::str, "capsulation-number"}
    	,
    capsulation_dampening(std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening>())
{
    capsulation_dampening->parent = this;
    children["capsulation-dampening"] = capsulation_dampening.get();

    yang_name = "capsulation"; yang_parent_name = "if-dampening";
}

InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::~Capsulation()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::has_data() const
{
    return capsulation_number.is_set
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_data());
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(capsulation_number.operation)
	|| (capsulation_dampening !=  nullptr && is_set(capsulation_dampening->operation));
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_number.is_set || is_set(capsulation_number.operation)) leaf_name_data.push_back(capsulation_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capsulation-dampening")
    {
        if(capsulation_dampening != nullptr)
        {
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
        else
        {
            capsulation_dampening = std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::CapsulationDampening>();
            capsulation_dampening->parent = this;
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
        return children.at("capsulation-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::get_children()
{
    if(children.find("capsulation-dampening") == children.end())
    {
        if(capsulation_dampening != nullptr)
        {
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number = value;
    }
}

InterfaceDampening::Interfaces::Interface::IfDampening::IfDampening()
    :
    	half_life{YType::uint32, "half-life"},
	 is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
	 last_state_transition_time{YType::uint32, "last-state-transition-time"},
	 maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
	 restart_penalty{YType::uint32, "restart-penalty"},
	 reuse_threshold{YType::uint32, "reuse-threshold"},
	 state_transition_count{YType::uint32, "state-transition-count"},
	 suppress_threshold{YType::uint32, "suppress-threshold"}
    	,
    interface_dampening(std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_>())
{
    interface_dampening->parent = this;
    children["interface-dampening"] = interface_dampening.get();

    yang_name = "if-dampening"; yang_parent_name = "interface";
}

InterfaceDampening::Interfaces::Interface::IfDampening::~IfDampening()
{
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::has_data() const
{
    for (std::size_t index=0; index<capsulation.size(); index++)
    {
        if(capsulation[index]->has_data())
            return true;
    }
    return half_life.is_set
	|| is_dampening_enabled.is_set
	|| last_state_transition_time.is_set
	|| maximum_suppress_time.is_set
	|| restart_penalty.is_set
	|| reuse_threshold.is_set
	|| state_transition_count.is_set
	|| suppress_threshold.is_set
	|| (interface_dampening !=  nullptr && interface_dampening->has_data());
}

bool InterfaceDampening::Interfaces::Interface::IfDampening::has_operation() const
{
    for (std::size_t index=0; index<capsulation.size(); index++)
    {
        if(capsulation[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(half_life.operation)
	|| is_set(is_dampening_enabled.operation)
	|| is_set(last_state_transition_time.operation)
	|| is_set(maximum_suppress_time.operation)
	|| is_set(restart_penalty.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(state_transition_count.operation)
	|| is_set(suppress_threshold.operation)
	|| (interface_dampening !=  nullptr && is_set(interface_dampening->operation));
}

std::string InterfaceDampening::Interfaces::Interface::IfDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Interfaces::Interface::IfDampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.operation)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.operation)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.operation)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (state_transition_count.is_set || is_set(state_transition_count.operation)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Interfaces::Interface::IfDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capsulation")
    {
        for(auto const & c : capsulation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening::Capsulation>();
        c->parent = this;
        capsulation.push_back(std::move(c));
        children[segment_path] = capsulation.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-dampening")
    {
        if(interface_dampening != nullptr)
        {
            children["interface-dampening"] = interface_dampening.get();
        }
        else
        {
            interface_dampening = std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening::InterfaceDampening_>();
            interface_dampening->parent = this;
            children["interface-dampening"] = interface_dampening.get();
        }
        return children.at("interface-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Interfaces::Interface::IfDampening::get_children()
{
    for (auto const & c : capsulation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("interface-dampening") == children.end())
    {
        if(interface_dampening != nullptr)
        {
            children["interface-dampening"] = interface_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Interfaces::Interface::IfDampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
}

InterfaceDampening::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    if_dampening(std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening>())
{
    if_dampening->parent = this;
    children["if-dampening"] = if_dampening.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

InterfaceDampening::Interfaces::Interface::~Interface()
{
}

bool InterfaceDampening::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (if_dampening !=  nullptr && if_dampening->has_data());
}

bool InterfaceDampening::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (if_dampening !=  nullptr && is_set(if_dampening->operation));
}

std::string InterfaceDampening::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/interfaces/" << get_segment_path();
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

Entity* InterfaceDampening::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-dampening")
    {
        if(if_dampening != nullptr)
        {
            children["if-dampening"] = if_dampening.get();
        }
        else
        {
            if_dampening = std::make_unique<InterfaceDampening::Interfaces::Interface::IfDampening>();
            if_dampening->parent = this;
            children["if-dampening"] = if_dampening.get();
        }
        return children.at("if-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Interfaces::Interface::get_children()
{
    if(children.find("if-dampening") == children.end())
    {
        if(if_dampening != nullptr)
        {
            children["if-dampening"] = if_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

InterfaceDampening::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-dampening";
}

InterfaceDampening::Interfaces::~Interfaces()
{
}

bool InterfaceDampening::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceDampening::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<InterfaceDampening::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Interfaces::get_children()
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

void InterfaceDampening::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::InterfaceDampening_()
    :
    	flaps{YType::uint32, "flaps"},
	 is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
	 penalty{YType::uint32, "penalty"},
	 seconds_remaining{YType::uint32, "seconds-remaining"},
	 state{YType::enumeration, "state"}
{
    yang_name = "interface-dampening"; yang_parent_name = "if-handle";
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::~InterfaceDampening_()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::has_data() const
{
    return flaps.is_set
	|| is_suppressed_enabled.is_set
	|| penalty.is_set
	|| seconds_remaining.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::has_operation() const
{
    return is_set(operation)
	|| is_set(flaps.operation)
	|| is_set(is_suppressed_enabled.operation)
	|| is_set(penalty.operation)
	|| is_set(seconds_remaining.operation)
	|| is_set(state.operation);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flaps.is_set || is_set(flaps.operation)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.operation)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.operation)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.operation)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::get_children()
{
    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flaps")
    {
        flaps = value;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
    }
    if(value_path == "penalty")
    {
        penalty = value;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::CapsulationDampening()
    :
    	flaps{YType::uint32, "flaps"},
	 is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
	 penalty{YType::uint32, "penalty"},
	 seconds_remaining{YType::uint32, "seconds-remaining"},
	 state{YType::enumeration, "state"}
{
    yang_name = "capsulation-dampening"; yang_parent_name = "capsulation";
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::~CapsulationDampening()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::has_data() const
{
    return flaps.is_set
	|| is_suppressed_enabled.is_set
	|| penalty.is_set
	|| seconds_remaining.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::has_operation() const
{
    return is_set(operation)
	|| is_set(flaps.operation)
	|| is_set(is_suppressed_enabled.operation)
	|| is_set(penalty.operation)
	|| is_set(seconds_remaining.operation)
	|| is_set(state.operation);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flaps.is_set || is_set(flaps.operation)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.operation)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.operation)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.operation)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::get_children()
{
    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flaps")
    {
        flaps = value;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
    }
    if(value_path == "penalty")
    {
        penalty = value;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::Capsulation()
    :
    	capsulation_number{YType::str, "capsulation-number"}
    	,
    capsulation_dampening(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening>())
{
    capsulation_dampening->parent = this;
    children["capsulation-dampening"] = capsulation_dampening.get();

    yang_name = "capsulation"; yang_parent_name = "if-handle";
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::~Capsulation()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::has_data() const
{
    return capsulation_number.is_set
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(capsulation_number.operation)
	|| (capsulation_dampening !=  nullptr && is_set(capsulation_dampening->operation));
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_number.is_set || is_set(capsulation_number.operation)) leaf_name_data.push_back(capsulation_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capsulation-dampening")
    {
        if(capsulation_dampening != nullptr)
        {
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
        else
        {
            capsulation_dampening = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::CapsulationDampening>();
            capsulation_dampening->parent = this;
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
        return children.at("capsulation-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::get_children()
{
    if(children.find("capsulation-dampening") == children.end())
    {
        if(capsulation_dampening != nullptr)
        {
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::IfHandle()
    :
    	interface_handle_name{YType::str, "interface-handle-name"},
	 half_life{YType::uint32, "half-life"},
	 is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
	 last_state_transition_time{YType::uint32, "last-state-transition-time"},
	 maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
	 restart_penalty{YType::uint32, "restart-penalty"},
	 reuse_threshold{YType::uint32, "reuse-threshold"},
	 state_transition_count{YType::uint32, "state-transition-count"},
	 suppress_threshold{YType::uint32, "suppress-threshold"}
    	,
    interface_dampening(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_>())
{
    interface_dampening->parent = this;
    children["interface-dampening"] = interface_dampening.get();

    yang_name = "if-handle"; yang_parent_name = "if-handles";
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::~IfHandle()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::has_data() const
{
    for (std::size_t index=0; index<capsulation.size(); index++)
    {
        if(capsulation[index]->has_data())
            return true;
    }
    return interface_handle_name.is_set
	|| half_life.is_set
	|| is_dampening_enabled.is_set
	|| last_state_transition_time.is_set
	|| maximum_suppress_time.is_set
	|| restart_penalty.is_set
	|| reuse_threshold.is_set
	|| state_transition_count.is_set
	|| suppress_threshold.is_set
	|| (interface_dampening !=  nullptr && interface_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::has_operation() const
{
    for (std::size_t index=0; index<capsulation.size(); index++)
    {
        if(capsulation[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_handle_name.operation)
	|| is_set(half_life.operation)
	|| is_set(is_dampening_enabled.operation)
	|| is_set(last_state_transition_time.operation)
	|| is_set(maximum_suppress_time.operation)
	|| is_set(restart_penalty.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(state_transition_count.operation)
	|| is_set(suppress_threshold.operation)
	|| (interface_dampening !=  nullptr && is_set(interface_dampening->operation));
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-handle" <<"[interface-handle-name='" <<interface_handle_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle_name.is_set || is_set(interface_handle_name.operation)) leaf_name_data.push_back(interface_handle_name.get_name_leafdata());
    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.operation)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.operation)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.operation)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (state_transition_count.is_set || is_set(state_transition_count.operation)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capsulation")
    {
        for(auto const & c : capsulation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::Capsulation>();
        c->parent = this;
        capsulation.push_back(std::move(c));
        children[segment_path] = capsulation.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-dampening")
    {
        if(interface_dampening != nullptr)
        {
            children["interface-dampening"] = interface_dampening.get();
        }
        else
        {
            interface_dampening = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::InterfaceDampening_>();
            interface_dampening->parent = this;
            children["interface-dampening"] = interface_dampening.get();
        }
        return children.at("interface-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::get_children()
{
    for (auto const & c : capsulation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("interface-dampening") == children.end())
    {
        if(interface_dampening != nullptr)
        {
            children["interface-dampening"] = interface_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle-name")
    {
        interface_handle_name = value;
    }
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandles()
{
    yang_name = "if-handles"; yang_parent_name = "dampening";
}

InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::~IfHandles()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::has_data() const
{
    for (std::size_t index=0; index<if_handle.size(); index++)
    {
        if(if_handle[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::has_operation() const
{
    for (std::size_t index=0; index<if_handle.size(); index++)
    {
        if(if_handle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-handles";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-handle")
    {
        for(auto const & c : if_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::IfHandle>();
        c->parent = this;
        if_handle.push_back(std::move(c));
        children[segment_path] = if_handle.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::get_children()
{
    for (auto const & c : if_handle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles::set_value(const std::string & value_path, std::string value)
{
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::InterfaceDampening_()
    :
    	flaps{YType::uint32, "flaps"},
	 is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
	 penalty{YType::uint32, "penalty"},
	 seconds_remaining{YType::uint32, "seconds-remaining"},
	 state{YType::enumeration, "state"}
{
    yang_name = "interface-dampening"; yang_parent_name = "interface";
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::~InterfaceDampening_()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::has_data() const
{
    return flaps.is_set
	|| is_suppressed_enabled.is_set
	|| penalty.is_set
	|| seconds_remaining.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::has_operation() const
{
    return is_set(operation)
	|| is_set(flaps.operation)
	|| is_set(is_suppressed_enabled.operation)
	|| is_set(penalty.operation)
	|| is_set(seconds_remaining.operation)
	|| is_set(state.operation);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flaps.is_set || is_set(flaps.operation)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.operation)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.operation)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.operation)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::get_children()
{
    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flaps")
    {
        flaps = value;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
    }
    if(value_path == "penalty")
    {
        penalty = value;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::CapsulationDampening()
    :
    	flaps{YType::uint32, "flaps"},
	 is_suppressed_enabled{YType::boolean, "is-suppressed-enabled"},
	 penalty{YType::uint32, "penalty"},
	 seconds_remaining{YType::uint32, "seconds-remaining"},
	 state{YType::enumeration, "state"}
{
    yang_name = "capsulation-dampening"; yang_parent_name = "capsulation";
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::~CapsulationDampening()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::has_data() const
{
    return flaps.is_set
	|| is_suppressed_enabled.is_set
	|| penalty.is_set
	|| seconds_remaining.is_set
	|| state.is_set;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::has_operation() const
{
    return is_set(operation)
	|| is_set(flaps.operation)
	|| is_set(is_suppressed_enabled.operation)
	|| is_set(penalty.operation)
	|| is_set(seconds_remaining.operation)
	|| is_set(state.operation);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flaps.is_set || is_set(flaps.operation)) leaf_name_data.push_back(flaps.get_name_leafdata());
    if (is_suppressed_enabled.is_set || is_set(is_suppressed_enabled.operation)) leaf_name_data.push_back(is_suppressed_enabled.get_name_leafdata());
    if (penalty.is_set || is_set(penalty.operation)) leaf_name_data.push_back(penalty.get_name_leafdata());
    if (seconds_remaining.is_set || is_set(seconds_remaining.operation)) leaf_name_data.push_back(seconds_remaining.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::get_children()
{
    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flaps")
    {
        flaps = value;
    }
    if(value_path == "is-suppressed-enabled")
    {
        is_suppressed_enabled = value;
    }
    if(value_path == "penalty")
    {
        penalty = value;
    }
    if(value_path == "seconds-remaining")
    {
        seconds_remaining = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::Capsulation()
    :
    	capsulation_number{YType::str, "capsulation-number"}
    	,
    capsulation_dampening(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening>())
{
    capsulation_dampening->parent = this;
    children["capsulation-dampening"] = capsulation_dampening.get();

    yang_name = "capsulation"; yang_parent_name = "interface";
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::~Capsulation()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::has_data() const
{
    return capsulation_number.is_set
	|| (capsulation_dampening !=  nullptr && capsulation_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(capsulation_number.operation)
	|| (capsulation_dampening !=  nullptr && is_set(capsulation_dampening->operation));
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capsulation";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capsulation_number.is_set || is_set(capsulation_number.operation)) leaf_name_data.push_back(capsulation_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capsulation-dampening")
    {
        if(capsulation_dampening != nullptr)
        {
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
        else
        {
            capsulation_dampening = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::CapsulationDampening>();
            capsulation_dampening->parent = this;
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
        return children.at("capsulation-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::get_children()
{
    if(children.find("capsulation-dampening") == children.end())
    {
        if(capsulation_dampening != nullptr)
        {
            children["capsulation-dampening"] = capsulation_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capsulation-number")
    {
        capsulation_number = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 half_life{YType::uint32, "half-life"},
	 is_dampening_enabled{YType::boolean, "is-dampening-enabled"},
	 last_state_transition_time{YType::uint32, "last-state-transition-time"},
	 maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
	 restart_penalty{YType::uint32, "restart-penalty"},
	 reuse_threshold{YType::uint32, "reuse-threshold"},
	 state_transition_count{YType::uint32, "state-transition-count"},
	 suppress_threshold{YType::uint32, "suppress-threshold"}
    	,
    interface_dampening(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_>())
{
    interface_dampening->parent = this;
    children["interface-dampening"] = interface_dampening.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::~Interface()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<capsulation.size(); index++)
    {
        if(capsulation[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| half_life.is_set
	|| is_dampening_enabled.is_set
	|| last_state_transition_time.is_set
	|| maximum_suppress_time.is_set
	|| restart_penalty.is_set
	|| reuse_threshold.is_set
	|| state_transition_count.is_set
	|| suppress_threshold.is_set
	|| (interface_dampening !=  nullptr && interface_dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<capsulation.size(); index++)
    {
        if(capsulation[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(half_life.operation)
	|| is_set(is_dampening_enabled.operation)
	|| is_set(last_state_transition_time.operation)
	|| is_set(maximum_suppress_time.operation)
	|| is_set(restart_penalty.operation)
	|| is_set(reuse_threshold.operation)
	|| is_set(state_transition_count.operation)
	|| is_set(suppress_threshold.operation)
	|| (interface_dampening !=  nullptr && is_set(interface_dampening->operation));
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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
    if (half_life.is_set || is_set(half_life.operation)) leaf_name_data.push_back(half_life.get_name_leafdata());
    if (is_dampening_enabled.is_set || is_set(is_dampening_enabled.operation)) leaf_name_data.push_back(is_dampening_enabled.get_name_leafdata());
    if (last_state_transition_time.is_set || is_set(last_state_transition_time.operation)) leaf_name_data.push_back(last_state_transition_time.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.operation)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());
    if (reuse_threshold.is_set || is_set(reuse_threshold.operation)) leaf_name_data.push_back(reuse_threshold.get_name_leafdata());
    if (state_transition_count.is_set || is_set(state_transition_count.operation)) leaf_name_data.push_back(state_transition_count.get_name_leafdata());
    if (suppress_threshold.is_set || is_set(suppress_threshold.operation)) leaf_name_data.push_back(suppress_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capsulation")
    {
        for(auto const & c : capsulation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::Capsulation>();
        c->parent = this;
        capsulation.push_back(std::move(c));
        children[segment_path] = capsulation.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-dampening")
    {
        if(interface_dampening != nullptr)
        {
            children["interface-dampening"] = interface_dampening.get();
        }
        else
        {
            interface_dampening = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::InterfaceDampening_>();
            interface_dampening->parent = this;
            children["interface-dampening"] = interface_dampening.get();
        }
        return children.at("interface-dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::get_children()
{
    for (auto const & c : capsulation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("interface-dampening") == children.end())
    {
        if(interface_dampening != nullptr)
        {
            children["interface-dampening"] = interface_dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "half-life")
    {
        half_life = value;
    }
    if(value_path == "is-dampening-enabled")
    {
        is_dampening_enabled = value;
    }
    if(value_path == "last-state-transition-time")
    {
        last_state_transition_time = value;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
    if(value_path == "reuse-threshold")
    {
        reuse_threshold = value;
    }
    if(value_path == "state-transition-count")
    {
        state_transition_count = value;
    }
    if(value_path == "suppress-threshold")
    {
        suppress_threshold = value;
    }
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "dampening";
}

InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::~Interfaces()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::get_children()
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

void InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

InterfaceDampening::Nodes::Node::Show::Dampening::Dampening()
    :
    if_handles(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles>())
	,interfaces(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces>())
{
    if_handles->parent = this;
    children["if-handles"] = if_handles.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "dampening"; yang_parent_name = "show";
}

InterfaceDampening::Nodes::Node::Show::Dampening::~Dampening()
{
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::has_data() const
{
    return (if_handles !=  nullptr && if_handles->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::Dampening::has_operation() const
{
    return is_set(operation)
	|| (if_handles !=  nullptr && is_set(if_handles->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string InterfaceDampening::Nodes::Node::Show::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceDampening::Nodes::Node::Show::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-handles")
    {
        if(if_handles != nullptr)
        {
            children["if-handles"] = if_handles.get();
        }
        else
        {
            if_handles = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::IfHandles>();
            if_handles->parent = this;
            children["if-handles"] = if_handles.get();
        }
        return children.at("if-handles");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::Dampening::get_children()
{
    if(children.find("if-handles") == children.end())
    {
        if(if_handles != nullptr)
        {
            children["if-handles"] = if_handles.get();
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

void InterfaceDampening::Nodes::Node::Show::Dampening::set_value(const std::string & value_path, std::string value)
{
}

InterfaceDampening::Nodes::Node::Show::Show()
    :
    dampening(std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening>())
{
    dampening->parent = this;
    children["dampening"] = dampening.get();

    yang_name = "show"; yang_parent_name = "node";
}

InterfaceDampening::Nodes::Node::Show::~Show()
{
}

bool InterfaceDampening::Nodes::Node::Show::has_data() const
{
    return (dampening !=  nullptr && dampening->has_data());
}

bool InterfaceDampening::Nodes::Node::Show::has_operation() const
{
    return is_set(operation)
	|| (dampening !=  nullptr && is_set(dampening->operation));
}

std::string InterfaceDampening::Nodes::Node::Show::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::Show::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceDampening::Nodes::Node::Show::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dampening")
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening.get();
        }
        else
        {
            dampening = std::make_unique<InterfaceDampening::Nodes::Node::Show::Dampening>();
            dampening->parent = this;
            children["dampening"] = dampening.get();
        }
        return children.at("dampening");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::Show::get_children()
{
    if(children.find("dampening") == children.end())
    {
        if(dampening != nullptr)
        {
            children["dampening"] = dampening.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::Show::set_value(const std::string & value_path, std::string value)
{
}

InterfaceDampening::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    show(std::make_unique<InterfaceDampening::Nodes::Node::Show>())
{
    show->parent = this;
    children["show"] = show.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

InterfaceDampening::Nodes::Node::~Node()
{
}

bool InterfaceDampening::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (show !=  nullptr && show->has_data());
}

bool InterfaceDampening::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (show !=  nullptr && is_set(show->operation));
}

std::string InterfaceDampening::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/nodes/" << get_segment_path();
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

Entity* InterfaceDampening::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "show")
    {
        if(show != nullptr)
        {
            children["show"] = show.get();
        }
        else
        {
            show = std::make_unique<InterfaceDampening::Nodes::Node::Show>();
            show->parent = this;
            children["show"] = show.get();
        }
        return children.at("show");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::Node::get_children()
{
    if(children.find("show") == children.end())
    {
        if(show != nullptr)
        {
            children["show"] = show.get();
        }
    }

    return children;
}

void InterfaceDampening::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

InterfaceDampening::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "interface-dampening";
}

InterfaceDampening::Nodes::~Nodes()
{
}

bool InterfaceDampening::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceDampening::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceDampening::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath InterfaceDampening::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceDampening::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<InterfaceDampening::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::Nodes::get_children()
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

void InterfaceDampening::Nodes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceDampening::InterfaceDampening()
    :
    interfaces(std::make_unique<InterfaceDampening::Interfaces>())
	,nodes(std::make_unique<InterfaceDampening::Nodes>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "interface-dampening"; yang_parent_name = "Cisco-IOS-XR-ifmgr-oper";
}

InterfaceDampening::~InterfaceDampening()
{
}

bool InterfaceDampening::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool InterfaceDampening::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string InterfaceDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-dampening";

    return path_buffer.str();

}

EntityPath InterfaceDampening::get_entity_path(Entity* ancestor) const
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

Entity* InterfaceDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<InterfaceDampening::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<InterfaceDampening::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceDampening::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void InterfaceDampening::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InterfaceDampening::clone_ptr()
{
    return std::make_unique<InterfaceDampening>();
}
InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 actual_line_state{YType::enumeration, "actual-line-state"},
	 actual_state{YType::enumeration, "actual-state"},
	 bandwidth{YType::uint32, "bandwidth"},
	 encapsulation{YType::str, "encapsulation"},
	 encapsulation_type_string{YType::str, "encapsulation-type-string"},
	 interface{YType::str, "interface"},
	 l2_transport{YType::boolean, "l2-transport"},
	 line_state{YType::enumeration, "line-state"},
	 mtu{YType::uint32, "mtu"},
	 parent_interface{YType::str, "parent-interface"},
	 state{YType::enumeration, "state"},
	 sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
	 type{YType::str, "type"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::~Interface()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| actual_line_state.is_set
	|| actual_state.is_set
	|| bandwidth.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| interface.is_set
	|| l2_transport.is_set
	|| line_state.is_set
	|| mtu.is_set
	|| parent_interface.is_set
	|| state.is_set
	|| sub_interface_mtu_overhead.is_set
	|| type.is_set;
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(actual_line_state.operation)
	|| is_set(actual_state.operation)
	|| is_set(bandwidth.operation)
	|| is_set(encapsulation.operation)
	|| is_set(encapsulation_type_string.operation)
	|| is_set(interface.operation)
	|| is_set(l2_transport.operation)
	|| is_set(line_state.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_interface.operation)
	|| is_set(state.operation)
	|| is_set(sub_interface_mtu_overhead.operation)
	|| is_set(type.operation);
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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
    if (actual_line_state.is_set || is_set(actual_line_state.operation)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.operation)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.operation)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.operation)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.operation)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::get_children()
{
    return children;
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "locationview";
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::~Interfaces()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::get_children()
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

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Locationview()
    :
    	locationview_name{YType::str, "locationview-name"}
    	,
    interfaces(std::make_unique<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "locationview"; yang_parent_name = "locationviews";
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::~Locationview()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::has_data() const
{
    return locationview_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::has_operation() const
{
    return is_set(operation)
	|| is_set(locationview_name.operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locationview" <<"[locationview-name='" <<locationview_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locationview_name.is_set || is_set(locationview_name.operation)) leaf_name_data.push_back(locationview_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::get_children()
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

void InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locationview-name")
    {
        locationview_name = value;
    }
}

InterfaceProperties::DataNodes::DataNode::Locationviews::Locationviews()
{
    yang_name = "locationviews"; yang_parent_name = "data-node";
}

InterfaceProperties::DataNodes::DataNode::Locationviews::~Locationviews()
{
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::has_data() const
{
    for (std::size_t index=0; index<locationview.size(); index++)
    {
        if(locationview[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::Locationviews::has_operation() const
{
    for (std::size_t index=0; index<locationview.size(); index++)
    {
        if(locationview[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceProperties::DataNodes::DataNode::Locationviews::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locationviews";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::Locationviews::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceProperties::DataNodes::DataNode::Locationviews::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "locationview")
    {
        for(auto const & c : locationview)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceProperties::DataNodes::DataNode::Locationviews::Locationview>();
        c->parent = this;
        locationview.push_back(std::move(c));
        children[segment_path] = locationview.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::Locationviews::get_children()
{
    for (auto const & c : locationview)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void InterfaceProperties::DataNodes::DataNode::Locationviews::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 actual_line_state{YType::enumeration, "actual-line-state"},
	 actual_state{YType::enumeration, "actual-state"},
	 bandwidth{YType::uint32, "bandwidth"},
	 encapsulation{YType::str, "encapsulation"},
	 encapsulation_type_string{YType::str, "encapsulation-type-string"},
	 interface{YType::str, "interface"},
	 l2_transport{YType::boolean, "l2-transport"},
	 line_state{YType::enumeration, "line-state"},
	 mtu{YType::uint32, "mtu"},
	 parent_interface{YType::str, "parent-interface"},
	 state{YType::enumeration, "state"},
	 sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
	 type{YType::str, "type"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::~Interface()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| actual_line_state.is_set
	|| actual_state.is_set
	|| bandwidth.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| interface.is_set
	|| l2_transport.is_set
	|| line_state.is_set
	|| mtu.is_set
	|| parent_interface.is_set
	|| state.is_set
	|| sub_interface_mtu_overhead.is_set
	|| type.is_set;
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(actual_line_state.operation)
	|| is_set(actual_state.operation)
	|| is_set(bandwidth.operation)
	|| is_set(encapsulation.operation)
	|| is_set(encapsulation_type_string.operation)
	|| is_set(interface.operation)
	|| is_set(l2_transport.operation)
	|| is_set(line_state.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_interface.operation)
	|| is_set(state.operation)
	|| is_set(sub_interface_mtu_overhead.operation)
	|| is_set(type.operation);
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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
    if (actual_line_state.is_set || is_set(actual_line_state.operation)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.operation)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.operation)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.operation)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.operation)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::get_children()
{
    return children;
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "pq-node-location";
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::~Interfaces()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::get_children()
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

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::PqNodeLocation()
    :
    	pq_node_name{YType::str, "pq-node-name"}
    	,
    interfaces(std::make_unique<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "pq-node-location"; yang_parent_name = "pq-node-locations";
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::~PqNodeLocation()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::has_data() const
{
    return pq_node_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::has_operation() const
{
    return is_set(operation)
	|| is_set(pq_node_name.operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pq-node-location" <<"[pq-node-name='" <<pq_node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pq_node_name.is_set || is_set(pq_node_name.operation)) leaf_name_data.push_back(pq_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::get_children()
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

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pq-node-name")
    {
        pq_node_name = value;
    }
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocations()
{
    yang_name = "pq-node-locations"; yang_parent_name = "data-node";
}

InterfaceProperties::DataNodes::DataNode::PqNodeLocations::~PqNodeLocations()
{
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::has_data() const
{
    for (std::size_t index=0; index<pq_node_location.size(); index++)
    {
        if(pq_node_location[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::PqNodeLocations::has_operation() const
{
    for (std::size_t index=0; index<pq_node_location.size(); index++)
    {
        if(pq_node_location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pq-node-locations";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pq-node-location")
    {
        for(auto const & c : pq_node_location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceProperties::DataNodes::DataNode::PqNodeLocations::PqNodeLocation>();
        c->parent = this;
        pq_node_location.push_back(std::move(c));
        children[segment_path] = pq_node_location.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::PqNodeLocations::get_children()
{
    for (auto const & c : pq_node_location)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void InterfaceProperties::DataNodes::DataNode::PqNodeLocations::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 actual_line_state{YType::enumeration, "actual-line-state"},
	 actual_state{YType::enumeration, "actual-state"},
	 bandwidth{YType::uint32, "bandwidth"},
	 encapsulation{YType::str, "encapsulation"},
	 encapsulation_type_string{YType::str, "encapsulation-type-string"},
	 interface{YType::str, "interface"},
	 l2_transport{YType::boolean, "l2-transport"},
	 line_state{YType::enumeration, "line-state"},
	 mtu{YType::uint32, "mtu"},
	 parent_interface{YType::str, "parent-interface"},
	 state{YType::enumeration, "state"},
	 sub_interface_mtu_overhead{YType::uint32, "sub-interface-mtu-overhead"},
	 type{YType::str, "type"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::~Interface()
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| actual_line_state.is_set
	|| actual_state.is_set
	|| bandwidth.is_set
	|| encapsulation.is_set
	|| encapsulation_type_string.is_set
	|| interface.is_set
	|| l2_transport.is_set
	|| line_state.is_set
	|| mtu.is_set
	|| parent_interface.is_set
	|| state.is_set
	|| sub_interface_mtu_overhead.is_set
	|| type.is_set;
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(actual_line_state.operation)
	|| is_set(actual_state.operation)
	|| is_set(bandwidth.operation)
	|| is_set(encapsulation.operation)
	|| is_set(encapsulation_type_string.operation)
	|| is_set(interface.operation)
	|| is_set(l2_transport.operation)
	|| is_set(line_state.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_interface.operation)
	|| is_set(state.operation)
	|| is_set(sub_interface_mtu_overhead.operation)
	|| is_set(type.operation);
}

std::string InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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
    if (actual_line_state.is_set || is_set(actual_line_state.operation)) leaf_name_data.push_back(actual_line_state.get_name_leafdata());
    if (actual_state.is_set || is_set(actual_state.operation)) leaf_name_data.push_back(actual_state.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (encapsulation_type_string.is_set || is_set(encapsulation_type_string.operation)) leaf_name_data.push_back(encapsulation_type_string.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (l2_transport.is_set || is_set(l2_transport.operation)) leaf_name_data.push_back(l2_transport.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sub_interface_mtu_overhead.is_set || is_set(sub_interface_mtu_overhead.operation)) leaf_name_data.push_back(sub_interface_mtu_overhead.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::get_children()
{
    return children;
}

void InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "actual-line-state")
    {
        actual_line_state = value;
    }
    if(value_path == "actual-state")
    {
        actual_state = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "encapsulation-type-string")
    {
        encapsulation_type_string = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "l2-transport")
    {
        l2_transport = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "sub-interface-mtu-overhead")
    {
        sub_interface_mtu_overhead = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "system-view";
}

InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::~Interfaces()
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::get_children()
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

void InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::DataNodes::DataNode::SystemView::SystemView()
    :
    interfaces(std::make_unique<InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "system-view"; yang_parent_name = "data-node";
}

InterfaceProperties::DataNodes::DataNode::SystemView::~SystemView()
{
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::SystemView::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation));
}

std::string InterfaceProperties::DataNodes::DataNode::SystemView::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-view";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::SystemView::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* InterfaceProperties::DataNodes::DataNode::SystemView::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interfaces = std::make_unique<InterfaceProperties::DataNodes::DataNode::SystemView::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::SystemView::get_children()
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

void InterfaceProperties::DataNodes::DataNode::SystemView::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::DataNodes::DataNode::DataNode()
    :
    	data_node_name{YType::str, "data-node-name"}
    	,
    locationviews(std::make_unique<InterfaceProperties::DataNodes::DataNode::Locationviews>())
	,pq_node_locations(std::make_unique<InterfaceProperties::DataNodes::DataNode::PqNodeLocations>())
	,system_view(std::make_unique<InterfaceProperties::DataNodes::DataNode::SystemView>())
{
    locationviews->parent = this;
    children["locationviews"] = locationviews.get();

    pq_node_locations->parent = this;
    children["pq-node-locations"] = pq_node_locations.get();

    system_view->parent = this;
    children["system-view"] = system_view.get();

    yang_name = "data-node"; yang_parent_name = "data-nodes";
}

InterfaceProperties::DataNodes::DataNode::~DataNode()
{
}

bool InterfaceProperties::DataNodes::DataNode::has_data() const
{
    return data_node_name.is_set
	|| (locationviews !=  nullptr && locationviews->has_data())
	|| (pq_node_locations !=  nullptr && pq_node_locations->has_data())
	|| (system_view !=  nullptr && system_view->has_data());
}

bool InterfaceProperties::DataNodes::DataNode::has_operation() const
{
    return is_set(operation)
	|| is_set(data_node_name.operation)
	|| (locationviews !=  nullptr && is_set(locationviews->operation))
	|| (pq_node_locations !=  nullptr && is_set(pq_node_locations->operation))
	|| (system_view !=  nullptr && is_set(system_view->operation));
}

std::string InterfaceProperties::DataNodes::DataNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-node" <<"[data-node-name='" <<data_node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::DataNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-properties/data-nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_node_name.is_set || is_set(data_node_name.operation)) leaf_name_data.push_back(data_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::DataNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "locationviews")
    {
        if(locationviews != nullptr)
        {
            children["locationviews"] = locationviews.get();
        }
        else
        {
            locationviews = std::make_unique<InterfaceProperties::DataNodes::DataNode::Locationviews>();
            locationviews->parent = this;
            children["locationviews"] = locationviews.get();
        }
        return children.at("locationviews");
    }

    if(child_yang_name == "pq-node-locations")
    {
        if(pq_node_locations != nullptr)
        {
            children["pq-node-locations"] = pq_node_locations.get();
        }
        else
        {
            pq_node_locations = std::make_unique<InterfaceProperties::DataNodes::DataNode::PqNodeLocations>();
            pq_node_locations->parent = this;
            children["pq-node-locations"] = pq_node_locations.get();
        }
        return children.at("pq-node-locations");
    }

    if(child_yang_name == "system-view")
    {
        if(system_view != nullptr)
        {
            children["system-view"] = system_view.get();
        }
        else
        {
            system_view = std::make_unique<InterfaceProperties::DataNodes::DataNode::SystemView>();
            system_view->parent = this;
            children["system-view"] = system_view.get();
        }
        return children.at("system-view");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::DataNode::get_children()
{
    if(children.find("locationviews") == children.end())
    {
        if(locationviews != nullptr)
        {
            children["locationviews"] = locationviews.get();
        }
    }

    if(children.find("pq-node-locations") == children.end())
    {
        if(pq_node_locations != nullptr)
        {
            children["pq-node-locations"] = pq_node_locations.get();
        }
    }

    if(children.find("system-view") == children.end())
    {
        if(system_view != nullptr)
        {
            children["system-view"] = system_view.get();
        }
    }

    return children;
}

void InterfaceProperties::DataNodes::DataNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-node-name")
    {
        data_node_name = value;
    }
}

InterfaceProperties::DataNodes::DataNodes()
{
    yang_name = "data-nodes"; yang_parent_name = "interface-properties";
}

InterfaceProperties::DataNodes::~DataNodes()
{
}

bool InterfaceProperties::DataNodes::has_data() const
{
    for (std::size_t index=0; index<data_node.size(); index++)
    {
        if(data_node[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceProperties::DataNodes::has_operation() const
{
    for (std::size_t index=0; index<data_node.size(); index++)
    {
        if(data_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceProperties::DataNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-nodes";

    return path_buffer.str();

}

EntityPath InterfaceProperties::DataNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-properties/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* InterfaceProperties::DataNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data-node")
    {
        for(auto const & c : data_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<InterfaceProperties::DataNodes::DataNode>();
        c->parent = this;
        data_node.push_back(std::move(c));
        children[segment_path] = data_node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::DataNodes::get_children()
{
    for (auto const & c : data_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void InterfaceProperties::DataNodes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceProperties::InterfaceProperties()
    :
    data_nodes(std::make_unique<InterfaceProperties::DataNodes>())
{
    data_nodes->parent = this;
    children["data-nodes"] = data_nodes.get();

    yang_name = "interface-properties"; yang_parent_name = "Cisco-IOS-XR-ifmgr-oper";
}

InterfaceProperties::~InterfaceProperties()
{
}

bool InterfaceProperties::has_data() const
{
    return (data_nodes !=  nullptr && data_nodes->has_data());
}

bool InterfaceProperties::has_operation() const
{
    return is_set(operation)
	|| (data_nodes !=  nullptr && is_set(data_nodes->operation));
}

std::string InterfaceProperties::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ifmgr-oper:interface-properties";

    return path_buffer.str();

}

EntityPath InterfaceProperties::get_entity_path(Entity* ancestor) const
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

Entity* InterfaceProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data-nodes")
    {
        if(data_nodes != nullptr)
        {
            children["data-nodes"] = data_nodes.get();
        }
        else
        {
            data_nodes = std::make_unique<InterfaceProperties::DataNodes>();
            data_nodes->parent = this;
            children["data-nodes"] = data_nodes.get();
        }
        return children.at("data-nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & InterfaceProperties::get_children()
{
    if(children.find("data-nodes") == children.end())
    {
        if(data_nodes != nullptr)
        {
            children["data-nodes"] = data_nodes.get();
        }
    }

    return children;
}

void InterfaceProperties::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> InterfaceProperties::clone_ptr()
{
    return std::make_unique<InterfaceProperties>();
}

const Enum::Value ImStateEnumEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::Value ImStateEnumEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::Value ImStateEnumEnum::im_state_down {2, "im-state-down"};
const Enum::Value ImStateEnumEnum::im_state_up {3, "im-state-up"};
const Enum::Value ImStateEnumEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::Value ImStateEnumEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::Value ImStateEnumEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::Value ImStateEnumEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::Value ImStateEnumEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::Value ImStateEnumEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::Value ImStateEnumEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::Value ImStateEnumEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::Value ImStateEnumEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::Value ImStateEnumEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::Value ImStateEnumEnum::im_state_reset {14, "im-state-reset"};
const Enum::Value ImStateEnumEnum::im_state_operational {15, "im-state-operational"};
const Enum::Value ImStateEnumEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::Value ImStateEnumEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::Value ImStateEnumEnum::im_state_last {18, "im-state-last"};


}
}

