
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_linux_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_clock_linux_cfg {

Clock::TimeZone::TimeZone()
    :
    	area_name{YType::str, "area-name"},
	 time_zone_name{YType::str, "time-zone-name"}
{
    yang_name = "time-zone"; yang_parent_name = "clock";
}

Clock::TimeZone::~TimeZone()
{
}

bool Clock::TimeZone::has_data() const
{
    return area_name.is_set
	|| time_zone_name.is_set;
}

bool Clock::TimeZone::has_operation() const
{
    return is_set(operation)
	|| is_set(area_name.operation)
	|| is_set(time_zone_name.operation);
}

std::string Clock::TimeZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-zone";

    return path_buffer.str();

}

EntityPath Clock::TimeZone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_name.is_set || is_set(area_name.operation)) leaf_name_data.push_back(area_name.get_name_leafdata());
    if (time_zone_name.is_set || is_set(time_zone_name.operation)) leaf_name_data.push_back(time_zone_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Clock::TimeZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Clock::TimeZone::get_children()
{
    return children;
}

void Clock::TimeZone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-name")
    {
        area_name = value;
    }
    if(value_path == "time-zone-name")
    {
        time_zone_name = value;
    }
}

Clock::Clock()
    :
    time_zone(nullptr) // presence node
{
    yang_name = "clock"; yang_parent_name = "Cisco-IOS-XR-infra-infra-clock-linux-cfg";
}

Clock::~Clock()
{
}

bool Clock::has_data() const
{
    return (time_zone !=  nullptr && time_zone->has_data());
}

bool Clock::has_operation() const
{
    return is_set(operation)
	|| (time_zone !=  nullptr && is_set(time_zone->operation));
}

std::string Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock";

    return path_buffer.str();

}

EntityPath Clock::get_entity_path(Entity* ancestor) const
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

Entity* Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "time-zone")
    {
        if(time_zone != nullptr)
        {
            children["time-zone"] = time_zone.get();
        }
        else
        {
            time_zone = std::make_unique<Clock::TimeZone>();
            time_zone->parent = this;
            children["time-zone"] = time_zone.get();
        }
        return children.at("time-zone");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Clock::get_children()
{
    if(children.find("time-zone") == children.end())
    {
        if(time_zone != nullptr)
        {
            children["time-zone"] = time_zone.get();
        }
    }

    return children;
}

void Clock::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Clock::clone_ptr()
{
    return std::make_unique<Clock>();
}


}
}

