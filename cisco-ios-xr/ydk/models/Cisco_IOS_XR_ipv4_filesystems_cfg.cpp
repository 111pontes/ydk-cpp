
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_filesystems_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_filesystems_cfg {

Rcp::RcpClient::RcpClient()
    :
    	source_interface{YType::str, "source-interface"}
{
    yang_name = "rcp-client"; yang_parent_name = "rcp";
}

Rcp::RcpClient::~RcpClient()
{
}

bool Rcp::RcpClient::has_data() const
{
    return source_interface.is_set;
}

bool Rcp::RcpClient::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation);
}

std::string Rcp::RcpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcp-client";

    return path_buffer.str();

}

EntityPath Rcp::RcpClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:rcp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Rcp::RcpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Rcp::RcpClient::get_children()
{
    return children;
}

void Rcp::RcpClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Rcp::Rcp()
    :
    rcp_client(std::make_unique<Rcp::RcpClient>())
{
    rcp_client->parent = this;
    children["rcp-client"] = rcp_client.get();

    yang_name = "rcp"; yang_parent_name = "Cisco-IOS-XR-ipv4-filesystems-cfg";
}

Rcp::~Rcp()
{
}

bool Rcp::has_data() const
{
    return (rcp_client !=  nullptr && rcp_client->has_data());
}

bool Rcp::has_operation() const
{
    return is_set(operation)
	|| (rcp_client !=  nullptr && is_set(rcp_client->operation));
}

std::string Rcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:rcp";

    return path_buffer.str();

}

EntityPath Rcp::get_entity_path(Entity* ancestor) const
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

Entity* Rcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rcp-client")
    {
        if(rcp_client != nullptr)
        {
            children["rcp-client"] = rcp_client.get();
        }
        else
        {
            rcp_client = std::make_unique<Rcp::RcpClient>();
            rcp_client->parent = this;
            children["rcp-client"] = rcp_client.get();
        }
        return children.at("rcp-client");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Rcp::get_children()
{
    if(children.find("rcp-client") == children.end())
    {
        if(rcp_client != nullptr)
        {
            children["rcp-client"] = rcp_client.get();
        }
    }

    return children;
}

void Rcp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Rcp::clone_ptr()
{
    return std::make_unique<Rcp>();
}
Ftp::FtpClient::FtpClient()
    :
    	anonymous_password{YType::str, "anonymous-password"},
	 passive{YType::empty, "passive"},
	 password{YType::str, "password"},
	 source_interface{YType::str, "source-interface"}
{
    yang_name = "ftp-client"; yang_parent_name = "ftp";
}

Ftp::FtpClient::~FtpClient()
{
}

bool Ftp::FtpClient::has_data() const
{
    return anonymous_password.is_set
	|| passive.is_set
	|| password.is_set
	|| source_interface.is_set;
}

bool Ftp::FtpClient::has_operation() const
{
    return is_set(operation)
	|| is_set(anonymous_password.operation)
	|| is_set(passive.operation)
	|| is_set(password.operation)
	|| is_set(source_interface.operation);
}

std::string Ftp::FtpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftp-client";

    return path_buffer.str();

}

EntityPath Ftp::FtpClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:ftp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anonymous_password.is_set || is_set(anonymous_password.operation)) leaf_name_data.push_back(anonymous_password.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ftp::FtpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ftp::FtpClient::get_children()
{
    return children;
}

void Ftp::FtpClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anonymous-password")
    {
        anonymous_password = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Ftp::Ftp()
    :
    ftp_client(std::make_unique<Ftp::FtpClient>())
{
    ftp_client->parent = this;
    children["ftp-client"] = ftp_client.get();

    yang_name = "ftp"; yang_parent_name = "Cisco-IOS-XR-ipv4-filesystems-cfg";
}

Ftp::~Ftp()
{
}

bool Ftp::has_data() const
{
    return (ftp_client !=  nullptr && ftp_client->has_data());
}

bool Ftp::has_operation() const
{
    return is_set(operation)
	|| (ftp_client !=  nullptr && is_set(ftp_client->operation));
}

std::string Ftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:ftp";

    return path_buffer.str();

}

EntityPath Ftp::get_entity_path(Entity* ancestor) const
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

Entity* Ftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ftp-client")
    {
        if(ftp_client != nullptr)
        {
            children["ftp-client"] = ftp_client.get();
        }
        else
        {
            ftp_client = std::make_unique<Ftp::FtpClient>();
            ftp_client->parent = this;
            children["ftp-client"] = ftp_client.get();
        }
        return children.at("ftp-client");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ftp::get_children()
{
    if(children.find("ftp-client") == children.end())
    {
        if(ftp_client != nullptr)
        {
            children["ftp-client"] = ftp_client.get();
        }
    }

    return children;
}

void Ftp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ftp::clone_ptr()
{
    return std::make_unique<Ftp>();
}
Tftp::TftpClient::TftpClient()
    :
    	source_interface{YType::str, "source-interface"}
{
    yang_name = "tftp-client"; yang_parent_name = "tftp";
}

Tftp::TftpClient::~TftpClient()
{
}

bool Tftp::TftpClient::has_data() const
{
    return source_interface.is_set;
}

bool Tftp::TftpClient::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation);
}

std::string Tftp::TftpClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-client";

    return path_buffer.str();

}

EntityPath Tftp::TftpClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:tftp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tftp::TftpClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tftp::TftpClient::get_children()
{
    return children;
}

void Tftp::TftpClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Tftp::Tftp()
    :
    tftp_client(std::make_unique<Tftp::TftpClient>())
{
    tftp_client->parent = this;
    children["tftp-client"] = tftp_client.get();

    yang_name = "tftp"; yang_parent_name = "Cisco-IOS-XR-ipv4-filesystems-cfg";
}

Tftp::~Tftp()
{
}

bool Tftp::has_data() const
{
    return (tftp_client !=  nullptr && tftp_client->has_data());
}

bool Tftp::has_operation() const
{
    return is_set(operation)
	|| (tftp_client !=  nullptr && is_set(tftp_client->operation));
}

std::string Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-filesystems-cfg:tftp";

    return path_buffer.str();

}

EntityPath Tftp::get_entity_path(Entity* ancestor) const
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

Entity* Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tftp-client")
    {
        if(tftp_client != nullptr)
        {
            children["tftp-client"] = tftp_client.get();
        }
        else
        {
            tftp_client = std::make_unique<Tftp::TftpClient>();
            tftp_client->parent = this;
            children["tftp-client"] = tftp_client.get();
        }
        return children.at("tftp-client");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tftp::get_children()
{
    if(children.find("tftp-client") == children.end())
    {
        if(tftp_client != nullptr)
        {
            children["tftp-client"] = tftp_client.get();
        }
    }

    return children;
}

void Tftp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Tftp::clone_ptr()
{
    return std::make_unique<Tftp>();
}


}
}

