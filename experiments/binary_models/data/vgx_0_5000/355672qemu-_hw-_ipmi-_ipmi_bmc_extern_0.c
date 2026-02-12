static void handle_msg(IPMIBmcExtern *ibe)
{
IPMIInterfaceClass *k = IPMI_INTERFACE_GET_CLASS(ibe->parent.intf);

if (ibe->in_escape) {
ipmi_debug("msg escape not ended\n");
return;
}
if (ibe->inpos < 5) {
ipmi_debug("msg too short\n");
return;
}
if (ibe->in_too_many) {
ibe->inbuf[3] = IPMI_CC_REQUEST_DATA_TRUNCATED;
ibe->inpos = 4;
} else if (ipmb_checksum(ibe->inbuf, ibe->inpos, 0) != 0) {
ipmi_debug("msg checksum failure\n");
return;
} else {
ibe->inpos--; 
}

timer_del(ibe->extern_timer);
ibe->waiting_rsp = false;
k->handle_rsp(ibe->parent.intf, ibe->inbuf[0], ibe->inbuf + 1, ibe->inpos - 1);
}