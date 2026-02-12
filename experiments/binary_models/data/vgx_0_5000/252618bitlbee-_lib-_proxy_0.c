static gboolean s5_canread(gpointer data, gint source, b_input_condition cond)
{
unsigned char buf[512];
struct PHB *phb = data;

b_event_remove(phb->inpa);

if (read(source, buf, 2) < 2) {
return phb_free(phb, FALSE);
}

if ((buf[0] != 0x05) || (buf[1] == 0xff)) {
return phb_free(phb, FALSE);
}

if (buf[1] == 0x02) {
unsigned int i = strlen(proxyuser), j = strlen(proxypass);
buf[0] = 0x01;  
buf[1] = i;
memcpy(buf + 2, proxyuser, i);
buf[2 + i] = j;
memcpy(buf + 2 + i + 1, proxypass, j);
if (write(source, buf, 3 + i + j) < 3 + i + j) {
return phb_free(phb, FALSE);
}

phb->inpa = b_input_add(source, B_EV_IO_READ, s5_readauth, phb);
} else {
s5_sendconnect(phb, source);
}

return FALSE;
}