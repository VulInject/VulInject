XkbFile *
XkbParseFile(struct xkb_context *ctx, FILE *file,
const char *file_name, const char *map)
{
bool ok;
XkbFile *xkb_file;
char *string;
size_t size;

ok = map_file(file, &string, &size);
if (!ok) {
log_err(ctx, "Couldn't read XKB file %s: %s\n",
file_name, strerror(errno));
return NULL;
}

xkb_file = XkbParseString(ctx, string, size, file_name, map);
unmap_file(string, size);
return xkb_file;
}