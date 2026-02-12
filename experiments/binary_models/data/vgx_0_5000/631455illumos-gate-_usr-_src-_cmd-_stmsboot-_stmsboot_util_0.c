static void
get_devid(di_node_t node, ddi_devid_t *thisdevid)
{
int fd;
char realpath[MAXPATHLEN];
char *openpath = di_devfs_path(node);

errno = 0;
bzero(realpath, MAXPATHLEN);
if (strstr(openpath, "/devices") == NULL) {
(void) snprintf(realpath, MAXPATHLEN,
"/devices%s:c,raw", openpath);
fd = open(realpath, O_RDONLY|O_NDELAY);
} else {
fd = open(openpath, O_RDONLY|O_NDELAY);
}

if (fd < 0) {
logmsg(MSG_INFO, "Unable to open path %s: %s\n",
openpath, strerror(errno));
return;
}

if (devid_get(fd, thisdevid) != 0) {
logmsg(MSG_INFO,
"'%s' node (%s) without a devid registered\n",
di_driver_name(node), di_devfs_path(node));
}
(void) close(fd);
}