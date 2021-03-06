
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_object_tracking_oper {

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 with_not{YType::boolean, "with-not"}
{
    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks";
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(with_not.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/bool-tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.operation)) leaf_name_data.push_back(with_not.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "with-not")
    {
        with_not = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTracks()
{
    yang_name = "bool-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::has_data() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-track-info")
    {
        for(auto const & c : bool_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.push_back(std::move(c));
        children[segment_path] = bool_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_children()
{
    for (auto const & c : bool_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 weight{YType::uint32, "weight"}
{
    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks";
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(weight.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/threshold-tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTracks()
{
    yang_name = "threshold-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::has_data() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-track-info")
    {
        for(auto const & c : threshold_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.push_back(std::move(c));
        children[segment_path] = threshold_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_children()
{
    for (auto const & c : threshold_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/tracking-interaces/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::TrackingInteraces()
{
    yang_name = "tracking-interaces"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::has_data() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-tracking-info")
    {
        for(auto const & c : interface_tracking_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.push_back(std::move(c));
        children[segment_path] = interface_tracking_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_children()
{
    for (auto const & c : interface_tracking_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::Delayed()
    :
    	time_remaining{YType::uint32, "time-remaining"},
	 track_state{YType::boolean, "track-state"}
{
    yang_name = "delayed"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::has_data() const
{
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::has_operation() const
{
    return is_set(operation)
	|| is_set(time_remaining.operation)
	|| is_set(track_state.operation);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackInfo()
    :
    	seconds_last_change{YType::uint64, "seconds-last-change"},
	 state_change_counter{YType::uint32, "state-change-counter"},
	 threshold_down{YType::uint32, "threshold-down"},
	 threshold_up{YType::uint32, "threshold-up"},
	 track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    bool_tracks(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks>())
	,delayed(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::Delayed>())
	,threshold_tracks(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks>())
	,track_type_info(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo>())
	,tracking_interaces(std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces>())
{
    bool_tracks->parent = this;
    children["bool-tracks"] = bool_tracks.get();

    delayed->parent = this;
    children["delayed"] = delayed.get();

    threshold_tracks->parent = this;
    children["threshold-tracks"] = threshold_tracks.get();

    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    tracking_interaces->parent = this;
    children["tracking-interaces"] = tracking_interaces.get();

    yang_name = "track-info"; yang_parent_name = "track-type-interface";
}

ObjectTracking::TrackTypeInterface::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::has_data() const
{
    return seconds_last_change.is_set
	|| state_change_counter.is_set
	|| threshold_down.is_set
	|| threshold_up.is_set
	|| track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (delayed !=  nullptr && delayed->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data());
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(seconds_last_change.operation)
	|| is_set(state_change_counter.operation)
	|| is_set(threshold_down.operation)
	|| is_set(threshold_up.operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (bool_tracks !=  nullptr && is_set(bool_tracks->operation))
	|| (delayed !=  nullptr && is_set(delayed->operation))
	|| (threshold_tracks !=  nullptr && is_set(threshold_tracks->operation))
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation))
	|| (tracking_interaces !=  nullptr && is_set(tracking_interaces->operation));
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::TrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_last_change.is_set || is_set(seconds_last_change.operation)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.operation)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.operation)) leaf_name_data.push_back(threshold_down.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.operation)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
        else
        {
            bool_tracks = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks>();
            bool_tracks->parent = this;
            children["bool-tracks"] = bool_tracks.get();
        }
        return children.at("bool-tracks");
    }

    if(child_yang_name == "delayed")
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
        else
        {
            delayed = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::Delayed>();
            delayed->parent = this;
            children["delayed"] = delayed.get();
        }
        return children.at("delayed");
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
        else
        {
            threshold_tracks = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks>();
            threshold_tracks->parent = this;
            children["threshold-tracks"] = threshold_tracks.get();
        }
        return children.at("threshold-tracks");
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
        else
        {
            tracking_interaces = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces>();
            tracking_interaces->parent = this;
            children["tracking-interaces"] = tracking_interaces.get();
        }
        return children.at("tracking-interaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::TrackInfo::get_children()
{
    if(children.find("bool-tracks") == children.end())
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
    }

    if(children.find("delayed") == children.end())
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
    }

    if(children.find("threshold-tracks") == children.end())
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
    }

    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    if(children.find("tracking-interaces") == children.end())
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackTypeInterface::TrackTypeInterface()
{
    yang_name = "track-type-interface"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackTypeInterface::~TrackTypeInterface()
{
}

bool ObjectTracking::TrackTypeInterface::has_data() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::has_operation() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-interface";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info")
    {
        for(auto const & c : track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeInterface::TrackInfo>();
        c->parent = this;
        track_info.push_back(std::move(c));
        children[segment_path] = track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterface::get_children()
{
    for (auto const & c : track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief";
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackInfoBrief()
    :
    	track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    track_type_info(std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    yang_name = "track-info-brief"; yang_parent_name = "track-brief";
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::has_data() const
{
    return track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation));
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_children()
{
    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackBriefs::TrackBrief::TrackBrief()
    :
    	track_name{YType::str, "track-name"}
{
    yang_name = "track-brief"; yang_parent_name = "track-briefs";
}

ObjectTracking::TrackBriefs::TrackBrief::~TrackBrief()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::has_data() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return track_name.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(track_name.operation);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-brief" <<"[track-name='" <<track_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::TrackBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-briefs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::TrackBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info-brief")
    {
        for(auto const & c : track_info_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.push_back(std::move(c));
        children[segment_path] = track_info_brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::TrackBrief::get_children()
{
    for (auto const & c : track_info_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-name")
    {
        track_name = value;
    }
}

ObjectTracking::TrackBriefs::TrackBriefs()
{
    yang_name = "track-briefs"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackBriefs::~TrackBriefs()
{
}

bool ObjectTracking::TrackBriefs::has_data() const
{
    for (std::size_t index=0; index<track_brief.size(); index++)
    {
        if(track_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackBriefs::has_operation() const
{
    for (std::size_t index=0; index<track_brief.size(); index++)
    {
        if(track_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-briefs";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-brief")
    {
        for(auto const & c : track_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackBriefs::TrackBrief>();
        c->parent = this;
        track_brief.push_back(std::move(c));
        children[segment_path] = track_brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackBriefs::get_children()
{
    for (auto const & c : track_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackBriefs::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 with_not{YType::boolean, "with-not"}
{
    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(with_not.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/bool-tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.operation)) leaf_name_data.push_back(with_not.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "with-not")
    {
        with_not = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTracks()
{
    yang_name = "bool-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::has_data() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-track-info")
    {
        for(auto const & c : bool_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.push_back(std::move(c));
        children[segment_path] = bool_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_children()
{
    for (auto const & c : bool_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 weight{YType::uint32, "weight"}
{
    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(weight.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/threshold-tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTracks()
{
    yang_name = "threshold-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::has_data() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-track-info")
    {
        for(auto const & c : threshold_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.push_back(std::move(c));
        children[segment_path] = threshold_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_children()
{
    for (auto const & c : threshold_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/tracking-interaces/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::TrackingInteraces()
{
    yang_name = "tracking-interaces"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::has_data() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-tracking-info")
    {
        for(auto const & c : interface_tracking_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.push_back(std::move(c));
        children[segment_path] = interface_tracking_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_children()
{
    for (auto const & c : interface_tracking_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::Delayed()
    :
    	time_remaining{YType::uint32, "time-remaining"},
	 track_state{YType::boolean, "track-state"}
{
    yang_name = "delayed"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::has_data() const
{
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::has_operation() const
{
    return is_set(operation)
	|| is_set(time_remaining.operation)
	|| is_set(track_state.operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackInfo()
    :
    	seconds_last_change{YType::uint64, "seconds-last-change"},
	 state_change_counter{YType::uint32, "state-change-counter"},
	 threshold_down{YType::uint32, "threshold-down"},
	 threshold_up{YType::uint32, "threshold-up"},
	 track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    bool_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks>())
	,delayed(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed>())
	,threshold_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks>())
	,track_type_info(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo>())
	,tracking_interaces(std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces>())
{
    bool_tracks->parent = this;
    children["bool-tracks"] = bool_tracks.get();

    delayed->parent = this;
    children["delayed"] = delayed.get();

    threshold_tracks->parent = this;
    children["threshold-tracks"] = threshold_tracks.get();

    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    tracking_interaces->parent = this;
    children["tracking-interaces"] = tracking_interaces.get();

    yang_name = "track-info"; yang_parent_name = "track-type-rtr-reachability";
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::has_data() const
{
    return seconds_last_change.is_set
	|| state_change_counter.is_set
	|| threshold_down.is_set
	|| threshold_up.is_set
	|| track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (delayed !=  nullptr && delayed->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data());
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(seconds_last_change.operation)
	|| is_set(state_change_counter.operation)
	|| is_set(threshold_down.operation)
	|| is_set(threshold_up.operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (bool_tracks !=  nullptr && is_set(bool_tracks->operation))
	|| (delayed !=  nullptr && is_set(delayed->operation))
	|| (threshold_tracks !=  nullptr && is_set(threshold_tracks->operation))
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation))
	|| (tracking_interaces !=  nullptr && is_set(tracking_interaces->operation));
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_last_change.is_set || is_set(seconds_last_change.operation)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.operation)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.operation)) leaf_name_data.push_back(threshold_down.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.operation)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
        else
        {
            bool_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks>();
            bool_tracks->parent = this;
            children["bool-tracks"] = bool_tracks.get();
        }
        return children.at("bool-tracks");
    }

    if(child_yang_name == "delayed")
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
        else
        {
            delayed = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed>();
            delayed->parent = this;
            children["delayed"] = delayed.get();
        }
        return children.at("delayed");
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
        else
        {
            threshold_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks>();
            threshold_tracks->parent = this;
            children["threshold-tracks"] = threshold_tracks.get();
        }
        return children.at("threshold-tracks");
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
        else
        {
            tracking_interaces = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces>();
            tracking_interaces->parent = this;
            children["tracking-interaces"] = tracking_interaces.get();
        }
        return children.at("tracking-interaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_children()
{
    if(children.find("bool-tracks") == children.end())
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
    }

    if(children.find("delayed") == children.end())
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
    }

    if(children.find("threshold-tracks") == children.end())
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
    }

    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    if(children.find("tracking-interaces") == children.end())
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackTypeRtrReachability::TrackTypeRtrReachability()
{
    yang_name = "track-type-rtr-reachability"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackTypeRtrReachability::~TrackTypeRtrReachability()
{
}

bool ObjectTracking::TrackTypeRtrReachability::has_data() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::has_operation() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeRtrReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-rtr-reachability";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info")
    {
        for(auto const & c : track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeRtrReachability::TrackInfo>();
        c->parent = this;
        track_info.push_back(std::move(c));
        children[segment_path] = track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachability::get_children()
{
    for (auto const & c : track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackInfoBrief()
    :
    	track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    track_type_info(std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    yang_name = "track-info-brief"; yang_parent_name = "track-type-rtr-reachability-brief";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::has_data() const
{
    return track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation));
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_children()
{
    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackTypeRtrReachabilityBrief()
{
    yang_name = "track-type-rtr-reachability-brief"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackTypeRtrReachabilityBrief::~TrackTypeRtrReachabilityBrief()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::has_data() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-rtr-reachability-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeRtrReachabilityBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeRtrReachabilityBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info-brief")
    {
        for(auto const & c : track_info_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.push_back(std::move(c));
        children[segment_path] = track_info_brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeRtrReachabilityBrief::get_children()
{
    for (auto const & c : track_info_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 with_not{YType::boolean, "with-not"}
{
    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks";
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(with_not.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.operation)) leaf_name_data.push_back(with_not.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "with-not")
    {
        with_not = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTracks()
{
    yang_name = "bool-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::has_data() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-track-info")
    {
        for(auto const & c : bool_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.push_back(std::move(c));
        children[segment_path] = bool_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_children()
{
    for (auto const & c : bool_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 weight{YType::uint32, "weight"}
{
    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks";
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(weight.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTracks()
{
    yang_name = "threshold-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::has_data() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-track-info")
    {
        for(auto const & c : threshold_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.push_back(std::move(c));
        children[segment_path] = threshold_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_children()
{
    for (auto const & c : threshold_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::TrackingInteraces()
{
    yang_name = "tracking-interaces"; yang_parent_name = "track-info";
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::has_data() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-tracking-info")
    {
        for(auto const & c : interface_tracking_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.push_back(std::move(c));
        children[segment_path] = interface_tracking_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_children()
{
    for (auto const & c : interface_tracking_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::Tracks::Track::TrackInfo::Delayed::Delayed()
    :
    	time_remaining{YType::uint32, "time-remaining"},
	 track_state{YType::boolean, "track-state"}
{
    yang_name = "delayed"; yang_parent_name = "track-info";
}

ObjectTracking::Tracks::Track::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::Delayed::has_data() const
{
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::Delayed::has_operation() const
{
    return is_set(operation)
	|| is_set(time_remaining.operation)
	|| is_set(track_state.operation);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_children()
{
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::Delayed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
}

ObjectTracking::Tracks::Track::TrackInfo::TrackInfo()
    :
    	seconds_last_change{YType::uint64, "seconds-last-change"},
	 state_change_counter{YType::uint32, "state-change-counter"},
	 threshold_down{YType::uint32, "threshold-down"},
	 threshold_up{YType::uint32, "threshold-up"},
	 track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    bool_tracks(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::BoolTracks>())
	,delayed(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::Delayed>())
	,threshold_tracks(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks>())
	,track_type_info(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo>())
	,tracking_interaces(std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces>())
{
    bool_tracks->parent = this;
    children["bool-tracks"] = bool_tracks.get();

    delayed->parent = this;
    children["delayed"] = delayed.get();

    threshold_tracks->parent = this;
    children["threshold-tracks"] = threshold_tracks.get();

    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    tracking_interaces->parent = this;
    children["tracking-interaces"] = tracking_interaces.get();

    yang_name = "track-info"; yang_parent_name = "track";
}

ObjectTracking::Tracks::Track::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::has_data() const
{
    return seconds_last_change.is_set
	|| state_change_counter.is_set
	|| threshold_down.is_set
	|| threshold_up.is_set
	|| track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (delayed !=  nullptr && delayed->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data());
}

bool ObjectTracking::Tracks::Track::TrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(seconds_last_change.operation)
	|| is_set(state_change_counter.operation)
	|| is_set(threshold_down.operation)
	|| is_set(threshold_up.operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (bool_tracks !=  nullptr && is_set(bool_tracks->operation))
	|| (delayed !=  nullptr && is_set(delayed->operation))
	|| (threshold_tracks !=  nullptr && is_set(threshold_tracks->operation))
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation))
	|| (tracking_interaces !=  nullptr && is_set(tracking_interaces->operation));
}

std::string ObjectTracking::Tracks::Track::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::TrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_last_change.is_set || is_set(seconds_last_change.operation)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.operation)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.operation)) leaf_name_data.push_back(threshold_down.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.operation)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
        else
        {
            bool_tracks = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::BoolTracks>();
            bool_tracks->parent = this;
            children["bool-tracks"] = bool_tracks.get();
        }
        return children.at("bool-tracks");
    }

    if(child_yang_name == "delayed")
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
        else
        {
            delayed = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::Delayed>();
            delayed->parent = this;
            children["delayed"] = delayed.get();
        }
        return children.at("delayed");
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
        else
        {
            threshold_tracks = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks>();
            threshold_tracks->parent = this;
            children["threshold-tracks"] = threshold_tracks.get();
        }
        return children.at("threshold-tracks");
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
        else
        {
            tracking_interaces = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces>();
            tracking_interaces->parent = this;
            children["tracking-interaces"] = tracking_interaces.get();
        }
        return children.at("tracking-interaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::TrackInfo::get_children()
{
    if(children.find("bool-tracks") == children.end())
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
    }

    if(children.find("delayed") == children.end())
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
    }

    if(children.find("threshold-tracks") == children.end())
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
    }

    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    if(children.find("tracking-interaces") == children.end())
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::Tracks::Track::Track()
    :
    	track_name{YType::str, "track-name"}
{
    yang_name = "track"; yang_parent_name = "tracks";
}

ObjectTracking::Tracks::Track::~Track()
{
}

bool ObjectTracking::Tracks::Track::has_data() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return track_name.is_set;
}

bool ObjectTracking::Tracks::Track::has_operation() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(track_name.operation);
}

std::string ObjectTracking::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[track-name='" <<track_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.operation)) leaf_name_data.push_back(track_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info")
    {
        for(auto const & c : track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::Tracks::Track::TrackInfo>();
        c->parent = this;
        track_info.push_back(std::move(c));
        children[segment_path] = track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::Track::get_children()
{
    for (auto const & c : track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-name")
    {
        track_name = value;
    }
}

ObjectTracking::Tracks::Tracks()
{
    yang_name = "tracks"; yang_parent_name = "object-tracking";
}

ObjectTracking::Tracks::~Tracks()
{
}

bool ObjectTracking::Tracks::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::Tracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::Tracks::Track>();
        c->parent = this;
        track.push_back(std::move(c));
        children[segment_path] = track.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::Tracks::get_children()
{
    for (auto const & c : track)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::Tracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief";
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackInfoBrief()
    :
    	track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    track_type_info(std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    yang_name = "track-info-brief"; yang_parent_name = "track-type-ipv4-route-brief";
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::has_data() const
{
    return track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation));
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_children()
{
    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackTypeIpv4RouteBrief()
{
    yang_name = "track-type-ipv4-route-brief"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackTypeIpv4RouteBrief::~TrackTypeIpv4RouteBrief()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::has_data() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-ipv4-route-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4RouteBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4RouteBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info-brief")
    {
        for(auto const & c : track_info_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.push_back(std::move(c));
        children[segment_path] = track_info_brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4RouteBrief::get_children()
{
    for (auto const & c : track_info_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 with_not{YType::boolean, "with-not"}
{
    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(with_not.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/bool-tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.operation)) leaf_name_data.push_back(with_not.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "with-not")
    {
        with_not = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTracks()
{
    yang_name = "bool-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::has_data() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.size(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-track-info")
    {
        for(auto const & c : bool_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.push_back(std::move(c));
        children[segment_path] = bool_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_children()
{
    for (auto const & c : bool_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    	object_name{YType::str, "object-name"},
	 track_state{YType::boolean, "track-state"},
	 weight{YType::uint32, "weight"}
{
    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(object_name.operation)
	|| is_set(track_state.operation)
	|| is_set(weight.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/threshold-tracks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTracks()
{
    yang_name = "threshold-tracks"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::has_data() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.size(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "threshold-track-info")
    {
        for(auto const & c : threshold_track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.push_back(std::move(c));
        children[segment_path] = threshold_track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_children()
{
    for (auto const & c : threshold_track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/tracking-interaces/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::TrackingInteraces()
{
    yang_name = "tracking-interaces"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::has_data() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.size(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-tracking-info")
    {
        for(auto const & c : interface_tracking_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.push_back(std::move(c));
        children[segment_path] = interface_tracking_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_children()
{
    for (auto const & c : interface_tracking_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::Delayed()
    :
    	time_remaining{YType::uint32, "time-remaining"},
	 track_state{YType::boolean, "track-state"}
{
    yang_name = "delayed"; yang_parent_name = "track-info";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::has_data() const
{
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::has_operation() const
{
    return is_set(operation)
	|| is_set(time_remaining.operation)
	|| is_set(track_state.operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.operation)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackInfo()
    :
    	seconds_last_change{YType::uint64, "seconds-last-change"},
	 state_change_counter{YType::uint32, "state-change-counter"},
	 threshold_down{YType::uint32, "threshold-down"},
	 threshold_up{YType::uint32, "threshold-up"},
	 track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    bool_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks>())
	,delayed(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed>())
	,threshold_tracks(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks>())
	,track_type_info(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo>())
	,tracking_interaces(std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces>())
{
    bool_tracks->parent = this;
    children["bool-tracks"] = bool_tracks.get();

    delayed->parent = this;
    children["delayed"] = delayed.get();

    threshold_tracks->parent = this;
    children["threshold-tracks"] = threshold_tracks.get();

    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    tracking_interaces->parent = this;
    children["tracking-interaces"] = tracking_interaces.get();

    yang_name = "track-info"; yang_parent_name = "track-type-ipv4-route";
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::has_data() const
{
    return seconds_last_change.is_set
	|| state_change_counter.is_set
	|| threshold_down.is_set
	|| threshold_up.is_set
	|| track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (delayed !=  nullptr && delayed->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data());
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(seconds_last_change.operation)
	|| is_set(state_change_counter.operation)
	|| is_set(threshold_down.operation)
	|| is_set(threshold_up.operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (bool_tracks !=  nullptr && is_set(bool_tracks->operation))
	|| (delayed !=  nullptr && is_set(delayed->operation))
	|| (threshold_tracks !=  nullptr && is_set(threshold_tracks->operation))
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation))
	|| (tracking_interaces !=  nullptr && is_set(tracking_interaces->operation));
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_last_change.is_set || is_set(seconds_last_change.operation)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.operation)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.operation)) leaf_name_data.push_back(threshold_down.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.operation)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
        else
        {
            bool_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks>();
            bool_tracks->parent = this;
            children["bool-tracks"] = bool_tracks.get();
        }
        return children.at("bool-tracks");
    }

    if(child_yang_name == "delayed")
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
        else
        {
            delayed = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed>();
            delayed->parent = this;
            children["delayed"] = delayed.get();
        }
        return children.at("delayed");
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
        else
        {
            threshold_tracks = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks>();
            threshold_tracks->parent = this;
            children["threshold-tracks"] = threshold_tracks.get();
        }
        return children.at("threshold-tracks");
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
        else
        {
            tracking_interaces = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces>();
            tracking_interaces->parent = this;
            children["tracking-interaces"] = tracking_interaces.get();
        }
        return children.at("tracking-interaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_children()
{
    if(children.find("bool-tracks") == children.end())
    {
        if(bool_tracks != nullptr)
        {
            children["bool-tracks"] = bool_tracks.get();
        }
    }

    if(children.find("delayed") == children.end())
    {
        if(delayed != nullptr)
        {
            children["delayed"] = delayed.get();
        }
    }

    if(children.find("threshold-tracks") == children.end())
    {
        if(threshold_tracks != nullptr)
        {
            children["threshold-tracks"] = threshold_tracks.get();
        }
    }

    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    if(children.find("tracking-interaces") == children.end())
    {
        if(tracking_interaces != nullptr)
        {
            children["tracking-interaces"] = tracking_interaces.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
    }
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackTypeIpv4Route::TrackTypeIpv4Route()
{
    yang_name = "track-type-ipv4-route"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackTypeIpv4Route::~TrackTypeIpv4Route()
{
}

bool ObjectTracking::TrackTypeIpv4Route::has_data() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::has_operation() const
{
    for (std::size_t index=0; index<track_info.size(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeIpv4Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-ipv4-route";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeIpv4Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeIpv4Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info")
    {
        for(auto const & c : track_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeIpv4Route::TrackInfo>();
        c->parent = this;
        track_info.push_back(std::move(c));
        children[segment_path] = track_info.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeIpv4Route::get_children()
{
    for (auto const & c : track_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
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

Entity* ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    	next_hop{YType::str, "next-hop"},
	 prefix{YType::uint32, "prefix"},
	 prefix_length{YType::uint32, "prefix-length"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "route-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    return next_hop.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(vrf.operation);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    	ipsla_op_id{YType::uint32, "ipsla-op-id"},
	 return_code{YType::uint32, "return-code"},
	 rtt{YType::uint32, "rtt"}
{
    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    return ipsla_op_id.is_set
	|| return_code.is_set
	|| rtt.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(ipsla_op_id.operation)
	|| is_set(return_code.operation)
	|| is_set(rtt.operation);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.operation)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.operation)) leaf_name_data.push_back(return_code.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.operation)) leaf_name_data.push_back(rtt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
    }
    if(value_path == "return-code")
    {
        return_code = value;
    }
    if(value_path == "rtt")
    {
        rtt = value;
    }
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    	debounce_count{YType::uint32, "debounce-count"},
	 destination_address{YType::uint32, "destination-address"},
	 interface_name{YType::str, "interface-name"},
	 rate{YType::uint32, "rate"}
{
    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info";
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    return debounce_count.is_set
	|| destination_address.is_set
	|| interface_name.is_set
	|| rate.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(operation)
	|| is_set(debounce_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(rate.operation);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.operation)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children()
{
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    	discriminant{YType::enumeration, "discriminant"}
    	,
    bfd_tracks(std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
	,interface_tracks(std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
	,ipsla_tracks(std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
	,route_tracks(std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
{
    bfd_tracks->parent = this;
    children["bfd-tracks"] = bfd_tracks.get();

    interface_tracks->parent = this;
    children["interface-tracks"] = interface_tracks.get();

    ipsla_tracks->parent = this;
    children["ipsla-tracks"] = ipsla_tracks.get();

    route_tracks->parent = this;
    children["route-tracks"] = route_tracks.get();

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief";
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    return discriminant.is_set
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data())
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data());
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(discriminant.operation)
	|| (bfd_tracks !=  nullptr && is_set(bfd_tracks->operation))
	|| (interface_tracks !=  nullptr && is_set(interface_tracks->operation))
	|| (ipsla_tracks !=  nullptr && is_set(ipsla_tracks->operation))
	|| (route_tracks !=  nullptr && is_set(route_tracks->operation));
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.operation)) leaf_name_data.push_back(discriminant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
        else
        {
            bfd_tracks = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
            bfd_tracks->parent = this;
            children["bfd-tracks"] = bfd_tracks.get();
        }
        return children.at("bfd-tracks");
    }

    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
        else
        {
            interface_tracks = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
            interface_tracks->parent = this;
            children["interface-tracks"] = interface_tracks.get();
        }
        return children.at("interface-tracks");
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        else
        {
            ipsla_tracks = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
            ipsla_tracks->parent = this;
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
        return children.at("ipsla-tracks");
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
        else
        {
            route_tracks = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
            route_tracks->parent = this;
            children["route-tracks"] = route_tracks.get();
        }
        return children.at("route-tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_children()
{
    if(children.find("bfd-tracks") == children.end())
    {
        if(bfd_tracks != nullptr)
        {
            children["bfd-tracks"] = bfd_tracks.get();
        }
    }

    if(children.find("interface-tracks") == children.end())
    {
        if(interface_tracks != nullptr)
        {
            children["interface-tracks"] = interface_tracks.get();
        }
    }

    if(children.find("ipsla-tracks") == children.end())
    {
        if(ipsla_tracks != nullptr)
        {
            children["ipsla-tracks"] = ipsla_tracks.get();
        }
    }

    if(children.find("route-tracks") == children.end())
    {
        if(route_tracks != nullptr)
        {
            children["route-tracks"] = route_tracks.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
    }
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackInfoBrief()
    :
    	track_state{YType::boolean, "track-state"},
	 tracke_name{YType::str, "tracke-name"},
	 type{YType::enumeration, "type"}
    	,
    track_type_info(std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;
    children["track-type-info"] = track_type_info.get();

    yang_name = "track-info-brief"; yang_parent_name = "track-type-interface-brief";
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::has_data() const
{
    return track_state.is_set
	|| tracke_name.is_set
	|| type.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(track_state.operation)
	|| is_set(tracke_name.operation)
	|| is_set(type.operation)
	|| (track_type_info !=  nullptr && is_set(track_type_info->operation));
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_state.is_set || is_set(track_state.operation)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (tracke_name.is_set || is_set(tracke_name.operation)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-type-info")
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
        else
        {
            track_type_info = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo>();
            track_type_info->parent = this;
            children["track-type-info"] = track_type_info.get();
        }
        return children.at("track-type-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_children()
{
    if(children.find("track-type-info") == children.end())
    {
        if(track_type_info != nullptr)
        {
            children["track-type-info"] = track_type_info.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track-state")
    {
        track_state = value;
    }
    if(value_path == "tracke-name")
    {
        tracke_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

ObjectTracking::TrackTypeInterfaceBrief::TrackTypeInterfaceBrief()
{
    yang_name = "track-type-interface-brief"; yang_parent_name = "object-tracking";
}

ObjectTracking::TrackTypeInterfaceBrief::~TrackTypeInterfaceBrief()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.size(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-interface-brief";

    return path_buffer.str();

}

EntityPath ObjectTracking::TrackTypeInterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ObjectTracking::TrackTypeInterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-info-brief")
    {
        for(auto const & c : track_info_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.push_back(std::move(c));
        children[segment_path] = track_info_brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::TrackTypeInterfaceBrief::get_children()
{
    for (auto const & c : track_info_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::set_value(const std::string & value_path, std::string value)
{
}

ObjectTracking::ObjectTracking()
    :
    track_briefs(std::make_unique<ObjectTracking::TrackBriefs>())
	,track_type_interface(std::make_unique<ObjectTracking::TrackTypeInterface>())
	,track_type_interface_brief(std::make_unique<ObjectTracking::TrackTypeInterfaceBrief>())
	,track_type_ipv4_route(std::make_unique<ObjectTracking::TrackTypeIpv4Route>())
	,track_type_ipv4_route_brief(std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief>())
	,track_type_rtr_reachability(std::make_unique<ObjectTracking::TrackTypeRtrReachability>())
	,track_type_rtr_reachability_brief(std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief>())
	,tracks(std::make_unique<ObjectTracking::Tracks>())
{
    track_briefs->parent = this;
    children["track-briefs"] = track_briefs.get();

    track_type_interface->parent = this;
    children["track-type-interface"] = track_type_interface.get();

    track_type_interface_brief->parent = this;
    children["track-type-interface-brief"] = track_type_interface_brief.get();

    track_type_ipv4_route->parent = this;
    children["track-type-ipv4-route"] = track_type_ipv4_route.get();

    track_type_ipv4_route_brief->parent = this;
    children["track-type-ipv4-route-brief"] = track_type_ipv4_route_brief.get();

    track_type_rtr_reachability->parent = this;
    children["track-type-rtr-reachability"] = track_type_rtr_reachability.get();

    track_type_rtr_reachability_brief->parent = this;
    children["track-type-rtr-reachability-brief"] = track_type_rtr_reachability_brief.get();

    tracks->parent = this;
    children["tracks"] = tracks.get();

    yang_name = "object-tracking"; yang_parent_name = "Cisco-IOS-XR-manageability-object-tracking-oper";
}

ObjectTracking::~ObjectTracking()
{
}

bool ObjectTracking::has_data() const
{
    return (track_briefs !=  nullptr && track_briefs->has_data())
	|| (track_type_interface !=  nullptr && track_type_interface->has_data())
	|| (track_type_interface_brief !=  nullptr && track_type_interface_brief->has_data())
	|| (track_type_ipv4_route !=  nullptr && track_type_ipv4_route->has_data())
	|| (track_type_ipv4_route_brief !=  nullptr && track_type_ipv4_route_brief->has_data())
	|| (track_type_rtr_reachability !=  nullptr && track_type_rtr_reachability->has_data())
	|| (track_type_rtr_reachability_brief !=  nullptr && track_type_rtr_reachability_brief->has_data())
	|| (tracks !=  nullptr && tracks->has_data());
}

bool ObjectTracking::has_operation() const
{
    return is_set(operation)
	|| (track_briefs !=  nullptr && is_set(track_briefs->operation))
	|| (track_type_interface !=  nullptr && is_set(track_type_interface->operation))
	|| (track_type_interface_brief !=  nullptr && is_set(track_type_interface_brief->operation))
	|| (track_type_ipv4_route !=  nullptr && is_set(track_type_ipv4_route->operation))
	|| (track_type_ipv4_route_brief !=  nullptr && is_set(track_type_ipv4_route_brief->operation))
	|| (track_type_rtr_reachability !=  nullptr && is_set(track_type_rtr_reachability->operation))
	|| (track_type_rtr_reachability_brief !=  nullptr && is_set(track_type_rtr_reachability_brief->operation))
	|| (tracks !=  nullptr && is_set(tracks->operation));
}

std::string ObjectTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking";

    return path_buffer.str();

}

EntityPath ObjectTracking::get_entity_path(Entity* ancestor) const
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

Entity* ObjectTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "track-briefs")
    {
        if(track_briefs != nullptr)
        {
            children["track-briefs"] = track_briefs.get();
        }
        else
        {
            track_briefs = std::make_unique<ObjectTracking::TrackBriefs>();
            track_briefs->parent = this;
            children["track-briefs"] = track_briefs.get();
        }
        return children.at("track-briefs");
    }

    if(child_yang_name == "track-type-interface")
    {
        if(track_type_interface != nullptr)
        {
            children["track-type-interface"] = track_type_interface.get();
        }
        else
        {
            track_type_interface = std::make_unique<ObjectTracking::TrackTypeInterface>();
            track_type_interface->parent = this;
            children["track-type-interface"] = track_type_interface.get();
        }
        return children.at("track-type-interface");
    }

    if(child_yang_name == "track-type-interface-brief")
    {
        if(track_type_interface_brief != nullptr)
        {
            children["track-type-interface-brief"] = track_type_interface_brief.get();
        }
        else
        {
            track_type_interface_brief = std::make_unique<ObjectTracking::TrackTypeInterfaceBrief>();
            track_type_interface_brief->parent = this;
            children["track-type-interface-brief"] = track_type_interface_brief.get();
        }
        return children.at("track-type-interface-brief");
    }

    if(child_yang_name == "track-type-ipv4-route")
    {
        if(track_type_ipv4_route != nullptr)
        {
            children["track-type-ipv4-route"] = track_type_ipv4_route.get();
        }
        else
        {
            track_type_ipv4_route = std::make_unique<ObjectTracking::TrackTypeIpv4Route>();
            track_type_ipv4_route->parent = this;
            children["track-type-ipv4-route"] = track_type_ipv4_route.get();
        }
        return children.at("track-type-ipv4-route");
    }

    if(child_yang_name == "track-type-ipv4-route-brief")
    {
        if(track_type_ipv4_route_brief != nullptr)
        {
            children["track-type-ipv4-route-brief"] = track_type_ipv4_route_brief.get();
        }
        else
        {
            track_type_ipv4_route_brief = std::make_unique<ObjectTracking::TrackTypeIpv4RouteBrief>();
            track_type_ipv4_route_brief->parent = this;
            children["track-type-ipv4-route-brief"] = track_type_ipv4_route_brief.get();
        }
        return children.at("track-type-ipv4-route-brief");
    }

    if(child_yang_name == "track-type-rtr-reachability")
    {
        if(track_type_rtr_reachability != nullptr)
        {
            children["track-type-rtr-reachability"] = track_type_rtr_reachability.get();
        }
        else
        {
            track_type_rtr_reachability = std::make_unique<ObjectTracking::TrackTypeRtrReachability>();
            track_type_rtr_reachability->parent = this;
            children["track-type-rtr-reachability"] = track_type_rtr_reachability.get();
        }
        return children.at("track-type-rtr-reachability");
    }

    if(child_yang_name == "track-type-rtr-reachability-brief")
    {
        if(track_type_rtr_reachability_brief != nullptr)
        {
            children["track-type-rtr-reachability-brief"] = track_type_rtr_reachability_brief.get();
        }
        else
        {
            track_type_rtr_reachability_brief = std::make_unique<ObjectTracking::TrackTypeRtrReachabilityBrief>();
            track_type_rtr_reachability_brief->parent = this;
            children["track-type-rtr-reachability-brief"] = track_type_rtr_reachability_brief.get();
        }
        return children.at("track-type-rtr-reachability-brief");
    }

    if(child_yang_name == "tracks")
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks.get();
        }
        else
        {
            tracks = std::make_unique<ObjectTracking::Tracks>();
            tracks->parent = this;
            children["tracks"] = tracks.get();
        }
        return children.at("tracks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ObjectTracking::get_children()
{
    if(children.find("track-briefs") == children.end())
    {
        if(track_briefs != nullptr)
        {
            children["track-briefs"] = track_briefs.get();
        }
    }

    if(children.find("track-type-interface") == children.end())
    {
        if(track_type_interface != nullptr)
        {
            children["track-type-interface"] = track_type_interface.get();
        }
    }

    if(children.find("track-type-interface-brief") == children.end())
    {
        if(track_type_interface_brief != nullptr)
        {
            children["track-type-interface-brief"] = track_type_interface_brief.get();
        }
    }

    if(children.find("track-type-ipv4-route") == children.end())
    {
        if(track_type_ipv4_route != nullptr)
        {
            children["track-type-ipv4-route"] = track_type_ipv4_route.get();
        }
    }

    if(children.find("track-type-ipv4-route-brief") == children.end())
    {
        if(track_type_ipv4_route_brief != nullptr)
        {
            children["track-type-ipv4-route-brief"] = track_type_ipv4_route_brief.get();
        }
    }

    if(children.find("track-type-rtr-reachability") == children.end())
    {
        if(track_type_rtr_reachability != nullptr)
        {
            children["track-type-rtr-reachability"] = track_type_rtr_reachability.get();
        }
    }

    if(children.find("track-type-rtr-reachability-brief") == children.end())
    {
        if(track_type_rtr_reachability_brief != nullptr)
        {
            children["track-type-rtr-reachability-brief"] = track_type_rtr_reachability_brief.get();
        }
    }

    if(children.find("tracks") == children.end())
    {
        if(tracks != nullptr)
        {
            children["tracks"] = tracks.get();
        }
    }

    return children;
}

void ObjectTracking::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ObjectTracking::clone_ptr()
{
    return std::make_unique<ObjectTracking>();
}

const Enum::Value TrackEnum::interface_type {1, "interface-type"};
const Enum::Value TrackEnum::route_type {2, "route-type"};
const Enum::Value TrackEnum::bool_and_type {3, "bool-and-type"};
const Enum::Value TrackEnum::bool_or_type {4, "bool-or-type"};
const Enum::Value TrackEnum::ipsla_type {5, "ipsla-type"};
const Enum::Value TrackEnum::undefined_type {6, "undefined-type"};
const Enum::Value TrackEnum::threshold_weight {7, "threshold-weight"};
const Enum::Value TrackEnum::threshold_percentage {8, "threshold-percentage"};
const Enum::Value TrackEnum::bfd_type {9, "bfd-type"};


}
}

