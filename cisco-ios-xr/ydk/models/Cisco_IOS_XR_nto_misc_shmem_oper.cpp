
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_nto_misc_shmem_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_nto_misc_shmem_oper {

MemorySummary::Nodes::Node::Summary::Summary()
    :
    	boot_ram_size{YType::uint64, "boot-ram-size"},
	 flash_system{YType::uint64, "flash-system"},
	 free_application_memory{YType::uint64, "free-application-memory"},
	 free_physical_memory{YType::uint64, "free-physical-memory"},
	 image_memory{YType::uint64, "image-memory"},
	 io_memory{YType::uint64, "io-memory"},
	 page_size{YType::uint32, "page-size"},
	 ram_memory{YType::uint64, "ram-memory"},
	 reserved_memory{YType::uint64, "reserved-memory"},
	 system_ram_memory{YType::uint64, "system-ram-memory"}
{
    yang_name = "summary"; yang_parent_name = "node";
}

MemorySummary::Nodes::Node::Summary::~Summary()
{
}

bool MemorySummary::Nodes::Node::Summary::has_data() const
{
    return boot_ram_size.is_set
	|| flash_system.is_set
	|| free_application_memory.is_set
	|| free_physical_memory.is_set
	|| image_memory.is_set
	|| io_memory.is_set
	|| page_size.is_set
	|| ram_memory.is_set
	|| reserved_memory.is_set
	|| system_ram_memory.is_set;
}

bool MemorySummary::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(boot_ram_size.operation)
	|| is_set(flash_system.operation)
	|| is_set(free_application_memory.operation)
	|| is_set(free_physical_memory.operation)
	|| is_set(image_memory.operation)
	|| is_set(io_memory.operation)
	|| is_set(page_size.operation)
	|| is_set(ram_memory.operation)
	|| is_set(reserved_memory.operation)
	|| is_set(system_ram_memory.operation);
}

std::string MemorySummary::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MemorySummary::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_ram_size.is_set || is_set(boot_ram_size.operation)) leaf_name_data.push_back(boot_ram_size.get_name_leafdata());
    if (flash_system.is_set || is_set(flash_system.operation)) leaf_name_data.push_back(flash_system.get_name_leafdata());
    if (free_application_memory.is_set || is_set(free_application_memory.operation)) leaf_name_data.push_back(free_application_memory.get_name_leafdata());
    if (free_physical_memory.is_set || is_set(free_physical_memory.operation)) leaf_name_data.push_back(free_physical_memory.get_name_leafdata());
    if (image_memory.is_set || is_set(image_memory.operation)) leaf_name_data.push_back(image_memory.get_name_leafdata());
    if (io_memory.is_set || is_set(io_memory.operation)) leaf_name_data.push_back(io_memory.get_name_leafdata());
    if (page_size.is_set || is_set(page_size.operation)) leaf_name_data.push_back(page_size.get_name_leafdata());
    if (ram_memory.is_set || is_set(ram_memory.operation)) leaf_name_data.push_back(ram_memory.get_name_leafdata());
    if (reserved_memory.is_set || is_set(reserved_memory.operation)) leaf_name_data.push_back(reserved_memory.get_name_leafdata());
    if (system_ram_memory.is_set || is_set(system_ram_memory.operation)) leaf_name_data.push_back(system_ram_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MemorySummary::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MemorySummary::Nodes::Node::Summary::get_children()
{
    return children;
}

void MemorySummary::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot-ram-size")
    {
        boot_ram_size = value;
    }
    if(value_path == "flash-system")
    {
        flash_system = value;
    }
    if(value_path == "free-application-memory")
    {
        free_application_memory = value;
    }
    if(value_path == "free-physical-memory")
    {
        free_physical_memory = value;
    }
    if(value_path == "image-memory")
    {
        image_memory = value;
    }
    if(value_path == "io-memory")
    {
        io_memory = value;
    }
    if(value_path == "page-size")
    {
        page_size = value;
    }
    if(value_path == "ram-memory")
    {
        ram_memory = value;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory = value;
    }
    if(value_path == "system-ram-memory")
    {
        system_ram_memory = value;
    }
}

MemorySummary::Nodes::Node::Detail::SharedWindow::SharedWindow()
    :
    	shared_window{YType::str, "shared-window"},
	 window_size{YType::uint64, "window-size"}
{
    yang_name = "shared-window"; yang_parent_name = "detail";
}

MemorySummary::Nodes::Node::Detail::SharedWindow::~SharedWindow()
{
}

bool MemorySummary::Nodes::Node::Detail::SharedWindow::has_data() const
{
    return shared_window.is_set
	|| window_size.is_set;
}

