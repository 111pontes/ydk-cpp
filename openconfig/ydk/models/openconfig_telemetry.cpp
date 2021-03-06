
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_telemetry.hpp"

namespace ydk {
namespace openconfig_telemetry {

TelemetrySystem::SensorGroups::SensorGroup::Config::Config()
    :
    	sensor_group_id{YType::str, "sensor-group-id"}
{
    yang_name = "config"; yang_parent_name = "sensor-group";
}

TelemetrySystem::SensorGroups::SensorGroup::Config::~Config()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::Config::has_data() const
{
    return sensor_group_id.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(sensor_group_id.operation);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.operation)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::SensorGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::Config::get_children()
{
    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
    }
}

TelemetrySystem::SensorGroups::SensorGroup::State::State()
    :
    	sensor_group_id{YType::str, "sensor-group-id"}
{
    yang_name = "state"; yang_parent_name = "sensor-group";
}

TelemetrySystem::SensorGroups::SensorGroup::State::~State()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::State::has_data() const
{
    return sensor_group_id.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::State::has_operation() const
{
    return is_set(operation)
	|| is_set(sensor_group_id.operation);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.operation)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::SensorGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::State::get_children()
{
    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
    }
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::Config()
    :
    	exclude_filter{YType::str, "exclude-filter"},
	 path{YType::str, "path"}
{
    yang_name = "config"; yang_parent_name = "sensor-path";
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::~Config()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::has_data() const
{
    return exclude_filter.is_set
	|| path.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude_filter.operation)
	|| is_set(path.operation);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_filter.is_set || is_set(exclude_filter.operation)) leaf_name_data.push_back(exclude_filter.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::get_children()
{
    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-filter")
    {
        exclude_filter = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::State()
    :
    	exclude_filter{YType::str, "exclude-filter"},
	 path{YType::str, "path"}
{
    yang_name = "state"; yang_parent_name = "sensor-path";
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::~State()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::has_data() const
{
    return exclude_filter.is_set
	|| path.is_set;
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude_filter.operation)
	|| is_set(path.operation);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_filter.is_set || is_set(exclude_filter.operation)) leaf_name_data.push_back(exclude_filter.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::get_children()
{
    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-filter")
    {
        exclude_filter = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::SensorPath()
    :
    	path{YType::str, "path"}
    	,
    config(std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config>())
	,state(std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "sensor-path"; yang_parent_name = "sensor-paths";
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::~SensorPath()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_data() const
{
    return path.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path" <<"[path='" <<path.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPaths()
{
    yang_name = "sensor-paths"; yang_parent_name = "sensor-group";
}

TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::~SensorPaths()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::has_data() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-paths";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath>();
        c->parent = this;
        sensor_path.push_back(std::move(c));
        children[segment_path] = sensor_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::get_children()
{
    for (auto const & c : sensor_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::SensorGroups::SensorGroup::SensorGroup()
    :
    	sensor_group_id{YType::str, "sensor-group-id"}
    	,
    config(std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::Config>())
	,sensor_paths(std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths>())
	,state(std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::State>())
{
    config->parent = this;
    children["config"] = config.get();

    sensor_paths->parent = this;
    children["sensor-paths"] = sensor_paths.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "sensor-group"; yang_parent_name = "sensor-groups";
}

TelemetrySystem::SensorGroups::SensorGroup::~SensorGroup()
{
}

bool TelemetrySystem::SensorGroups::SensorGroup::has_data() const
{
    return sensor_group_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (sensor_paths !=  nullptr && sensor_paths->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::SensorGroups::SensorGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(sensor_group_id.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (sensor_paths !=  nullptr && is_set(sensor_paths->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::SensorGroups::SensorGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-group" <<"[sensor-group-id='" <<sensor_group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::SensorGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/sensor-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group_id.is_set || is_set(sensor_group_id.operation)) leaf_name_data.push_back(sensor_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::SensorGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "sensor-paths")
    {
        if(sensor_paths != nullptr)
        {
            children["sensor-paths"] = sensor_paths.get();
        }
        else
        {
            sensor_paths = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::SensorPaths>();
            sensor_paths->parent = this;
            children["sensor-paths"] = sensor_paths.get();
        }
        return children.at("sensor-paths");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::SensorGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("sensor-paths") == children.end())
    {
        if(sensor_paths != nullptr)
        {
            children["sensor-paths"] = sensor_paths.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::SensorGroups::SensorGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sensor-group-id")
    {
        sensor_group_id = value;
    }
}

TelemetrySystem::SensorGroups::SensorGroups()
{
    yang_name = "sensor-groups"; yang_parent_name = "telemetry-system";
}

TelemetrySystem::SensorGroups::~SensorGroups()
{
}

bool TelemetrySystem::SensorGroups::has_data() const
{
    for (std::size_t index=0; index<sensor_group.size(); index++)
    {
        if(sensor_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::SensorGroups::has_operation() const
{
    for (std::size_t index=0; index<sensor_group.size(); index++)
    {
        if(sensor_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::SensorGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-groups";

    return path_buffer.str();

}

EntityPath TelemetrySystem::SensorGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::SensorGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-group")
    {
        for(auto const & c : sensor_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::SensorGroups::SensorGroup>();
        c->parent = this;
        sensor_group.push_back(std::move(c));
        children[segment_path] = sensor_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::SensorGroups::get_children()
{
    for (auto const & c : sensor_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::SensorGroups::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::DestinationGroups::DestinationGroup::Config::Config()
    :
    	group_id{YType::str, "group-id"}
{
    yang_name = "config"; yang_parent_name = "destination-group";
}

TelemetrySystem::DestinationGroups::DestinationGroup::Config::~Config()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Config::has_data() const
{
    return group_id.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::Config::get_children()
{
    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

TelemetrySystem::DestinationGroups::DestinationGroup::State::State()
    :
    	group_id{YType::str, "group-id"}
{
    yang_name = "state"; yang_parent_name = "destination-group";
}

TelemetrySystem::DestinationGroups::DestinationGroup::State::~State()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::State::has_data() const
{
    return group_id.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::State::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::State::get_children()
{
    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::Config()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_port{YType::uint16, "destination-port"},
	 destination_protocol{YType::enumeration, "destination-protocol"}
{
    yang_name = "config"; yang_parent_name = "destination";
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::~Config()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| destination_protocol.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(destination_protocol.operation);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (destination_protocol.is_set || is_set(destination_protocol.operation)) leaf_name_data.push_back(destination_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::get_children()
{
    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol = value;
    }
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::State()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_port{YType::uint16, "destination-port"},
	 destination_protocol{YType::enumeration, "destination-protocol"}
{
    yang_name = "state"; yang_parent_name = "destination";
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::~State()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| destination_protocol.is_set;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(destination_protocol.operation);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (destination_protocol.is_set || is_set(destination_protocol.operation)) leaf_name_data.push_back(destination_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::get_children()
{
    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol = value;
    }
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Destination()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_port{YType::str, "destination-port"}
    	,
    config(std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config>())
	,state(std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "destination"; yang_parent_name = "destinations";
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::~Destination()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination" <<"[destination-address='" <<destination_address.get() <<"']" <<"[destination-port='" <<destination_port.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destinations()
{
    yang_name = "destinations"; yang_parent_name = "destination-group";
}

TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::~Destinations()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::DestinationGroups::DestinationGroup::DestinationGroup()
    :
    	group_id{YType::str, "group-id"}
    	,
    config(std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Config>())
	,destinations(std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations>())
	,state(std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::State>())
{
    config->parent = this;
    children["config"] = config.get();

    destinations->parent = this;
    children["destinations"] = destinations.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "destination-group"; yang_parent_name = "destination-groups";
}

TelemetrySystem::DestinationGroups::DestinationGroup::~DestinationGroup()
{
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::has_data() const
{
    return group_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (destinations !=  nullptr && destinations->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::DestinationGroups::DestinationGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (destinations !=  nullptr && is_set(destinations->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::DestinationGroups::DestinationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-group" <<"[group-id='" <<group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::DestinationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/destination-groups/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::DestinationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "destinations")
    {
        if(destinations != nullptr)
        {
            children["destinations"] = destinations.get();
        }
        else
        {
            destinations = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::Destinations>();
            destinations->parent = this;
            children["destinations"] = destinations.get();
        }
        return children.at("destinations");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::DestinationGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("destinations") == children.end())
    {
        if(destinations != nullptr)
        {
            children["destinations"] = destinations.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::DestinationGroups::DestinationGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

TelemetrySystem::DestinationGroups::DestinationGroups()
{
    yang_name = "destination-groups"; yang_parent_name = "telemetry-system";
}

TelemetrySystem::DestinationGroups::~DestinationGroups()
{
}

bool TelemetrySystem::DestinationGroups::has_data() const
{
    for (std::size_t index=0; index<destination_group.size(); index++)
    {
        if(destination_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::DestinationGroups::has_operation() const
{
    for (std::size_t index=0; index<destination_group.size(); index++)
    {
        if(destination_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::DestinationGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-groups";

    return path_buffer.str();

}

EntityPath TelemetrySystem::DestinationGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::DestinationGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-group")
    {
        for(auto const & c : destination_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::DestinationGroups::DestinationGroup>();
        c->parent = this;
        destination_group.push_back(std::move(c));
        children[segment_path] = destination_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::DestinationGroups::get_children()
{
    for (auto const & c : destination_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::DestinationGroups::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::Subscriptions::Persistent::Subscription::Config::Config()
    :
    	local_source_address{YType::str, "local-source-address"},
	 originated_qos_marking{YType::uint8, "originated-qos-marking"},
	 subscription_id{YType::uint64, "subscription-id"}
{
    yang_name = "config"; yang_parent_name = "subscription";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::Config::~Config()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::Config::has_data() const
{
    return local_source_address.is_set
	|| originated_qos_marking.is_set
	|| subscription_id.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(local_source_address.operation)
	|| is_set(originated_qos_marking.operation)
	|| is_set(subscription_id.operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_source_address.is_set || is_set(local_source_address.operation)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (originated_qos_marking.is_set || is_set(originated_qos_marking.operation)) leaf_name_data.push_back(originated_qos_marking.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.operation)) leaf_name_data.push_back(subscription_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::Config::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-source-address")
    {
        local_source_address = value;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking = value;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::State::State()
    :
    	local_source_address{YType::str, "local-source-address"},
	 originated_qos_marking{YType::uint8, "originated-qos-marking"},
	 subscription_id{YType::uint64, "subscription-id"}
{
    yang_name = "state"; yang_parent_name = "subscription";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::State::has_data() const
{
    return local_source_address.is_set
	|| originated_qos_marking.is_set
	|| subscription_id.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::State::has_operation() const
{
    return is_set(operation)
	|| is_set(local_source_address.operation)
	|| is_set(originated_qos_marking.operation)
	|| is_set(subscription_id.operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_source_address.is_set || is_set(local_source_address.operation)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (originated_qos_marking.is_set || is_set(originated_qos_marking.operation)) leaf_name_data.push_back(originated_qos_marking.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.operation)) leaf_name_data.push_back(subscription_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::State::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-source-address")
    {
        local_source_address = value;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking = value;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::Config()
    :
    	heartbeat_interval{YType::uint64, "heartbeat-interval"},
	 sample_interval{YType::uint64, "sample-interval"},
	 sensor_group{YType::str, "sensor-group"},
	 suppress_redundant{YType::boolean, "suppress-redundant"}
{
    yang_name = "config"; yang_parent_name = "sensor-profile";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::~Config()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::has_data() const
{
    return heartbeat_interval.is_set
	|| sample_interval.is_set
	|| sensor_group.is_set
	|| suppress_redundant.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(heartbeat_interval.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sensor_group.operation)
	|| is_set(suppress_redundant.operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heartbeat_interval.is_set || is_set(heartbeat_interval.operation)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sensor_group.is_set || is_set(sensor_group.operation)) leaf_name_data.push_back(sensor_group.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.operation)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sensor-group")
    {
        sensor_group = value;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::State()
    :
    	heartbeat_interval{YType::uint64, "heartbeat-interval"},
	 sample_interval{YType::uint64, "sample-interval"},
	 sensor_group{YType::str, "sensor-group"},
	 suppress_redundant{YType::boolean, "suppress-redundant"}
{
    yang_name = "state"; yang_parent_name = "sensor-profile";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::has_data() const
{
    return heartbeat_interval.is_set
	|| sample_interval.is_set
	|| sensor_group.is_set
	|| suppress_redundant.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::has_operation() const
{
    return is_set(operation)
	|| is_set(heartbeat_interval.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sensor_group.operation)
	|| is_set(suppress_redundant.operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (heartbeat_interval.is_set || is_set(heartbeat_interval.operation)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sensor_group.is_set || is_set(sensor_group.operation)) leaf_name_data.push_back(sensor_group.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.operation)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sensor-group")
    {
        sensor_group = value;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::SensorProfile()
    :
    	sensor_group{YType::str, "sensor-group"}
    	,
    config(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config>())
	,state(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "sensor-profile"; yang_parent_name = "sensor-profiles";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::~SensorProfile()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::has_data() const
{
    return sensor_group.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(sensor_group.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profile" <<"[sensor-group='" <<sensor_group.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_group.is_set || is_set(sensor_group.operation)) leaf_name_data.push_back(sensor_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sensor-group")
    {
        sensor_group = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfiles()
{
    yang_name = "sensor-profiles"; yang_parent_name = "subscription";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::~SensorProfiles()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::has_data() const
{
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::has_operation() const
{
    for (std::size_t index=0; index<sensor_profile.size(); index++)
    {
        if(sensor_profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-profiles";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-profile")
    {
        for(auto const & c : sensor_profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile>();
        c->parent = this;
        sensor_profile.push_back(std::move(c));
        children[segment_path] = sensor_profile.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::get_children()
{
    for (auto const & c : sensor_profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::Config()
    :
    	group_id{YType::str, "group-id"}
{
    yang_name = "config"; yang_parent_name = "destination-group";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::~Config()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::has_data() const
{
    return group_id.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::State()
    :
    	group_id{YType::str, "group-id"}
{
    yang_name = "state"; yang_parent_name = "destination-group";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::has_data() const
{
    return group_id.is_set;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::DestinationGroup()
    :
    	group_id{YType::str, "group-id"}
    	,
    config(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config>())
	,state(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State>())
{
    config->parent = this;
    children["config"] = config.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "destination-group"; yang_parent_name = "destination-groups";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::~DestinationGroup()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::has_data() const
{
    return group_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-group" <<"[group-id='" <<group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroups()
{
    yang_name = "destination-groups"; yang_parent_name = "subscription";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::~DestinationGroups()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::has_data() const
{
    for (std::size_t index=0; index<destination_group.size(); index++)
    {
        if(destination_group[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::has_operation() const
{
    for (std::size_t index=0; index<destination_group.size(); index++)
    {
        if(destination_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-groups";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-group")
    {
        for(auto const & c : destination_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup>();
        c->parent = this;
        destination_group.push_back(std::move(c));
        children[segment_path] = destination_group.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::get_children()
{
    for (auto const & c : destination_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::Subscriptions::Persistent::Subscription::Subscription()
    :
    	subscription_id{YType::str, "subscription-id"}
    	,
    config(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::Config>())
	,destination_groups(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups>())
	,sensor_profiles(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles>())
	,state(std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::State>())
{
    config->parent = this;
    children["config"] = config.get();

    destination_groups->parent = this;
    children["destination-groups"] = destination_groups.get();

    sensor_profiles->parent = this;
    children["sensor-profiles"] = sensor_profiles.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "subscription"; yang_parent_name = "persistent";
}

TelemetrySystem::Subscriptions::Persistent::Subscription::~Subscription()
{
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::has_data() const
{
    return subscription_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (destination_groups !=  nullptr && destination_groups->has_data())
	|| (sensor_profiles !=  nullptr && sensor_profiles->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Persistent::Subscription::has_operation() const
{
    return is_set(operation)
	|| is_set(subscription_id.operation)
	|| (config !=  nullptr && is_set(config->operation))
	|| (destination_groups !=  nullptr && is_set(destination_groups->operation))
	|| (sensor_profiles !=  nullptr && is_set(sensor_profiles->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::Subscriptions::Persistent::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-id='" <<subscription_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::Subscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/persistent/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.operation)) leaf_name_data.push_back(subscription_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            config = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::Config>();
            config->parent = this;
            children["config"] = config.get();
        }
        return children.at("config");
    }

    if(child_yang_name == "destination-groups")
    {
        if(destination_groups != nullptr)
        {
            children["destination-groups"] = destination_groups.get();
        }
        else
        {
            destination_groups = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups>();
            destination_groups->parent = this;
            children["destination-groups"] = destination_groups.get();
        }
        return children.at("destination-groups");
    }

    if(child_yang_name == "sensor-profiles")
    {
        if(sensor_profiles != nullptr)
        {
            children["sensor-profiles"] = sensor_profiles.get();
        }
        else
        {
            sensor_profiles = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles>();
            sensor_profiles->parent = this;
            children["sensor-profiles"] = sensor_profiles.get();
        }
        return children.at("sensor-profiles");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::Subscription::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config.get();
        }
    }

    if(children.find("destination-groups") == children.end())
    {
        if(destination_groups != nullptr)
        {
            children["destination-groups"] = destination_groups.get();
        }
    }

    if(children.find("sensor-profiles") == children.end())
    {
        if(sensor_profiles != nullptr)
        {
            children["sensor-profiles"] = sensor_profiles.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Persistent::Subscription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
    }
}

TelemetrySystem::Subscriptions::Persistent::Persistent()
{
    yang_name = "persistent"; yang_parent_name = "subscriptions";
}

TelemetrySystem::Subscriptions::Persistent::~Persistent()
{
}

bool TelemetrySystem::Subscriptions::Persistent::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Persistent::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::Subscriptions::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Persistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::Subscriptions::Persistent::Subscription>();
        c->parent = this;
        subscription.push_back(std::move(c));
        children[segment_path] = subscription.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Persistent::get_children()
{
    for (auto const & c : subscription)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Persistent::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::State::State()
    :
    	destination_address{YType::str, "destination-address"},
	 destination_port{YType::uint16, "destination-port"},
	 destination_protocol{YType::enumeration, "destination-protocol"},
	 heartbeat_interval{YType::uint64, "heartbeat-interval"},
	 originated_qos_marking{YType::uint8, "originated-qos-marking"},
	 sample_interval{YType::uint64, "sample-interval"},
	 subscription_id{YType::uint64, "subscription-id"},
	 suppress_redundant{YType::boolean, "suppress-redundant"}
{
    yang_name = "state"; yang_parent_name = "subscription";
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::State::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| destination_protocol.is_set
	|| heartbeat_interval.is_set
	|| originated_qos_marking.is_set
	|| sample_interval.is_set
	|| subscription_id.is_set
	|| suppress_redundant.is_set;
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::State::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(destination_protocol.operation)
	|| is_set(heartbeat_interval.operation)
	|| is_set(originated_qos_marking.operation)
	|| is_set(sample_interval.operation)
	|| is_set(subscription_id.operation)
	|| is_set(suppress_redundant.operation);
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (destination_protocol.is_set || is_set(destination_protocol.operation)) leaf_name_data.push_back(destination_protocol.get_name_leafdata());
    if (heartbeat_interval.is_set || is_set(heartbeat_interval.operation)) leaf_name_data.push_back(heartbeat_interval.get_name_leafdata());
    if (originated_qos_marking.is_set || is_set(originated_qos_marking.operation)) leaf_name_data.push_back(originated_qos_marking.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (subscription_id.is_set || is_set(subscription_id.operation)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (suppress_redundant.is_set || is_set(suppress_redundant.operation)) leaf_name_data.push_back(suppress_redundant.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Dynamic::Subscription::State::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "destination-protocol")
    {
        destination_protocol = value;
    }
    if(value_path == "heartbeat-interval")
    {
        heartbeat_interval = value;
    }
    if(value_path == "originated-qos-marking")
    {
        originated_qos_marking = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "subscription-id")
    {
        subscription_id = value;
    }
    if(value_path == "suppress-redundant")
    {
        suppress_redundant = value;
    }
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::State()
    :
    	exclude_filter{YType::str, "exclude-filter"},
	 path{YType::str, "path"}
{
    yang_name = "state"; yang_parent_name = "sensor-path";
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::~State()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::has_data() const
{
    return exclude_filter.is_set
	|| path.is_set;
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude_filter.operation)
	|| is_set(path.operation);
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_filter.is_set || is_set(exclude_filter.operation)) leaf_name_data.push_back(exclude_filter.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::get_children()
{
    return children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-filter")
    {
        exclude_filter = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::SensorPath()
    :
    	path{YType::str, "path"}
    	,
    state(std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State>())
{
    state->parent = this;
    children["state"] = state.get();

    yang_name = "sensor-path"; yang_parent_name = "sensor-paths";
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::~SensorPath()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::has_data() const
{
    return path.is_set
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-path" <<"[path='" <<path.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::get_children()
{
    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPaths()
{
    yang_name = "sensor-paths"; yang_parent_name = "subscription";
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::~SensorPaths()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::has_data() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::has_operation() const
{
    for (std::size_t index=0; index<sensor_path.size(); index++)
    {
        if(sensor_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-paths";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-path")
    {
        for(auto const & c : sensor_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath>();
        c->parent = this;
        sensor_path.push_back(std::move(c));
        children[segment_path] = sensor_path.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::get_children()
{
    for (auto const & c : sensor_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::Subscription()
    :
    	subscription_id{YType::str, "subscription-id"}
    	,
    sensor_paths(std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths>())
	,state(std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::State>())
{
    sensor_paths->parent = this;
    children["sensor-paths"] = sensor_paths.get();

    state->parent = this;
    children["state"] = state.get();

    yang_name = "subscription"; yang_parent_name = "dynamic";
}

TelemetrySystem::Subscriptions::Dynamic::Subscription::~Subscription()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::has_data() const
{
    return subscription_id.is_set
	|| (sensor_paths !=  nullptr && sensor_paths->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool TelemetrySystem::Subscriptions::Dynamic::Subscription::has_operation() const
{
    return is_set(operation)
	|| is_set(subscription_id.operation)
	|| (sensor_paths !=  nullptr && is_set(sensor_paths->operation))
	|| (state !=  nullptr && is_set(state->operation));
}

std::string TelemetrySystem::Subscriptions::Dynamic::Subscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscription" <<"[subscription-id='" <<subscription_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Dynamic::Subscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/dynamic/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.operation)) leaf_name_data.push_back(subscription_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Dynamic::Subscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sensor-paths")
    {
        if(sensor_paths != nullptr)
        {
            children["sensor-paths"] = sensor_paths.get();
        }
        else
        {
            sensor_paths = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths>();
            sensor_paths->parent = this;
            children["sensor-paths"] = sensor_paths.get();
        }
        return children.at("sensor-paths");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Dynamic::Subscription::get_children()
{
    if(children.find("sensor-paths") == children.end())
    {
        if(sensor_paths != nullptr)
        {
            children["sensor-paths"] = sensor_paths.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Dynamic::Subscription::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
    }
}

TelemetrySystem::Subscriptions::Dynamic::Dynamic()
{
    yang_name = "dynamic"; yang_parent_name = "subscriptions";
}

TelemetrySystem::Subscriptions::Dynamic::~Dynamic()
{
}

bool TelemetrySystem::Subscriptions::Dynamic::has_data() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_data())
            return true;
    }
    return false;
}

bool TelemetrySystem::Subscriptions::Dynamic::has_operation() const
{
    for (std::size_t index=0; index<subscription.size(); index++)
    {
        if(subscription[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TelemetrySystem::Subscriptions::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/subscriptions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscription")
    {
        for(auto const & c : subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TelemetrySystem::Subscriptions::Dynamic::Subscription>();
        c->parent = this;
        subscription.push_back(std::move(c));
        children[segment_path] = subscription.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::Dynamic::get_children()
{
    for (auto const & c : subscription)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::Dynamic::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::Subscriptions::Subscriptions()
    :
    dynamic(std::make_unique<TelemetrySystem::Subscriptions::Dynamic>())
	,persistent(std::make_unique<TelemetrySystem::Subscriptions::Persistent>())
{
    dynamic->parent = this;
    children["dynamic"] = dynamic.get();

    persistent->parent = this;
    children["persistent"] = persistent.get();

    yang_name = "subscriptions"; yang_parent_name = "telemetry-system";
}

TelemetrySystem::Subscriptions::~Subscriptions()
{
}

bool TelemetrySystem::Subscriptions::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data())
	|| (persistent !=  nullptr && persistent->has_data());
}

bool TelemetrySystem::Subscriptions::has_operation() const
{
    return is_set(operation)
	|| (dynamic !=  nullptr && is_set(dynamic->operation))
	|| (persistent !=  nullptr && is_set(persistent->operation));
}

std::string TelemetrySystem::Subscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriptions";

    return path_buffer.str();

}

EntityPath TelemetrySystem::Subscriptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-telemetry:telemetry-system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TelemetrySystem::Subscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic != nullptr)
        {
            children["dynamic"] = dynamic.get();
        }
        else
        {
            dynamic = std::make_unique<TelemetrySystem::Subscriptions::Dynamic>();
            dynamic->parent = this;
            children["dynamic"] = dynamic.get();
        }
        return children.at("dynamic");
    }

    if(child_yang_name == "persistent")
    {
        if(persistent != nullptr)
        {
            children["persistent"] = persistent.get();
        }
        else
        {
            persistent = std::make_unique<TelemetrySystem::Subscriptions::Persistent>();
            persistent->parent = this;
            children["persistent"] = persistent.get();
        }
        return children.at("persistent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::Subscriptions::get_children()
{
    if(children.find("dynamic") == children.end())
    {
        if(dynamic != nullptr)
        {
            children["dynamic"] = dynamic.get();
        }
    }

    if(children.find("persistent") == children.end())
    {
        if(persistent != nullptr)
        {
            children["persistent"] = persistent.get();
        }
    }

    return children;
}

void TelemetrySystem::Subscriptions::set_value(const std::string & value_path, std::string value)
{
}

TelemetrySystem::TelemetrySystem()
    :
    destination_groups(std::make_unique<TelemetrySystem::DestinationGroups>())
	,sensor_groups(std::make_unique<TelemetrySystem::SensorGroups>())
	,subscriptions(std::make_unique<TelemetrySystem::Subscriptions>())
{
    destination_groups->parent = this;
    children["destination-groups"] = destination_groups.get();

    sensor_groups->parent = this;
    children["sensor-groups"] = sensor_groups.get();

    subscriptions->parent = this;
    children["subscriptions"] = subscriptions.get();

    yang_name = "telemetry-system"; yang_parent_name = "openconfig-telemetry";
}

TelemetrySystem::~TelemetrySystem()
{
}

bool TelemetrySystem::has_data() const
{
    return (destination_groups !=  nullptr && destination_groups->has_data())
	|| (sensor_groups !=  nullptr && sensor_groups->has_data())
	|| (subscriptions !=  nullptr && subscriptions->has_data());
}

bool TelemetrySystem::has_operation() const
{
    return is_set(operation)
	|| (destination_groups !=  nullptr && is_set(destination_groups->operation))
	|| (sensor_groups !=  nullptr && is_set(sensor_groups->operation))
	|| (subscriptions !=  nullptr && is_set(subscriptions->operation));
}

std::string TelemetrySystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-telemetry:telemetry-system";

    return path_buffer.str();

}

EntityPath TelemetrySystem::get_entity_path(Entity* ancestor) const
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

Entity* TelemetrySystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-groups")
    {
        if(destination_groups != nullptr)
        {
            children["destination-groups"] = destination_groups.get();
        }
        else
        {
            destination_groups = std::make_unique<TelemetrySystem::DestinationGroups>();
            destination_groups->parent = this;
            children["destination-groups"] = destination_groups.get();
        }
        return children.at("destination-groups");
    }

    if(child_yang_name == "sensor-groups")
    {
        if(sensor_groups != nullptr)
        {
            children["sensor-groups"] = sensor_groups.get();
        }
        else
        {
            sensor_groups = std::make_unique<TelemetrySystem::SensorGroups>();
            sensor_groups->parent = this;
            children["sensor-groups"] = sensor_groups.get();
        }
        return children.at("sensor-groups");
    }

    if(child_yang_name == "subscriptions")
    {
        if(subscriptions != nullptr)
        {
            children["subscriptions"] = subscriptions.get();
        }
        else
        {
            subscriptions = std::make_unique<TelemetrySystem::Subscriptions>();
            subscriptions->parent = this;
            children["subscriptions"] = subscriptions.get();
        }
        return children.at("subscriptions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TelemetrySystem::get_children()
{
    if(children.find("destination-groups") == children.end())
    {
        if(destination_groups != nullptr)
        {
            children["destination-groups"] = destination_groups.get();
        }
    }

    if(children.find("sensor-groups") == children.end())
    {
        if(sensor_groups != nullptr)
        {
            children["sensor-groups"] = sensor_groups.get();
        }
    }

    if(children.find("subscriptions") == children.end())
    {
        if(subscriptions != nullptr)
        {
            children["subscriptions"] = subscriptions.get();
        }
    }

    return children;
}

void TelemetrySystem::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> TelemetrySystem::clone_ptr()
{
    return std::make_unique<TelemetrySystem>();
}

const Enum::Value TelemetryStreamProtocolEnum::TCP {0, "TCP"};
const Enum::Value TelemetryStreamProtocolEnum::UDP {1, "UDP"};


}
}

