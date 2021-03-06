
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_crypto_sam_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_oper {

Sam::SystemInformation::SystemInformation()
    :
    	is_default_response{YType::boolean, "is-default-response"},
	 is_running{YType::boolean, "is-running"},
	 prompt_interval{YType::uint32, "prompt-interval"}
{
    yang_name = "system-information"; yang_parent_name = "sam";
}

Sam::SystemInformation::~SystemInformation()
{
}

bool Sam::SystemInformation::has_data() const
{
    return is_default_response.is_set
	|| is_running.is_set
	|| prompt_interval.is_set;
}

bool Sam::SystemInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(is_default_response.operation)
	|| is_set(is_running.operation)
	|| is_set(prompt_interval.operation);
}

std::string Sam::SystemInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-information";

    return path_buffer.str();

}

EntityPath Sam::SystemInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_default_response.is_set || is_set(is_default_response.operation)) leaf_name_data.push_back(is_default_response.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (prompt_interval.is_set || is_set(prompt_interval.operation)) leaf_name_data.push_back(prompt_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::SystemInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::SystemInformation::get_children()
{
    return children;
}

void Sam::SystemInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-default-response")
    {
        is_default_response = value;
    }
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "prompt-interval")
    {
        prompt_interval = value;
    }
}

Sam::LogContents::LogContent::Logs::Logs()
    :
    	code{YType::enumeration, "code"},
	 error{YType::enumeration, "error"},
	 index_{YType::uint32, "index"},
	 issuer{YType::enumeration, "issuer"},
	 sam_table_index{YType::uint32, "sam-table-index"},
	 serial_no{YType::str, "serial-no"},
	 source_device{YType::str, "source-device"},
	 table{YType::enumeration, "table"},
	 target_device{YType::str, "target-device"},
	 time{YType::str, "time"},
	 update_time{YType::str, "update-time"}
{
    yang_name = "logs"; yang_parent_name = "log-content";
}

Sam::LogContents::LogContent::Logs::~Logs()
{
}

bool Sam::LogContents::LogContent::Logs::has_data() const
{
    return code.is_set
	|| error.is_set
	|| index_.is_set
	|| issuer.is_set
	|| sam_table_index.is_set
	|| serial_no.is_set
	|| source_device.is_set
	|| table.is_set
	|| target_device.is_set
	|| time.is_set
	|| update_time.is_set;
}

bool Sam::LogContents::LogContent::Logs::has_operation() const
{
    return is_set(operation)
	|| is_set(code.operation)
	|| is_set(error.operation)
	|| is_set(index_.operation)
	|| is_set(issuer.operation)
	|| is_set(sam_table_index.operation)
	|| is_set(serial_no.operation)
	|| is_set(source_device.operation)
	|| is_set(table.operation)
	|| is_set(target_device.operation)
	|| is_set(time.operation)
	|| is_set(update_time.operation);
}

std::string Sam::LogContents::LogContent::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

EntityPath Sam::LogContents::LogContent::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.operation)) leaf_name_data.push_back(code.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (issuer.is_set || is_set(issuer.operation)) leaf_name_data.push_back(issuer.get_name_leafdata());
    if (sam_table_index.is_set || is_set(sam_table_index.operation)) leaf_name_data.push_back(sam_table_index.get_name_leafdata());
    if (serial_no.is_set || is_set(serial_no.operation)) leaf_name_data.push_back(serial_no.get_name_leafdata());
    if (source_device.is_set || is_set(source_device.operation)) leaf_name_data.push_back(source_device.get_name_leafdata());
    if (table.is_set || is_set(table.operation)) leaf_name_data.push_back(table.get_name_leafdata());
    if (target_device.is_set || is_set(target_device.operation)) leaf_name_data.push_back(target_device.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (update_time.is_set || is_set(update_time.operation)) leaf_name_data.push_back(update_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::LogContents::LogContent::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::LogContents::LogContent::Logs::get_children()
{
    return children;
}

void Sam::LogContents::LogContent::Logs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code")
    {
        code = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "issuer")
    {
        issuer = value;
    }
    if(value_path == "sam-table-index")
    {
        sam_table_index = value;
    }
    if(value_path == "serial-no")
    {
        serial_no = value;
    }
    if(value_path == "source-device")
    {
        source_device = value;
    }
    if(value_path == "table")
    {
        table = value;
    }
    if(value_path == "target-device")
    {
        target_device = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "update-time")
    {
        update_time = value;
    }
}

Sam::LogContents::LogContent::LogContent()
    :
    	number_of_lines{YType::int32, "number-of-lines"},
	 entries_shown{YType::uint32, "entries-shown"},
	 total_entries{YType::uint32, "total-entries"}
{
    yang_name = "log-content"; yang_parent_name = "log-contents";
}

Sam::LogContents::LogContent::~LogContent()
{
}

bool Sam::LogContents::LogContent::has_data() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_data())
            return true;
    }
    return number_of_lines.is_set
	|| entries_shown.is_set
	|| total_entries.is_set;
}

bool Sam::LogContents::LogContent::has_operation() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(number_of_lines.operation)
	|| is_set(entries_shown.operation)
	|| is_set(total_entries.operation);
}

