
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_lsd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_cfg {

MplsLsd::Ipv6::Ipv6()
    :
    	ttl_expiration_pop{YType::uint32, "ttl-expiration-pop"}
{
    yang_name = "ipv6"; yang_parent_name = "mpls-lsd";
}

MplsLsd::Ipv6::~Ipv6()
{
}

bool MplsLsd::Ipv6::has_data() const
{
    return ttl_expiration_pop.is_set;
}

bool MplsLsd::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(ttl_expiration_pop.operation);
}

std::string MplsLsd::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath MplsLsd::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl_expiration_pop.is_set || is_set(ttl_expiration_pop.operation)) leaf_name_data.push_back(ttl_expiration_pop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLsd::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLsd::Ipv6::get_children()
{
    return children;
}

void MplsLsd::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ttl-expiration-pop")
    {
        ttl_expiration_pop = value;
    }
}

MplsLsd::Ipv4::Ipv4()
    :
    	ttl_expiration_pop{YType::uint32, "ttl-expiration-pop"}
{
    yang_name = "ipv4"; yang_parent_name = "mpls-lsd";
}

MplsLsd::Ipv4::~Ipv4()
{
}

bool MplsLsd::Ipv4::has_data() const
{
    return ttl_expiration_pop.is_set;
}

bool MplsLsd::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ttl_expiration_pop.operation);
}

std::string MplsLsd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath MplsLsd::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ttl_expiration_pop.is_set || is_set(ttl_expiration_pop.operation)) leaf_name_data.push_back(ttl_expiration_pop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLsd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLsd::Ipv4::get_children()
{
    return children;
}

void MplsLsd::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ttl-expiration-pop")
    {
        ttl_expiration_pop = value;
    }
}

MplsLsd::LabelDatabases::LabelDatabase::LabelRange::LabelRange()
    :
    	max_static_value{YType::uint32, "max-static-value"},
	 max_value{YType::uint32, "max-value"},
	 min_static_value{YType::uint32, "min-static-value"},
	 minvalue{YType::uint32, "minvalue"}
{
    yang_name = "label-range"; yang_parent_name = "label-database";
}

MplsLsd::LabelDatabases::LabelDatabase::LabelRange::~LabelRange()
{
}

bool MplsLsd::LabelDatabases::LabelDatabase::LabelRange::has_data() const
{
    return max_static_value.is_set
	|| max_value.is_set
	|| min_static_value.is_set
	|| minvalue.is_set;
}

bool MplsLsd::LabelDatabases::LabelDatabase::LabelRange::has_operation() const
{
    return is_set(operation)
	|| is_set(max_static_value.operation)
	|| is_set(max_value.operation)
	|| is_set(min_static_value.operation)
	|| is_set(minvalue.operation);
}

std::string MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-range";

    return path_buffer.str();

}

EntityPath MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_static_value.is_set || is_set(max_static_value.operation)) leaf_name_data.push_back(max_static_value.get_name_leafdata());
    if (max_value.is_set || is_set(max_value.operation)) leaf_name_data.push_back(max_value.get_name_leafdata());
    if (min_static_value.is_set || is_set(min_static_value.operation)) leaf_name_data.push_back(min_static_value.get_name_leafdata());
    if (minvalue.is_set || is_set(minvalue.operation)) leaf_name_data.push_back(minvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLsd::LabelDatabases::LabelDatabase::LabelRange::get_children()
{
    return children;
}

void MplsLsd::LabelDatabases::LabelDatabase::LabelRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-static-value")
    {
        max_static_value = value;
    }
    if(value_path == "max-value")
    {
        max_value = value;
    }
    if(value_path == "min-static-value")
    {
        min_static_value = value;
    }
    if(value_path == "minvalue")
    {
        minvalue = value;
    }
}

MplsLsd::LabelDatabases::LabelDatabase::LabelDatabase()
    :
    	label_database_id{YType::uint32, "label-database-id"}
    	,
    label_range(std::make_unique<MplsLsd::LabelDatabases::LabelDatabase::LabelRange>())
{
    label_range->parent = this;
    children["label-range"] = label_range.get();

    yang_name = "label-database"; yang_parent_name = "label-databases";
}

MplsLsd::LabelDatabases::LabelDatabase::~LabelDatabase()
{
}

bool MplsLsd::LabelDatabases::LabelDatabase::has_data() const
{
    return label_database_id.is_set
	|| (label_range !=  nullptr && label_range->has_data());
}

bool MplsLsd::LabelDatabases::LabelDatabase::has_operation() const
{
    return is_set(operation)
	|| is_set(label_database_id.operation)
	|| (label_range !=  nullptr && is_set(label_range->operation));
}

