static void dcc_chat_connect(CHAT_DCC_REC *dcc)
{
g_return_if_fail(IS_DCC_CHAT(dcc));

if (dcc->addrstr[0] == '\0' ||
dcc->starttime != 0 || dcc->handle != NULL) {

return;
}

dcc->handle = dcc_connect_ip(&dcc->addr, dcc->port);
if (dcc->handle != NULL) {
dcc->tagconn = i_input_add(dcc->handle, I_INPUT_WRITE | I_INPUT_READ,
(GInputFunction) sig_chat_connected, dcc);
} else {

signal_emit("dcc error connect", 1, dcc);
dcc_destroy(DCC(dcc));
}
}