bool MemorySummary::Nodes::Node::Detail::SharedWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_window.operation)
	|| is_set(window_size.operation);
}

std::string MemorySummary::Nodes::Node::Detail::SharedWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-window";

    return path_buffer.str();

}

EntityPath MemorySummary::Nodes::Node::Detail::SharedWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_window.is_set || is_set(shared_window.operation)) leaf_name_data.push_back(shared_window.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MemorySummary::Nodes::Node::Detail::SharedWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MemorySummary::Nodes::Node::Detail::SharedWindow::get_children()
{
    return children;
}

void MemorySummary::Nodes::Node::Detail::SharedWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-window")
    {
        shared_window = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

MemorySummary::Nodes::Node::Detail::Detail()
    :
    	allocated_memory{YType::uint64, "allocated-memory"},
	 boot_ram_size{YType::uint64, "boot-ram-size"},
	 flash_system{YType::uint64, "flash-system"},
	 free_application_memory{YType::uint64, "free-application-memory"},
	 free_physical_memory{YType::uint64, "free-physical-memory"},
	 image_memory{YType::uint64, "image-memory"},
	 io_memory{YType::uint64, "io-memory"},
	 page_size{YType::uint32, "page-size"},
	 private_physical_memory{YType::uint64, "private-physical-memory"},
	 program_data{YType::uint64, "program-data"},
	 program_stack{YType::uint64, "program-stack"},
	 program_text{YType::uint64, "program-text"},
	 ram_memory{YType::uint64, "ram-memory"},
	 reserved_memory{YType::uint64, "reserved-memory"},
	 system_ram_memory{YType::uint64, "system-ram-memory"},
	 total_shared_window{YType::uint64, "total-shared-window"}
{
    yang_name = "detail"; yang_parent_name = "node";
}

MemorySummary::Nodes::Node::Detail::~Detail()
{
}

bool MemorySummary::Nodes::Node::Detail::has_data() const
{
    for (std::size_t index=0; index<shared_window.size(); index++)
    {
        if(shared_window[index]->has_data())
            return true;
    }
    return allocated_memory.is_set
	|| boot_ram_size.is_set
	|| flash_system.is_set
	|| free_application_memory.is_set
	|| free_physical_memory.is_set
	|| image_memory.is_set
	|| io_memory.is_set
	|| page_size.is_set
	|| private_physical_memory.is_set
	|| program_data.is_set
	|| program_stack.is_set
	|| program_text.is_set
	|| ram_memory.is_set
	|| reserved_memory.is_set
	|| system_ram_memory.is_set
	|| total_shared_window.is_set;
}

bool MemorySummary::Nodes::Node::Detail::has_operation() const
{
    for (std::size_t index=0; index<shared_window.size(); index++)
    {
        if(shared_window[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(allocated_memory.operation)
	|| is_set(boot_ram_size.operation)
	|| is_set(flash_system.operation)
	|| is_set(free_application_memory.operation)
	|| is_set(free_physical_memory.operation)
	|| is_set(image_memory.operation)
	|| is_set(io_memory.operation)
	|| is_set(page_size.operation)
	|| is_set(private_physical_memory.operation)
	|| is_set(program_data.operation)
	|| is_set(program_stack.operation)
	|| is_set(program_text.operation)
	|| is_set(ram_memory.operation)
	|| is_set(reserved_memory.operation)
	|| is_set(system_ram_memory.operation)
	|| is_set(total_shared_window.operation);
}

std::string MemorySummary::Nodes::Node::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath MemorySummary::Nodes::Node::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_memory.is_set || is_set(allocated_memory.operation)) leaf_name_data.push_back(allocated_memory.get_name_leafdata());
    if (boot_ram_size.is_set || is_set(boot_ram_size.operation)) leaf_name_data.push_back(boot_ram_size.get_name_leafdata());
    if (flash_system.is_set || is_set(flash_system.operation)) leaf_name_data.push_back(flash_system.get_name_leafdata());
    if (free_application_memory.is_set || is_set(free_application_memory.operation)) leaf_name_data.push_back(free_application_memory.get_name_leafdata());
    if (free_physical_memory.is_set || is_set(free_physical_memory.operation)) leaf_name_data.push_back(free_physical_memory.get_name_leafdata());
    if (image_memory.is_set || is_set(image_memory.operation)) leaf_name_data.push_back(image_memory.get_name_leafdata());
    if (io_memory.is_set || is_set(io_memory.operation)) leaf_name_data.push_back(io_memory.get_name_leafdata());
    if (page_size.is_set || is_set(page_size.operation)) leaf_name_data.push_back(page_size.get_name_leafdata());
    if (private_physical_memory.is_set || is_set(private_physical_memory.operation)) leaf_name_data.push_back(private_physical_memory.get_name_leafdata());
    if (program_data.is_set || is_set(program_data.operation)) leaf_name_data.push_back(program_data.get_name_leafdata());
    if (program_stack.is_set || is_set(program_stack.operation)) leaf_name_data.push_back(program_stack.get_name_leafdata());
    if (program_text.is_set || is_set(program_text.operation)) leaf_name_data.push_back(program_text.get_name_leafdata());
    if (ram_memory.is_set || is_set(ram_memory.operation)) leaf_name_data.push_back(ram_memory.get_name_leafdata());
    if (reserved_memory.is_set || is_set(reserved_memory.operation)) leaf_name_data.push_back(reserved_memory.get_name_leafdata());
    if (system_ram_memory.is_set || is_set(system_ram_memory.operation)) leaf_name_data.push_back(system_ram_memory.get_name_leafdata());
    if (total_shared_window.is_set || is_set(total_shared_window.operation)) leaf_name_data.push_back(total_shared_window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MemorySummary::Nodes::Node::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "shared-window")
    {
        for(auto const & c : shared_window)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MemorySummary::Nodes::Node::Detail::SharedWindow>();
        c->parent = this;
        shared_window.push_back(std::move(c));
        children[segment_path] = shared_window.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MemorySummary::Nodes::Node::Detail::get_children()
{
    for (auto const & c : shared_window)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MemorySummary::Nodes::Node::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-memory")
    {
        allocated_memory = value;
    }
    if(value_path == "boot-ram-size")
    {
        boot_ram_size = value;
    }
    if(value_path == "flash-system")
    {
        flash_system = value;
    }
    if(value_path == "free-application-memory")
    {
        free_application_memory = value;
    }
    if(value_path == "free-physical-memory")
    {
        free_physical_memory = value;
    }
    if(value_path == "image-memory")
    {
        image_memory = value;
    }
    if(value_path == "io-memory")
    {
        io_memory = value;
    }
    if(value_path == "page-size")
    {
        page_size = value;
    }
    if(value_path == "private-physical-memory")
    {
        private_physical_memory = value;
    }
    if(value_path == "program-data")
    {
        program_data = value;
    }
    if(value_path == "program-stack")
    {
        program_stack = value;
    }
    if(value_path == "program-text")
    {
        program_text = value;
    }
    if(value_path == "ram-memory")
    {
        ram_memory = value;
    }
    if(value_path == "reserved-memory")
    {
        reserved_memory = value;
    }
    if(value_path == "system-ram-memory")
    {
        system_ram_memory = value;
    }
    if(value_path == "total-shared-window")
    {
        total_shared_window = value;
    }
}

MemorySummary::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    detail(std::make_unique<MemorySummary::Nodes::Node::Detail>())
	,summary(std::make_unique<MemorySummary::Nodes::Node::Summary>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

MemorySummary::Nodes::Node::~Node()
{
}

bool MemorySummary::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MemorySummary::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (detail !=  nullptr && is_set(detail->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
}

std::string MemorySummary::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MemorySummary::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-nto-misc-shmem-oper:memory-summary/nodes/" << get_segment_path();
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

Entity* MemorySummary::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            detail = std::make_unique<MemorySummary::Nodes::Node::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<MemorySummary::Nodes::Node::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MemorySummary::Nodes::Node::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void MemorySummary::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

MemorySummary::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "memory-summary";
}

MemorySummary::Nodes::~Nodes()
{
}

bool MemorySummary::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MemorySummary::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MemorySummary::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath MemorySummary::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-nto-misc-shmem-oper:memory-summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MemorySummary::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MemorySummary::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MemorySummary::Nodes::get_children()
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

void MemorySummary::Nodes::set_value(const std::string & value_path, std::string value)
{
}

MemorySummary::MemorySummary()
    :
    nodes(std::make_unique<MemorySummary::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "memory-summary"; yang_parent_name = "Cisco-IOS-XR-nto-misc-shmem-oper";
}

MemorySummary::~MemorySummary()
{
}

bool MemorySummary::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MemorySummary::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string MemorySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-nto-misc-shmem-oper:memory-summary";

    return path_buffer.str();

}

EntityPath MemorySummary::get_entity_path(Entity* ancestor) const
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

Entity* MemorySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<MemorySummary::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MemorySummary::get_children()
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

void MemorySummary::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> MemorySummary::clone_ptr()
{
    return std::make_unique<MemorySummary>();
}


}
}

