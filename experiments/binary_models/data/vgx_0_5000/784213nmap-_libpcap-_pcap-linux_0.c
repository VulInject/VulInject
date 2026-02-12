static int
get_mac80211_phydev(pcap_t *handle, const char *device, char *phydev_path,
size_t phydev_max_pathlen)
{
char *pathstr;
ssize_t bytes_read;


if (asprintf(&pathstr, "/sys/class/net/%s/phy80211", device) == -1) {
snprintf(handle->errbuf, PCAP_ERRBUF_SIZE,
"%s: Can't generate path name string for /sys/class/net device",
device);
return PCAP_ERROR;
}
bytes_read = readlink(pathstr, phydev_path, phydev_max_pathlen);
if (bytes_read == -1) {
if (errno == ENOENT || errno == EINVAL) {

free(pathstr);
return 0;
}
pcap_fmt_errmsg_for_errno(handle->errbuf, PCAP_ERRBUF_SIZE,
errno, "%s: Can't readlink %s", device, pathstr);
free(pathstr);
return PCAP_ERROR;
}
free(pathstr);
phydev_path[bytes_read] = '\0';
return 1;
}