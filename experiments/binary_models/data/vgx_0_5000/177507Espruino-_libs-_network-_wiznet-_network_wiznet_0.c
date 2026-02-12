int net_wiznet_createsocket(JsNetwork *net, SocketType socketType, uint32_t host, unsigned short port, JsVar *options) {
int sckt = -1;
if (host!=0 || (socketType & ST_UDP)) { 

uint16_t srcPort = (uint16_t)((rand() & 32767) + 2000);

int res = 0;
if (socketType & ST_UDP) { 
if (port) srcPort = port;
sckt = socket(net_wiznet_getFreeSocket(), Sn_MR_UDP, srcPort, 0); 
if (sckt<0) return sckt; 
} else { 
sckt = socket(net_wiznet_getFreeSocket(), Sn_MR_TCP, srcPort, 0); 
if (sckt<0) return sckt; 
res = connect((uint8_t)sckt,(uint8_t*)&host, port);
}


uint8_t ctl = SOCK_IO_NONBLOCK;
ctlsocket((uint8_t)sckt, CS_SET_IOMODE, &ctl);

if (res == SOCKET_ERROR) {
jsError("Connect failed (err %d)\n", res );
}
} else { 
sckt = socket(net_wiznet_getFreeSocket(), Sn_MR_TCP, port, SF_IO_NONBLOCK);
listen((uint8_t)sckt);
}
wiznetSocketPorts[sckt&7] = port;

return sckt;
}