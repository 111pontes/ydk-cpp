
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_acl_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_datatypes {


const Enum::Value Ipv4AclDscpNumberEnum::default_ {0, "default"};
const Enum::Value Ipv4AclDscpNumberEnum::af11 {10, "af11"};
const Enum::Value Ipv4AclDscpNumberEnum::af12 {12, "af12"};
const Enum::Value Ipv4AclDscpNumberEnum::af13 {14, "af13"};
const Enum::Value Ipv4AclDscpNumberEnum::af21 {18, "af21"};
const Enum::Value Ipv4AclDscpNumberEnum::af22 {20, "af22"};
const Enum::Value Ipv4AclDscpNumberEnum::af23 {22, "af23"};
const Enum::Value Ipv4AclDscpNumberEnum::af31 {26, "af31"};
const Enum::Value Ipv4AclDscpNumberEnum::af32 {28, "af32"};
const Enum::Value Ipv4AclDscpNumberEnum::af33 {30, "af33"};
const Enum::Value Ipv4AclDscpNumberEnum::af41 {34, "af41"};
const Enum::Value Ipv4AclDscpNumberEnum::af42 {36, "af42"};
const Enum::Value Ipv4AclDscpNumberEnum::af43 {38, "af43"};
const Enum::Value Ipv4AclDscpNumberEnum::cs1 {8, "cs1"};
const Enum::Value Ipv4AclDscpNumberEnum::cs2 {16, "cs2"};
const Enum::Value Ipv4AclDscpNumberEnum::cs3 {24, "cs3"};
const Enum::Value Ipv4AclDscpNumberEnum::cs4 {32, "cs4"};
const Enum::Value Ipv4AclDscpNumberEnum::cs5 {40, "cs5"};
const Enum::Value Ipv4AclDscpNumberEnum::cs6 {48, "cs6"};
const Enum::Value Ipv4AclDscpNumberEnum::cs7 {56, "cs7"};
const Enum::Value Ipv4AclDscpNumberEnum::ef {46, "ef"};

const Enum::Value Ipv4AclTcpBitsNumberEnum::established {20, "established"};
const Enum::Value Ipv4AclTcpBitsNumberEnum::ack {16, "ack"};
const Enum::Value Ipv4AclTcpBitsNumberEnum::rst {4, "rst"};
const Enum::Value Ipv4AclTcpBitsNumberEnum::fin {1, "fin"};
const Enum::Value Ipv4AclTcpBitsNumberEnum::psh {8, "psh"};
const Enum::Value Ipv4AclTcpBitsNumberEnum::syn {2, "syn"};
const Enum::Value Ipv4AclTcpBitsNumberEnum::urg {32, "urg"};

const Enum::Value Ipv4AclTcpMatchOperatorEnumEnum::match_all {1, "match-all"};
const Enum::Value Ipv4AclTcpMatchOperatorEnumEnum::match_any {3, "match-any"};

const Enum::Value Ipv4AclLoggingEnumEnum::log {1, "log"};
const Enum::Value Ipv4AclLoggingEnumEnum::log_input {2, "log-input"};

const Enum::Value Ipv4AclPrecedenceNumberEnum::critical {5, "critical"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::flash {3, "flash"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::flash_override {4, "flash-override"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::immediate {2, "immediate"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::internet {6, "internet"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::network {7, "network"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::priority {1, "priority"};
const Enum::Value Ipv4AclPrecedenceNumberEnum::routine {0, "routine"};

const Enum::Value Ipv4AclProtocolNumberEnum::ip {0, "ip"};
const Enum::Value Ipv4AclProtocolNumberEnum::icmp {1, "icmp"};
const Enum::Value Ipv4AclProtocolNumberEnum::igmp {2, "igmp"};
const Enum::Value Ipv4AclProtocolNumberEnum::ip_in_ip {4, "ip-in-ip"};
const Enum::Value Ipv4AclProtocolNumberEnum::tcp {6, "tcp"};
const Enum::Value Ipv4AclProtocolNumberEnum::igrp {9, "igrp"};
const Enum::Value Ipv4AclProtocolNumberEnum::udp {17, "udp"};
const Enum::Value Ipv4AclProtocolNumberEnum::gre {47, "gre"};
const Enum::Value Ipv4AclProtocolNumberEnum::esp {50, "esp"};
const Enum::Value Ipv4AclProtocolNumberEnum::ahp {51, "ahp"};
const Enum::Value Ipv4AclProtocolNumberEnum::eigrp {88, "eigrp"};
const Enum::Value Ipv4AclProtocolNumberEnum::ospf {89, "ospf"};
const Enum::Value Ipv4AclProtocolNumberEnum::nos {94, "nos"};
const Enum::Value Ipv4AclProtocolNumberEnum::pim {103, "pim"};
const Enum::Value Ipv4AclProtocolNumberEnum::pcp {108, "pcp"};
const Enum::Value Ipv4AclProtocolNumberEnum::sctp {132, "sctp"};

const Enum::Value Ipv4AclGrantEnumEnum::deny {0, "deny"};
const Enum::Value Ipv4AclGrantEnumEnum::permit {1, "permit"};

const Enum::Value Ipv4AclPortNumberEnum::echo {7, "echo"};
const Enum::Value Ipv4AclPortNumberEnum::discard {9, "discard"};
const Enum::Value Ipv4AclPortNumberEnum::daytime {13, "daytime"};
const Enum::Value Ipv4AclPortNumberEnum::char_gen {19, "char-gen"};
const Enum::Value Ipv4AclPortNumberEnum::ftp_data {20, "ftp-data"};
const Enum::Value Ipv4AclPortNumberEnum::ftp {21, "ftp"};
const Enum::Value Ipv4AclPortNumberEnum::telnet {23, "telnet"};
const Enum::Value Ipv4AclPortNumberEnum::smtp {25, "smtp"};
const Enum::Value Ipv4AclPortNumberEnum::time {37, "time"};
const Enum::Value Ipv4AclPortNumberEnum::name_server {42, "name-server"};
const Enum::Value Ipv4AclPortNumberEnum::who_is {43, "who-is"};
const Enum::Value Ipv4AclPortNumberEnum::tacacs {49, "tacacs"};
const Enum::Value Ipv4AclPortNumberEnum::dns {53, "dns"};
const Enum::Value Ipv4AclPortNumberEnum::boot_ps {67, "boot-ps"};
const Enum::Value Ipv4AclPortNumberEnum::boot_pc {68, "boot-pc"};
const Enum::Value Ipv4AclPortNumberEnum::tftp {69, "tftp"};
const Enum::Value Ipv4AclPortNumberEnum::gopher {70, "gopher"};
const Enum::Value Ipv4AclPortNumberEnum::finger {79, "finger"};
const Enum::Value Ipv4AclPortNumberEnum::www {80, "www"};
const Enum::Value Ipv4AclPortNumberEnum::host_name {101, "host-name"};
const Enum::Value Ipv4AclPortNumberEnum::pop2 {109, "pop2"};
const Enum::Value Ipv4AclPortNumberEnum::pop3 {110, "pop3"};
const Enum::Value Ipv4AclPortNumberEnum::sun_rpc {111, "sun-rpc"};
const Enum::Value Ipv4AclPortNumberEnum::ident {113, "ident"};
const Enum::Value Ipv4AclPortNumberEnum::nntp {119, "nntp"};
const Enum::Value Ipv4AclPortNumberEnum::ntp {123, "ntp"};
const Enum::Value Ipv4AclPortNumberEnum::net_bios_ns {137, "net-bios-ns"};
const Enum::Value Ipv4AclPortNumberEnum::net_bios_dgs {138, "net-bios-dgs"};
const Enum::Value Ipv4AclPortNumberEnum::net_bios_ss {139, "net-bios-ss"};
const Enum::Value Ipv4AclPortNumberEnum::snmp {161, "snmp"};
const Enum::Value Ipv4AclPortNumberEnum::snmp_trap {162, "snmp-trap"};
const Enum::Value Ipv4AclPortNumberEnum::xdmcp {177, "xdmcp"};
const Enum::Value Ipv4AclPortNumberEnum::bgp {179, "bgp"};
const Enum::Value Ipv4AclPortNumberEnum::irc {194, "irc"};
const Enum::Value Ipv4AclPortNumberEnum::dnsix {195, "dnsix"};
const Enum::Value Ipv4AclPortNumberEnum::mobile_ip {434, "mobile-ip"};
const Enum::Value Ipv4AclPortNumberEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::Value Ipv4AclPortNumberEnum::isakmp {500, "isakmp"};
const Enum::Value Ipv4AclPortNumberEnum::exec_or_biff {512, "exec-or-biff"};
const Enum::Value Ipv4AclPortNumberEnum::login_or_who {513, "login-or-who"};
const Enum::Value Ipv4AclPortNumberEnum::cmd_or_syslog {514, "cmd-or-syslog"};
const Enum::Value Ipv4AclPortNumberEnum::lpd {515, "lpd"};
const Enum::Value Ipv4AclPortNumberEnum::talk {517, "talk"};
const Enum::Value Ipv4AclPortNumberEnum::rip {520, "rip"};
const Enum::Value Ipv4AclPortNumberEnum::uucp {540, "uucp"};
const Enum::Value Ipv4AclPortNumberEnum::klogin {543, "klogin"};
const Enum::Value Ipv4AclPortNumberEnum::kshell {544, "kshell"};
const Enum::Value Ipv4AclPortNumberEnum::ldp {646, "ldp"};

const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::echo_reply {65535, "echo-reply"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::network_unreachable {196608, "network-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_unreachable {196609, "host-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::protocol_unreachable {196610, "protocol-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::port_unreachable {196611, "port-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::packet_too_big {196612, "packet-too-big"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::source_route_failed {196613, "source-route-failed"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::network_unknown {196614, "network-unknown"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_unknown {196615, "host-unknown"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_isolated {196616, "host-isolated"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::dod_net_prohibited {196617, "dod-net-prohibited"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::dod_host_prohibited {196618, "dod-host-prohibited"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_tos_unreachable {196619, "host-tos-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::net_tos_unreachable {196620, "net-tos-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::administratively_prohibited {196621, "administratively-prohibited"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_precedence_unreachable {196622, "host-precedence-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::precedence_unreachable {196623, "precedence-unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::unreachable {262143, "unreachable"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::source_quench {327679, "source-quench"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::network_redirect {327680, "network-redirect"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_redirect {327681, "host-redirect"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::net_tos_redirect {327682, "net-tos-redirect"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::host_tos_redirect {327683, "host-tos-redirect"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::redirect {393215, "redirect"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::alternate_address {458751, "alternate-address"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::echo {589823, "echo"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::router_advertisement {655359, "router-advertisement"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::router_solicitation {720895, "router-solicitation"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::ttl_exceeded {720896, "ttl-exceeded"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::reassembly_timeout {720897, "reassembly-timeout"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::time_exceeded {786431, "time-exceeded"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::general_parameter_problem {786432, "general-parameter-problem"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::option_missing {786433, "option-missing"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::no_room_for_option {786434, "no-room-for-option"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::parameter_problem {851967, "parameter-problem"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::timestamp_request {917503, "timestamp-request"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::timestamp_reply {983039, "timestamp-reply"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::information_request {1048575, "information-request"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::information_reply {1114111, "information-reply"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::mask_request {1179647, "mask-request"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::mask_reply {1245183, "mask-reply"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::traceroute {2031615, "traceroute"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::conversion_error {2097151, "conversion-error"};
const Enum::Value Ipv4AclIcmpTypeCodeEnumEnum::mobile_redirect {2162687, "mobile-redirect"};

const Enum::Value Ipv4AclOperatorEnumEnum::equal {1, "equal"};
const Enum::Value Ipv4AclOperatorEnumEnum::greater_than {2, "greater-than"};
const Enum::Value Ipv4AclOperatorEnumEnum::less_than {3, "less-than"};
const Enum::Value Ipv4AclOperatorEnumEnum::not_equal {4, "not-equal"};
const Enum::Value Ipv4AclOperatorEnumEnum::range {5, "range"};

const Enum::Value Ipv4AclIgmpNumberEnum::host_query {17, "host-query"};
const Enum::Value Ipv4AclIgmpNumberEnum::host_report {18, "host-report"};
const Enum::Value Ipv4AclIgmpNumberEnum::dvmrp {19, "dvmrp"};
const Enum::Value Ipv4AclIgmpNumberEnum::pim {20, "pim"};
const Enum::Value Ipv4AclIgmpNumberEnum::trace {21, "trace"};
const Enum::Value Ipv4AclIgmpNumberEnum::v2_report {22, "v2-report"};
const Enum::Value Ipv4AclIgmpNumberEnum::v2_leave {23, "v2-leave"};
const Enum::Value Ipv4AclIgmpNumberEnum::mtrace_response {30, "mtrace-response"};
const Enum::Value Ipv4AclIgmpNumberEnum::mtrace {31, "mtrace"};
const Enum::Value Ipv4AclIgmpNumberEnum::v3_report {34, "v3-report"};

const Enum::Value Ipv4AclStatusEnumEnum::disabled {0, "disabled"};
const Enum::Value Ipv4AclStatusEnumEnum::enabled {1, "enabled"};


}
}

