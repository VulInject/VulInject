static void
iscsi_print_initiator_property(ib_ini_prop_t *ibinitp)
{
char	outbuf[ISCSI_BOOTPROP_BUFLEN] = {0};

if (ibinitp == NULL) {
return;
}

if (ibinitp->ini_name != NULL) {
(void) sprintf(outbuf,
"Initiator Name : %s\n",
ibinitp->ini_name);
iscsi_bootprop_print(CE_CONT, outbuf);
}

if (ibinitp->ini_chap_name != NULL) {
(void) memset(outbuf, 0, ISCSI_BOOTPROP_BUFLEN);
(void) sprintf(outbuf,
"Initiator CHAP Name  : %s\n",
ibinitp->ini_chap_name);

iscsi_bootprop_print(CE_CONT, outbuf);
}
}