std::string MplsLsd::LabelDatabases::LabelDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-database" <<"[label-database-id='" <<label_database_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLsd::LabelDatabases::LabelDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/label-databases/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_database_id.is_set || is_set(label_database_id.operation)) leaf_name_data.push_back(label_database_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLsd::LabelDatabases::LabelDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-range")
    {
        if(label_range != nullptr)
        {
            children["label-range"] = label_range.get();
        }
        else
        {
            label_range = std::make_unique<MplsLsd::LabelDatabases::LabelDatabase::LabelRange>();
            label_range->parent = this;
            children["label-range"] = label_range.get();
        }
        return children.at("label-range");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLsd::LabelDatabases::LabelDatabase::get_children()
{
    if(children.find("label-range") == children.end())
    {
        if(label_range != nullptr)
        {
            children["label-range"] = label_range.get();
        }
    }

    return children;
}

void MplsLsd::LabelDatabases::LabelDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-database-id")
    {
        label_database_id = value;
    }
}

MplsLsd::LabelDatabases::LabelDatabases()
{
    yang_name = "label-databases"; yang_parent_name = "mpls-lsd";
}

MplsLsd::LabelDatabases::~LabelDatabases()
{
}

bool MplsLsd::LabelDatabases::has_data() const
{
    for (std::size_t index=0; index<label_database.size(); index++)
    {
        if(label_database[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLsd::LabelDatabases::has_operation() const
{
    for (std::size_t index=0; index<label_database.size(); index++)
    {
        if(label_database[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLsd::LabelDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-databases";

    return path_buffer.str();

}

EntityPath MplsLsd::LabelDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLsd::LabelDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-database")
    {
        for(auto const & c : label_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLsd::LabelDatabases::LabelDatabase>();
        c->parent = this;
        label_database.push_back(std::move(c));
        children[segment_path] = label_database.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLsd::LabelDatabases::get_children()
{
    for (auto const & c : label_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLsd::LabelDatabases::set_value(const std::string & value_path, std::string value)
{
}

MplsLsd::MplsLsd()
    :
    	app_reg_delay_disable{YType::empty, "app-reg-delay-disable"},
	 mpls_entropy_label{YType::empty, "mpls-entropy-label"},
	 mpls_ip_ttl_propagate_disable{YType::enumeration, "mpls-ip-ttl-propagate-disable"}
    	,
    ipv4(std::make_unique<MplsLsd::Ipv4>())
	,ipv6(std::make_unique<MplsLsd::Ipv6>())
	,label_databases(std::make_unique<MplsLsd::LabelDatabases>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    ipv6->parent = this;
    children["ipv6"] = ipv6.get();

    label_databases->parent = this;
    children["label-databases"] = label_databases.get();

    yang_name = "mpls-lsd"; yang_parent_name = "Cisco-IOS-XR-mpls-lsd-cfg";
}

MplsLsd::~MplsLsd()
{
}

bool MplsLsd::has_data() const
{
    return app_reg_delay_disable.is_set
	|| mpls_entropy_label.is_set
	|| mpls_ip_ttl_propagate_disable.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (label_databases !=  nullptr && label_databases->has_data());
}

bool MplsLsd::has_operation() const
{
    return is_set(operation)
	|| is_set(app_reg_delay_disable.operation)
	|| is_set(mpls_entropy_label.operation)
	|| is_set(mpls_ip_ttl_propagate_disable.operation)
	|| (ipv4 !=  nullptr && is_set(ipv4->operation))
	|| (ipv6 !=  nullptr && is_set(ipv6->operation))
	|| (label_databases !=  nullptr && is_set(label_databases->operation));
}

std::string MplsLsd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd";

    return path_buffer.str();

}

EntityPath MplsLsd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_reg_delay_disable.is_set || is_set(app_reg_delay_disable.operation)) leaf_name_data.push_back(app_reg_delay_disable.get_name_leafdata());
    if (mpls_entropy_label.is_set || is_set(mpls_entropy_label.operation)) leaf_name_data.push_back(mpls_entropy_label.get_name_leafdata());
    if (mpls_ip_ttl_propagate_disable.is_set || is_set(mpls_ip_ttl_propagate_disable.operation)) leaf_name_data.push_back(mpls_ip_ttl_propagate_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLsd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4 = std::make_unique<MplsLsd::Ipv4>();
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
            ipv6 = std::make_unique<MplsLsd::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6.get();
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "label-databases")
    {
        if(label_databases != nullptr)
        {
            children["label-databases"] = label_databases.get();
        }
        else
        {
            label_databases = std::make_unique<MplsLsd::LabelDatabases>();
            label_databases->parent = this;
            children["label-databases"] = label_databases.get();
        }
        return children.at("label-databases");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLsd::get_children()
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

    if(children.find("label-databases") == children.end())
    {
        if(label_databases != nullptr)
        {
            children["label-databases"] = label_databases.get();
        }
    }

    return children;
}

void MplsLsd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "app-reg-delay-disable")
    {
        app_reg_delay_disable = value;
    }
    if(value_path == "mpls-entropy-label")
    {
        mpls_entropy_label = value;
    }
    if(value_path == "mpls-ip-ttl-propagate-disable")
    {
        mpls_ip_ttl_propagate_disable = value;
    }
}

std::unique_ptr<Entity> MplsLsd::clone_ptr()
{
    return std::make_unique<MplsLsd>();
}

const Enum::Value MplsIpTtlPropagateDisableEnum::all {0, "all"};
const Enum::Value MplsIpTtlPropagateDisableEnum::forward {1, "forward"};
const Enum::Value MplsIpTtlPropagateDisableEnum::local {2, "local"};


}
}

