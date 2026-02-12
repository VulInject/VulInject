static void
xp_set_pls(const char *path, uint32_t port, const char *state)
{
int fd, i;
xhci_ioctl_setpls_t xis;

fd = open(path, O_RDWR);
if (fd < 0) {
err(EXIT_FAILURE, "failed to open %s", path);
}

xis.xis_port = port;
for (i = 0; xp_pls_strings[i] != NULL; i++) {
if (strcasecmp(state, xp_pls_strings[i]) == 0)
break;
}

if (xp_pls_strings[i] == NULL) {
errx(EXIT_FAILURE, "unknown state string: %s\n", state);
}

xis.xis_pls = i;
(void) printf("setting port %d with pls %d\n", port, xis.xis_pls);

if (ioctl(fd, XHCI_IOCTL_SETPLS, &xis) != 0)
err(EXIT_FAILURE, "failed to set port status");

(void) close(fd);
}