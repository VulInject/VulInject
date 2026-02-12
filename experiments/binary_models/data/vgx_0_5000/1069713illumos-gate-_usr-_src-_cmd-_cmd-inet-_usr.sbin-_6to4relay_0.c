static void usage(void);

static dladm_handle_t	handle;

static boolean_t	eflag = B_FALSE;
static boolean_t	dflag = B_FALSE;
static boolean_t	aflag = B_FALSE;



static void
printkstatus(void)
{
struct in_addr	rr_addr;
char		buf[INET6_ADDRSTRLEN];
char		errstr[DLADM_STRSIZE];
dladm_status_t	status;

status = dladm_iptun_get6to4relay(handle, &rr_addr);
if (status != DLADM_STATUS_OK) {
(void) fprintf(stderr, gettext("6to4relay: unable to get "
"6to4 relay status: %s\n"),
dladm_status2str(status, errstr));
return;
}
(void) printf("6to4relay: ");
if (rr_addr.s_addr == INADDR_ANY) {
(void) printf(gettext("6to4 Relay Router communication "
"support is disabled.\n"));
} else {
(void) printf(gettext("6to4 Relay Router communication "
"support is enabled.\n"));
(void) printf(gettext("IPv4 destination address of Relay "
"Router = "));
(void) printf("%s\n",
inet_ntop(AF_INET, &rr_addr, buf, sizeof (buf)));
}
}