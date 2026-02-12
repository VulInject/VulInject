
START_TEST(decode_tv)
{
pbs_attribute pattr;
char    name[32];
char    rescn[32];
char    val[32];
char    EMsg[48];
int     perm = 0;
int     rc;

memset(&pattr, 0, sizeof(pbs_attribute));
strcpy(name, "freddy");
strcpy(rescn, "someresc");
strcpy(val, "33.3");

rc = decode_tv(&pattr, name, rescn, val, perm);
sprintf(EMsg, "decode_tv unexpectedly failed: %d", rc);
fail_unless(rc == PBSE_NONE, EMsg);

}
END_TEST