std::string Sam::LogContents::LogContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-content" <<"[number-of-lines='" <<number_of_lines.get() <<"']";

    return path_buffer.str();

}

EntityPath Sam::LogContents::LogContent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/log-contents/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_lines.is_set || is_set(number_of_lines.operation)) leaf_name_data.push_back(number_of_lines.get_name_leafdata());
    if (entries_shown.is_set || is_set(entries_shown.operation)) leaf_name_data.push_back(entries_shown.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::LogContents::LogContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logs")
    {
        for(auto const & c : logs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sam::LogContents::LogContent::Logs>();
        c->parent = this;
        logs.push_back(std::move(c));
        children[segment_path] = logs.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::LogContents::LogContent::get_children()
{
    for (auto const & c : logs)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sam::LogContents::LogContent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-lines")
    {
        number_of_lines = value;
    }
    if(value_path == "entries-shown")
    {
        entries_shown = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
}

Sam::LogContents::LogContents()
{
    yang_name = "log-contents"; yang_parent_name = "sam";
}

Sam::LogContents::~LogContents()
{
}

bool Sam::LogContents::has_data() const
{
    for (std::size_t index=0; index<log_content.size(); index++)
    {
        if(log_content[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::LogContents::has_operation() const
{
    for (std::size_t index=0; index<log_content.size(); index++)
    {
        if(log_content[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sam::LogContents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-contents";

    return path_buffer.str();

}

EntityPath Sam::LogContents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::LogContents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-content")
    {
        for(auto const & c : log_content)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sam::LogContents::LogContent>();
        c->parent = this;
        log_content.push_back(std::move(c));
        children[segment_path] = log_content.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::LogContents::get_children()
{
    for (auto const & c : log_content)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sam::LogContents::set_value(const std::string & value_path, std::string value)
{
}

Sam::Devices::Device::Certificate::Brief::CertificateFlags::CertificateFlags()
    :
    	is_expired{YType::boolean, "is-expired"},
	 is_revoked{YType::boolean, "is-revoked"},
	 is_trusted{YType::boolean, "is-trusted"},
	 is_validated{YType::boolean, "is-validated"}
{
    yang_name = "certificate-flags"; yang_parent_name = "brief";
}

Sam::Devices::Device::Certificate::Brief::CertificateFlags::~CertificateFlags()
{
}

bool Sam::Devices::Device::Certificate::Brief::CertificateFlags::has_data() const
{
    return is_expired.is_set
	|| is_revoked.is_set
	|| is_trusted.is_set
	|| is_validated.is_set;
}

bool Sam::Devices::Device::Certificate::Brief::CertificateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_expired.operation)
	|| is_set(is_revoked.operation)
	|| is_set(is_trusted.operation)
	|| is_set(is_validated.operation);
}

std::string Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-flags";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_expired.is_set || is_set(is_expired.operation)) leaf_name_data.push_back(is_expired.get_name_leafdata());
    if (is_revoked.is_set || is_set(is_revoked.operation)) leaf_name_data.push_back(is_revoked.get_name_leafdata());
    if (is_trusted.is_set || is_set(is_trusted.operation)) leaf_name_data.push_back(is_trusted.get_name_leafdata());
    if (is_validated.is_set || is_set(is_validated.operation)) leaf_name_data.push_back(is_validated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::Brief::CertificateFlags::get_children()
{
    return children;
}

void Sam::Devices::Device::Certificate::Brief::CertificateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-expired")
    {
        is_expired = value;
    }
    if(value_path == "is-revoked")
    {
        is_revoked = value;
    }
    if(value_path == "is-trusted")
    {
        is_trusted = value;
    }
    if(value_path == "is-validated")
    {
        is_validated = value;
    }
}

Sam::Devices::Device::Certificate::Brief::Brief()
    :
    	certificate_index{YType::uint16, "certificate-index"},
	 location{YType::str, "location"}
    	,
    certificate_flags(std::make_unique<Sam::Devices::Device::Certificate::Brief::CertificateFlags>())
{
    certificate_flags->parent = this;
    children["certificate-flags"] = certificate_flags.get();

    yang_name = "brief"; yang_parent_name = "certificate";
}

Sam::Devices::Device::Certificate::Brief::~Brief()
{
}

bool Sam::Devices::Device::Certificate::Brief::has_data() const
{
    return certificate_index.is_set
	|| location.is_set
	|| (certificate_flags !=  nullptr && certificate_flags->has_data());
}

bool Sam::Devices::Device::Certificate::Brief::has_operation() const
{
    return is_set(operation)
	|| is_set(certificate_index.operation)
	|| is_set(location.operation)
	|| (certificate_flags !=  nullptr && is_set(certificate_flags->operation));
}

std::string Sam::Devices::Device::Certificate::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate_index.is_set || is_set(certificate_index.operation)) leaf_name_data.push_back(certificate_index.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::Device::Certificate::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-flags")
    {
        if(certificate_flags != nullptr)
        {
            children["certificate-flags"] = certificate_flags.get();
        }
        else
        {
            certificate_flags = std::make_unique<Sam::Devices::Device::Certificate::Brief::CertificateFlags>();
            certificate_flags->parent = this;
            children["certificate-flags"] = certificate_flags.get();
        }
        return children.at("certificate-flags");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::Brief::get_children()
{
    if(children.find("certificate-flags") == children.end())
    {
        if(certificate_flags != nullptr)
        {
            children["certificate-flags"] = certificate_flags.get();
        }
    }

    return children;
}

void Sam::Devices::Device::Certificate::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "certificate-index")
    {
        certificate_index = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::CertificateFlags()
    :
    	is_expired{YType::boolean, "is-expired"},
	 is_revoked{YType::boolean, "is-revoked"},
	 is_trusted{YType::boolean, "is-trusted"},
	 is_validated{YType::boolean, "is-validated"}
{
    yang_name = "certificate-flags"; yang_parent_name = "detail";
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::~CertificateFlags()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::has_data() const
{
    return is_expired.is_set
	|| is_revoked.is_set
	|| is_trusted.is_set
	|| is_validated.is_set;
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_expired.operation)
	|| is_set(is_revoked.operation)
	|| is_set(is_trusted.operation)
	|| is_set(is_validated.operation);
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-flags";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_expired.is_set || is_set(is_expired.operation)) leaf_name_data.push_back(is_expired.get_name_leafdata());
    if (is_revoked.is_set || is_set(is_revoked.operation)) leaf_name_data.push_back(is_revoked.get_name_leafdata());
    if (is_trusted.is_set || is_set(is_trusted.operation)) leaf_name_data.push_back(is_trusted.get_name_leafdata());
    if (is_validated.is_set || is_set(is_validated.operation)) leaf_name_data.push_back(is_validated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::get_children()
{
    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-expired")
    {
        is_expired = value;
    }
    if(value_path == "is-revoked")
    {
        is_revoked = value;
    }
    if(value_path == "is-trusted")
    {
        is_trusted = value;
    }
    if(value_path == "is-validated")
    {
        is_validated = value;
    }
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::Detail()
    :
    	certificate_index{YType::uint16, "certificate-index"},
	 location{YType::str, "location"}
    	,
    certificate_flags(std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags>())
{
    certificate_flags->parent = this;
    children["certificate-flags"] = certificate_flags.get();

    yang_name = "detail"; yang_parent_name = "certificate-index";
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::~Detail()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::has_data() const
{
    return certificate_index.is_set
	|| location.is_set
	|| (certificate_flags !=  nullptr && certificate_flags->has_data());
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(certificate_index.operation)
	|| is_set(location.operation)
	|| (certificate_flags !=  nullptr && is_set(certificate_flags->operation));
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate_index.is_set || is_set(certificate_index.operation)) leaf_name_data.push_back(certificate_index.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-flags")
    {
        if(certificate_flags != nullptr)
        {
            children["certificate-flags"] = certificate_flags.get();
        }
        else
        {
            certificate_flags = std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::CertificateFlags>();
            certificate_flags->parent = this;
            children["certificate-flags"] = certificate_flags.get();
        }
        return children.at("certificate-flags");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::get_children()
{
    if(children.find("certificate-flags") == children.end())
    {
        if(certificate_flags != nullptr)
        {
            children["certificate-flags"] = certificate_flags.get();
        }
    }

    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "certificate-index")
    {
        certificate_index = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::CertificateIndex()
    :
    	index_{YType::int32, "index"}
    	,
    detail(std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "certificate-index"; yang_parent_name = "certificate-indexes";
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::~CertificateIndex()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::has_data() const
{
    return index_.is_set
	|| (detail !=  nullptr && detail->has_data());
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-index" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            detail = std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::get_children()
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

void Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndexes()
{
    yang_name = "certificate-indexes"; yang_parent_name = "certificate";
}

Sam::Devices::Device::Certificate::CertificateIndexes::~CertificateIndexes()
{
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::has_data() const
{
    for (std::size_t index=0; index<certificate_index.size(); index++)
    {
        if(certificate_index[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::Devices::Device::Certificate::CertificateIndexes::has_operation() const
{
    for (std::size_t index=0; index<certificate_index.size(); index++)
    {
        if(certificate_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sam::Devices::Device::Certificate::CertificateIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-indexes";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::CertificateIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* Sam::Devices::Device::Certificate::CertificateIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-index")
    {
        for(auto const & c : certificate_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes::CertificateIndex>();
        c->parent = this;
        certificate_index.push_back(std::move(c));
        children[segment_path] = certificate_index.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::CertificateIndexes::get_children()
{
    for (auto const & c : certificate_index)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sam::Devices::Device::Certificate::CertificateIndexes::set_value(const std::string & value_path, std::string value)
{
}

Sam::Devices::Device::Certificate::Certificate()
    :
    brief(std::make_unique<Sam::Devices::Device::Certificate::Brief>())
	,certificate_indexes(std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes>())
{
    brief->parent = this;
    children["brief"] = brief.get();

    certificate_indexes->parent = this;
    children["certificate-indexes"] = certificate_indexes.get();

    yang_name = "certificate"; yang_parent_name = "device";
}

Sam::Devices::Device::Certificate::~Certificate()
{
}

bool Sam::Devices::Device::Certificate::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (certificate_indexes !=  nullptr && certificate_indexes->has_data());
}

bool Sam::Devices::Device::Certificate::has_operation() const
{
    return is_set(operation)
	|| (brief !=  nullptr && is_set(brief->operation))
	|| (certificate_indexes !=  nullptr && is_set(certificate_indexes->operation));
}

std::string Sam::Devices::Device::Certificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::Certificate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
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

Entity* Sam::Devices::Device::Certificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
        else
        {
            brief = std::make_unique<Sam::Devices::Device::Certificate::Brief>();
            brief->parent = this;
            children["brief"] = brief.get();
        }
        return children.at("brief");
    }

    if(child_yang_name == "certificate-indexes")
    {
        if(certificate_indexes != nullptr)
        {
            children["certificate-indexes"] = certificate_indexes.get();
        }
        else
        {
            certificate_indexes = std::make_unique<Sam::Devices::Device::Certificate::CertificateIndexes>();
            certificate_indexes->parent = this;
            children["certificate-indexes"] = certificate_indexes.get();
        }
        return children.at("certificate-indexes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::Device::Certificate::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
    }

    if(children.find("certificate-indexes") == children.end())
    {
        if(certificate_indexes != nullptr)
        {
            children["certificate-indexes"] = certificate_indexes.get();
        }
    }

    return children;
}

void Sam::Devices::Device::Certificate::set_value(const std::string & value_path, std::string value)
{
}

Sam::Devices::Device::Device()
    :
    	device_name{YType::str, "device-name"}
    	,
    certificate(std::make_unique<Sam::Devices::Device::Certificate>())
{
    certificate->parent = this;
    children["certificate"] = certificate.get();

    yang_name = "device"; yang_parent_name = "devices";
}

Sam::Devices::Device::~Device()
{
}

bool Sam::Devices::Device::has_data() const
{
    return device_name.is_set
	|| (certificate !=  nullptr && certificate->has_data());
}

bool Sam::Devices::Device::has_operation() const
{
    return is_set(operation)
	|| is_set(device_name.operation)
	|| (certificate !=  nullptr && is_set(certificate->operation));
}

std::string Sam::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device" <<"[device-name='" <<device_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Sam::Devices::Device::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/devices/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate")
    {
        if(certificate != nullptr)
        {
            children["certificate"] = certificate.get();
        }
        else
        {
            certificate = std::make_unique<Sam::Devices::Device::Certificate>();
            certificate->parent = this;
            children["certificate"] = certificate.get();
        }
        return children.at("certificate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::Device::get_children()
{
    if(children.find("certificate") == children.end())
    {
        if(certificate != nullptr)
        {
            children["certificate"] = certificate.get();
        }
    }

    return children;
}

void Sam::Devices::Device::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-name")
    {
        device_name = value;
    }
}

Sam::Devices::Devices()
{
    yang_name = "devices"; yang_parent_name = "sam";
}

Sam::Devices::~Devices()
{
}

bool Sam::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sam::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";

    return path_buffer.str();

}

EntityPath Sam::Devices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Sam::Devices::Device>();
        c->parent = this;
        device.push_back(std::move(c));
        children[segment_path] = device.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Devices::get_children()
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

void Sam::Devices::set_value(const std::string & value_path, std::string value)
{
}

Sam::Packages::Package::CertificateFlags::CertificateFlags()
    :
    	is_expired{YType::boolean, "is-expired"},
	 is_revoked{YType::boolean, "is-revoked"},
	 is_trusted{YType::boolean, "is-trusted"},
	 is_validated{YType::boolean, "is-validated"}
{
    yang_name = "certificate-flags"; yang_parent_name = "package";
}

Sam::Packages::Package::CertificateFlags::~CertificateFlags()
{
}

bool Sam::Packages::Package::CertificateFlags::has_data() const
{
    return is_expired.is_set
	|| is_revoked.is_set
	|| is_trusted.is_set
	|| is_validated.is_set;
}

bool Sam::Packages::Package::CertificateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_expired.operation)
	|| is_set(is_revoked.operation)
	|| is_set(is_trusted.operation)
	|| is_set(is_validated.operation);
}

std::string Sam::Packages::Package::CertificateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-flags";

    return path_buffer.str();

}

EntityPath Sam::Packages::Package::CertificateFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_expired.is_set || is_set(is_expired.operation)) leaf_name_data.push_back(is_expired.get_name_leafdata());
    if (is_revoked.is_set || is_set(is_revoked.operation)) leaf_name_data.push_back(is_revoked.get_name_leafdata());
    if (is_trusted.is_set || is_set(is_trusted.operation)) leaf_name_data.push_back(is_trusted.get_name_leafdata());
    if (is_validated.is_set || is_set(is_validated.operation)) leaf_name_data.push_back(is_validated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Packages::Package::CertificateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::Packages::Package::CertificateFlags::get_children()
{
    return children;
}

void Sam::Packages::Package::CertificateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-expired")
    {
        is_expired = value;
    }
    if(value_path == "is-revoked")
    {
        is_revoked = value;
    }
    if(value_path == "is-trusted")
    {
        is_trusted = value;
    }
    if(value_path == "is-validated")
    {
        is_validated = value;
    }
}

Sam::Packages::Package::Package()
    :
    	package_name{YType::str, "package-name"},
	 certificate_index{YType::uint16, "certificate-index"},
	 location{YType::str, "location"}
    	,
    certificate_flags(std::make_unique<Sam::Packages::Package::CertificateFlags>())
{
    certificate_flags->parent = this;
    children["certificate-flags"] = certificate_flags.get();

    yang_name = "package"; yang_parent_name = "packages";
}

Sam::Packages::Package::~Package()
{
}

bool Sam::Packages::Package::has_data() const
{
    return package_name.is_set
	|| certificate_index.is_set
	|| location.is_set
	|| (certificate_flags !=  nullptr && certificate_flags->has_data());
}

bool Sam::Packages::Package::has_operation() const
{
    return is_set(operation)
	|| is_set(package_name.operation)
	|| is_set(certificate_index.operation)
	|| is_set(location.operation)
	|| (certificate_flags !=  nullptr && is_set(certificate_flags->operation));
}

std::string Sam::Packages::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package" <<"[package-name='" <<package_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Sam::Packages::Package::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/packages/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package_name.is_set || is_set(package_name.operation)) leaf_name_data.push_back(package_name.get_name_leafdata());
    if (certificate_index.is_set || is_set(certificate_index.operation)) leaf_name_data.push_back(certificate_index.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Packages::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-flags")
    {
        if(certificate_flags != nullptr)
        {
            children["certificate-flags"] = certificate_flags.get();
        }
        else
        {
            certificate_flags = std::make_unique<Sam::Packages::Package::CertificateFlags>();
            certificate_flags->parent = this;
            children["certificate-flags"] = certificate_flags.get();
        }
        return children.at("certificate-flags");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Packages::Package::get_children()
{
    if(children.find("certificate-flags") == children.end())
    {
        if(certificate_flags != nullptr)
        {
            children["certificate-flags"] = certificate_flags.get();
        }
    }

    return children;
}

void Sam::Packages::Package::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "package-name")
    {
        package_name = value;
    }
    if(value_path == "certificate-index")
    {
        certificate_index = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Sam::Packages::Packages()
{
    yang_name = "packages"; yang_parent_name = "sam";
}

Sam::Packages::~Packages()
{
}

bool Sam::Packages::has_data() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::Packages::has_operation() const
{
    for (std::size_t index=0; index<package.size(); index++)
    {
        if(package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sam::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";

    return path_buffer.str();

}

EntityPath Sam::Packages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "package")
    {
        for(auto const & c : package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sam::Packages::Package>();
        c->parent = this;
        package.push_back(std::move(c));
        children[segment_path] = package.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::Packages::get_children()
{
    for (auto const & c : package)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sam::Packages::set_value(const std::string & value_path, std::string value)
{
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::Issuer()
    :
    	common_name{YType::str, "common-name"},
	 country{YType::str, "country"},
	 organization{YType::str, "organization"}
{
    yang_name = "issuer"; yang_parent_name = "certificate-revocation-list-detail";
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::~Issuer()
{
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::has_data() const
{
    return common_name.is_set
	|| country.is_set
	|| organization.is_set;
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::has_operation() const
{
    return is_set(operation)
	|| is_set(common_name.operation)
	|| is_set(country.operation)
	|| is_set(organization.operation);
}

std::string Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer";

    return path_buffer.str();

}

EntityPath Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.operation)) leaf_name_data.push_back(common_name.get_name_leafdata());
    if (country.is_set || is_set(country.operation)) leaf_name_data.push_back(country.get_name_leafdata());
    if (organization.is_set || is_set(organization.operation)) leaf_name_data.push_back(organization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::get_children()
{
    return children;
}

void Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-name")
    {
        common_name = value;
    }
    if(value_path == "country")
    {
        country = value;
    }
    if(value_path == "organization")
    {
        organization = value;
    }
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::CertificateRevocationListDetail()
    :
    	crl_index{YType::uint16, "crl-index"},
	 updates{YType::str, "updates"}
    	,
    issuer(std::make_unique<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer>())
{
    issuer->parent = this;
    children["issuer"] = issuer.get();

    yang_name = "certificate-revocation-list-detail"; yang_parent_name = "certificate-revocation";
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::~CertificateRevocationListDetail()
{
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::has_data() const
{
    return crl_index.is_set
	|| updates.is_set
	|| (issuer !=  nullptr && issuer->has_data());
}

bool Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(crl_index.operation)
	|| is_set(updates.operation)
	|| (issuer !=  nullptr && is_set(issuer->operation));
}

std::string Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocation-list-detail";

    return path_buffer.str();

}

EntityPath Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crl_index.is_set || is_set(crl_index.operation)) leaf_name_data.push_back(crl_index.get_name_leafdata());
    if (updates.is_set || is_set(updates.operation)) leaf_name_data.push_back(updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "issuer")
    {
        if(issuer != nullptr)
        {
            children["issuer"] = issuer.get();
        }
        else
        {
            issuer = std::make_unique<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::Issuer>();
            issuer->parent = this;
            children["issuer"] = issuer.get();
        }
        return children.at("issuer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::get_children()
{
    if(children.find("issuer") == children.end())
    {
        if(issuer != nullptr)
        {
            children["issuer"] = issuer.get();
        }
    }

    return children;
}

void Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crl-index")
    {
        crl_index = value;
    }
    if(value_path == "updates")
    {
        updates = value;
    }
}

Sam::CertificateRevocations::CertificateRevocation::CertificateRevocation()
    :
    	crl_index{YType::int32, "crl-index"}
    	,
    certificate_revocation_list_detail(std::make_unique<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail>())
{
    certificate_revocation_list_detail->parent = this;
    children["certificate-revocation-list-detail"] = certificate_revocation_list_detail.get();

    yang_name = "certificate-revocation"; yang_parent_name = "certificate-revocations";
}

Sam::CertificateRevocations::CertificateRevocation::~CertificateRevocation()
{
}

bool Sam::CertificateRevocations::CertificateRevocation::has_data() const
{
    return crl_index.is_set
	|| (certificate_revocation_list_detail !=  nullptr && certificate_revocation_list_detail->has_data());
}

bool Sam::CertificateRevocations::CertificateRevocation::has_operation() const
{
    return is_set(operation)
	|| is_set(crl_index.operation)
	|| (certificate_revocation_list_detail !=  nullptr && is_set(certificate_revocation_list_detail->operation));
}

std::string Sam::CertificateRevocations::CertificateRevocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocation" <<"[crl-index='" <<crl_index.get() <<"']";

    return path_buffer.str();

}

EntityPath Sam::CertificateRevocations::CertificateRevocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/certificate-revocations/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crl_index.is_set || is_set(crl_index.operation)) leaf_name_data.push_back(crl_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::CertificateRevocations::CertificateRevocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-revocation-list-detail")
    {
        if(certificate_revocation_list_detail != nullptr)
        {
            children["certificate-revocation-list-detail"] = certificate_revocation_list_detail.get();
        }
        else
        {
            certificate_revocation_list_detail = std::make_unique<Sam::CertificateRevocations::CertificateRevocation::CertificateRevocationListDetail>();
            certificate_revocation_list_detail->parent = this;
            children["certificate-revocation-list-detail"] = certificate_revocation_list_detail.get();
        }
        return children.at("certificate-revocation-list-detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::CertificateRevocations::CertificateRevocation::get_children()
{
    if(children.find("certificate-revocation-list-detail") == children.end())
    {
        if(certificate_revocation_list_detail != nullptr)
        {
            children["certificate-revocation-list-detail"] = certificate_revocation_list_detail.get();
        }
    }

    return children;
}

void Sam::CertificateRevocations::CertificateRevocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crl-index")
    {
        crl_index = value;
    }
}

Sam::CertificateRevocations::CertificateRevocations()
{
    yang_name = "certificate-revocations"; yang_parent_name = "sam";
}

Sam::CertificateRevocations::~CertificateRevocations()
{
}

bool Sam::CertificateRevocations::has_data() const
{
    for (std::size_t index=0; index<certificate_revocation.size(); index++)
    {
        if(certificate_revocation[index]->has_data())
            return true;
    }
    return false;
}

bool Sam::CertificateRevocations::has_operation() const
{
    for (std::size_t index=0; index<certificate_revocation.size(); index++)
    {
        if(certificate_revocation[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sam::CertificateRevocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocations";

    return path_buffer.str();

}

EntityPath Sam::CertificateRevocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::CertificateRevocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-revocation")
    {
        for(auto const & c : certificate_revocation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sam::CertificateRevocations::CertificateRevocation>();
        c->parent = this;
        certificate_revocation.push_back(std::move(c));
        children[segment_path] = certificate_revocation.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::CertificateRevocations::get_children()
{
    for (auto const & c : certificate_revocation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sam::CertificateRevocations::set_value(const std::string & value_path, std::string value)
{
}

Sam::CertificateRevocationListSummary::Issuer::Issuer()
    :
    	common_name{YType::str, "common-name"},
	 country{YType::str, "country"},
	 organization{YType::str, "organization"}
{
    yang_name = "issuer"; yang_parent_name = "certificate-revocation-list-summary";
}

Sam::CertificateRevocationListSummary::Issuer::~Issuer()
{
}

bool Sam::CertificateRevocationListSummary::Issuer::has_data() const
{
    return common_name.is_set
	|| country.is_set
	|| organization.is_set;
}

bool Sam::CertificateRevocationListSummary::Issuer::has_operation() const
{
    return is_set(operation)
	|| is_set(common_name.operation)
	|| is_set(country.operation)
	|| is_set(organization.operation);
}

std::string Sam::CertificateRevocationListSummary::Issuer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issuer";

    return path_buffer.str();

}

EntityPath Sam::CertificateRevocationListSummary::Issuer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/certificate-revocation-list-summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.operation)) leaf_name_data.push_back(common_name.get_name_leafdata());
    if (country.is_set || is_set(country.operation)) leaf_name_data.push_back(country.get_name_leafdata());
    if (organization.is_set || is_set(organization.operation)) leaf_name_data.push_back(organization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::CertificateRevocationListSummary::Issuer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sam::CertificateRevocationListSummary::Issuer::get_children()
{
    return children;
}

void Sam::CertificateRevocationListSummary::Issuer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-name")
    {
        common_name = value;
    }
    if(value_path == "country")
    {
        country = value;
    }
    if(value_path == "organization")
    {
        organization = value;
    }
}

Sam::CertificateRevocationListSummary::CertificateRevocationListSummary()
    :
    	crl_index{YType::uint16, "crl-index"},
	 updates{YType::str, "updates"}
    	,
    issuer(std::make_unique<Sam::CertificateRevocationListSummary::Issuer>())
{
    issuer->parent = this;
    children["issuer"] = issuer.get();

    yang_name = "certificate-revocation-list-summary"; yang_parent_name = "sam";
}

Sam::CertificateRevocationListSummary::~CertificateRevocationListSummary()
{
}

bool Sam::CertificateRevocationListSummary::has_data() const
{
    return crl_index.is_set
	|| updates.is_set
	|| (issuer !=  nullptr && issuer->has_data());
}

bool Sam::CertificateRevocationListSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(crl_index.operation)
	|| is_set(updates.operation)
	|| (issuer !=  nullptr && is_set(issuer->operation));
}

std::string Sam::CertificateRevocationListSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certificate-revocation-list-summary";

    return path_buffer.str();

}

EntityPath Sam::CertificateRevocationListSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crl_index.is_set || is_set(crl_index.operation)) leaf_name_data.push_back(crl_index.get_name_leafdata());
    if (updates.is_set || is_set(updates.operation)) leaf_name_data.push_back(updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sam::CertificateRevocationListSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "issuer")
    {
        if(issuer != nullptr)
        {
            children["issuer"] = issuer.get();
        }
        else
        {
            issuer = std::make_unique<Sam::CertificateRevocationListSummary::Issuer>();
            issuer->parent = this;
            children["issuer"] = issuer.get();
        }
        return children.at("issuer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::CertificateRevocationListSummary::get_children()
{
    if(children.find("issuer") == children.end())
    {
        if(issuer != nullptr)
        {
            children["issuer"] = issuer.get();
        }
    }

    return children;
}

void Sam::CertificateRevocationListSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crl-index")
    {
        crl_index = value;
    }
    if(value_path == "updates")
    {
        updates = value;
    }
}

Sam::Sam()
    :
    certificate_revocation_list_summary(std::make_unique<Sam::CertificateRevocationListSummary>())
	,certificate_revocations(std::make_unique<Sam::CertificateRevocations>())
	,devices(std::make_unique<Sam::Devices>())
	,log_contents(std::make_unique<Sam::LogContents>())
	,packages(std::make_unique<Sam::Packages>())
	,system_information(std::make_unique<Sam::SystemInformation>())
{
    certificate_revocation_list_summary->parent = this;
    children["certificate-revocation-list-summary"] = certificate_revocation_list_summary.get();

    certificate_revocations->parent = this;
    children["certificate-revocations"] = certificate_revocations.get();

    devices->parent = this;
    children["devices"] = devices.get();

    log_contents->parent = this;
    children["log-contents"] = log_contents.get();

    packages->parent = this;
    children["packages"] = packages.get();

    system_information->parent = this;
    children["system-information"] = system_information.get();

    yang_name = "sam"; yang_parent_name = "Cisco-IOS-XR-crypto-sam-oper";
}

Sam::~Sam()
{
}

bool Sam::has_data() const
{
    return (certificate_revocation_list_summary !=  nullptr && certificate_revocation_list_summary->has_data())
	|| (certificate_revocations !=  nullptr && certificate_revocations->has_data())
	|| (devices !=  nullptr && devices->has_data())
	|| (log_contents !=  nullptr && log_contents->has_data())
	|| (packages !=  nullptr && packages->has_data())
	|| (system_information !=  nullptr && system_information->has_data());
}

bool Sam::has_operation() const
{
    return is_set(operation)
	|| (certificate_revocation_list_summary !=  nullptr && is_set(certificate_revocation_list_summary->operation))
	|| (certificate_revocations !=  nullptr && is_set(certificate_revocations->operation))
	|| (devices !=  nullptr && is_set(devices->operation))
	|| (log_contents !=  nullptr && is_set(log_contents->operation))
	|| (packages !=  nullptr && is_set(packages->operation))
	|| (system_information !=  nullptr && is_set(system_information->operation));
}

std::string Sam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-oper:sam";

    return path_buffer.str();

}

EntityPath Sam::get_entity_path(Entity* ancestor) const
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

Entity* Sam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "certificate-revocation-list-summary")
    {
        if(certificate_revocation_list_summary != nullptr)
        {
            children["certificate-revocation-list-summary"] = certificate_revocation_list_summary.get();
        }
        else
        {
            certificate_revocation_list_summary = std::make_unique<Sam::CertificateRevocationListSummary>();
            certificate_revocation_list_summary->parent = this;
            children["certificate-revocation-list-summary"] = certificate_revocation_list_summary.get();
        }
        return children.at("certificate-revocation-list-summary");
    }

    if(child_yang_name == "certificate-revocations")
    {
        if(certificate_revocations != nullptr)
        {
            children["certificate-revocations"] = certificate_revocations.get();
        }
        else
        {
            certificate_revocations = std::make_unique<Sam::CertificateRevocations>();
            certificate_revocations->parent = this;
            children["certificate-revocations"] = certificate_revocations.get();
        }
        return children.at("certificate-revocations");
    }

    if(child_yang_name == "devices")
    {
        if(devices != nullptr)
        {
            children["devices"] = devices.get();
        }
        else
        {
            devices = std::make_unique<Sam::Devices>();
            devices->parent = this;
            children["devices"] = devices.get();
        }
        return children.at("devices");
    }

    if(child_yang_name == "log-contents")
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
        else
        {
            log_contents = std::make_unique<Sam::LogContents>();
            log_contents->parent = this;
            children["log-contents"] = log_contents.get();
        }
        return children.at("log-contents");
    }

    if(child_yang_name == "packages")
    {
        if(packages != nullptr)
        {
            children["packages"] = packages.get();
        }
        else
        {
            packages = std::make_unique<Sam::Packages>();
            packages->parent = this;
            children["packages"] = packages.get();
        }
        return children.at("packages");
    }

    if(child_yang_name == "system-information")
    {
        if(system_information != nullptr)
        {
            children["system-information"] = system_information.get();
        }
        else
        {
            system_information = std::make_unique<Sam::SystemInformation>();
            system_information->parent = this;
            children["system-information"] = system_information.get();
        }
        return children.at("system-information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sam::get_children()
{
    if(children.find("certificate-revocation-list-summary") == children.end())
    {
        if(certificate_revocation_list_summary != nullptr)
        {
            children["certificate-revocation-list-summary"] = certificate_revocation_list_summary.get();
        }
    }

    if(children.find("certificate-revocations") == children.end())
    {
        if(certificate_revocations != nullptr)
        {
            children["certificate-revocations"] = certificate_revocations.get();
        }
    }

    if(children.find("devices") == children.end())
    {
        if(devices != nullptr)
        {
            children["devices"] = devices.get();
        }
    }

    if(children.find("log-contents") == children.end())
    {
        if(log_contents != nullptr)
        {
            children["log-contents"] = log_contents.get();
        }
    }

    if(children.find("packages") == children.end())
    {
        if(packages != nullptr)
        {
            children["packages"] = packages.get();
        }
    }

    if(children.find("system-information") == children.end())
    {
        if(system_information != nullptr)
        {
            children["system-information"] = system_information.get();
        }
    }

    return children;
}

void Sam::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Sam::clone_ptr()
{
    return std::make_unique<Sam>();
}

const Enum::Value LogErrorEnum::unknown {0, "unknown"};
const Enum::Value LogErrorEnum::log_message_error {1, "log-message-error"};
const Enum::Value LogErrorEnum::get_issuer_name_failed {2, "get-issuer-name-failed"};

const Enum::Value LogCodeEnum::unknown {0, "unknown"};
const Enum::Value LogCodeEnum::sam_server_restared_router_reboot {1, "sam-server-restared-router-reboot"};
const Enum::Value LogCodeEnum::sam_server_restared {2, "sam-server-restared"};
const Enum::Value LogCodeEnum::added_certificate_in_table {3, "added-certificate-in-table"};
const Enum::Value LogCodeEnum::copied_certificate_in_table {4, "copied-certificate-in-table"};
const Enum::Value LogCodeEnum::certificate_flag_changed {5, "certificate-flag-changed"};
const Enum::Value LogCodeEnum::validated_certificate {6, "validated-certificate"};
const Enum::Value LogCodeEnum::certificate_expired_detected {7, "certificate-expired-detected"};
const Enum::Value LogCodeEnum::certificate_revoked_detected {8, "certificate-revoked-detected"};
const Enum::Value LogCodeEnum::ca_certificate_expired_detected {9, "ca-certificate-expired-detected"};
const Enum::Value LogCodeEnum::ca_certificate_revoked_detected {10, "ca-certificate-revoked-detected"};
const Enum::Value LogCodeEnum::deleted_certificate_from_table {11, "deleted-certificate-from-table"};
const Enum::Value LogCodeEnum::crl_added_updated_in_table {12, "crl-added-updated-in-table"};
const Enum::Value LogCodeEnum::checked_memory_digest {13, "checked-memory-digest"};
const Enum::Value LogCodeEnum::nvram_digest_mismatch_detected {14, "nvram-digest-mismatch-detected"};
const Enum::Value LogCodeEnum::insecure_backup_file_detected {15, "insecure-backup-file-detected"};
const Enum::Value LogCodeEnum::error_restore_operation {16, "error-restore-operation"};
const Enum::Value LogCodeEnum::backup_file_on_nvram_deleted {17, "backup-file-on-nvram-deleted"};
const Enum::Value LogCodeEnum::sam_log_file_recovered_from_system_database {18, "sam-log-file-recovered-from-system-database"};
const Enum::Value LogCodeEnum::validated_elf {19, "validated-elf"};
const Enum::Value LogCodeEnum::namespace_deleted_recovered_by_sam {20, "namespace-deleted-recovered-by-sam"};

const Enum::Value CertificateIssuerEnum::unknown {0, "unknown"};
const Enum::Value CertificateIssuerEnum::code_signing_server_certificate_authority {1, "code-signing-server-certificate-authority"};

const Enum::Value LogTablesEnum::unkown {0, "unkown"};
const Enum::Value LogTablesEnum::memory_digest_table {1, "memory-digest-table"};
const Enum::Value LogTablesEnum::system_database_digest {2, "system-database-digest"};
const Enum::Value LogTablesEnum::sam_tables {3, "sam-tables"};


}
}

