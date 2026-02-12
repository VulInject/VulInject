static int condition_test_firmware_devicetree_compatible(const char *dtcarg) {
int r;
_cleanup_free_ char *dtcompat = NULL;
_cleanup_strv_free_ char **dtcompatlist = NULL;
size_t size;

r = read_full_virtual_file(DTCOMPAT_FILE, &dtcompat, &size);
if (r < 0) {

if (r != -ENOENT)
log_debug_errno(r, "Failed to open() '%s', assuming machine is incompatible: %m", DTCOMPAT_FILE);
return false;
}


if (size == 0) {
log_debug("%s has zero length, assuming machine is incompatible", DTCOMPAT_FILE);
return false;
}


if (dtcompat[size - 1] != '\0') {
log_debug("%s is in an unknown format, assuming machine is incompatible", DTCOMPAT_FILE);
return false;
}

dtcompatlist = strv_parse_nulstr(dtcompat, size);
if (!dtcompatlist)
return -ENOMEM;

return strv_contains(dtcompatlist, dtcarg);
}