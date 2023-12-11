// AUTOGENERATED. DO NOT EDIT.
// RUN `make` TO UPDATE.

#include <bb/blitz/module.h>
#include <bb/sockets/sockets.h>

BBMODULE_LINK( sockets ){
	rtSym( "$DottedIP%IP","bbDottedIP",bbDottedIP );
	rtSym( "%CountHostIPs$host_name","bbCountHostIPs",bbCountHostIPs );
	rtSym( "%HostIP%host_index","bbHostIP",bbHostIP );
	rtSym( "%CountNetInterfaces","bbCountNetInterfaces",bbCountNetInterfaces );
	rtSym( "$NetInterfaceName%iface","bbNetInterfaceName",bbNetInterfaceName );
	rtSym( "$NetInterfaceIP%iface","bbNetInterfaceIP",bbNetInterfaceIP );
	rtSym( "%CreateUDPStream%port=0","bbCreateUDPStream",bbCreateUDPStream );
	rtSym( "CloseUDPStream%udp_stream","bbCloseUDPStream",bbCloseUDPStream );
	rtSym( "SendUDPMsg%udp_stream%dest_ip%dest_port=0","bbSendUDPMsg",bbSendUDPMsg );
	rtSym( "%RecvUDPMsg%udp_stream","bbRecvUDPMsg",bbRecvUDPMsg );
	rtSym( "%UDPStreamIP%udp_stream","bbUDPStreamIP",bbUDPStreamIP );
	rtSym( "%UDPStreamPort%udp_stream","bbUDPStreamPort",bbUDPStreamPort );
	rtSym( "%UDPMsgIP%udp_stream","bbUDPMsgIP",bbUDPMsgIP );
	rtSym( "%UDPMsgPort%udp_stream","bbUDPMsgPort",bbUDPMsgPort );
	rtSym( "UDPTimeouts%recv_timeout","bbUDPTimeouts",bbUDPTimeouts );
	rtSym( "%OpenTCPStream$server%server_port%local_port=0","bbOpenTCPStream",bbOpenTCPStream );
	rtSym( "CloseTCPStream%tcp_stream","bbCloseTCPStream",bbCloseTCPStream );
	rtSym( "%CreateTCPServer%port","bbCreateTCPServer",bbCreateTCPServer );
	rtSym( "CloseTCPServer%tcp_server","bbCloseTCPServer",bbCloseTCPServer );
	rtSym( "%AcceptTCPStream%tcp_server","bbAcceptTCPStream",bbAcceptTCPStream );
	rtSym( "%TCPStreamIP%tcp_stream","bbTCPStreamIP",bbTCPStreamIP );
	rtSym( "%TCPStreamPort%tcp_stream","bbTCPStreamPort",bbTCPStreamPort );
	rtSym( "TCPTimeouts%read_millis%accept_millis","bbTCPTimeouts",bbTCPTimeouts );
}
