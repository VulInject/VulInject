flush (STATE_MACH_T *this, char* reason) 
{
register PORT_T* port = this->owner.port;
Bool bret;

if (port->operEdge) return True;
if (this->debug) {
stp_trace("%s (%s, %s, %s, '%s')",
"flush", port->port_name, port->owner->name,
LT_FLASH_ONLY_THE_PORT == type ? "this port" : "other ports",
reason);
}

bret = STP_OUT_flush_lt (port->port_index, port->owner->vlan_id,
LT_FLASH_ONLY_THE_PORT, reason);
}