isc_result_t
isc_file_splitpath(isc_mem_t *mctx, char *path, char **dirnam, char **basenam)
{
char *dir, *file, *slash;

REQUIRE(path != NULL);

slash = strrchr(path, '/');

if (slash == path) {
file = ++slash;
dir = isc_mem_strdup(mctx, "/");
} else if (slash != NULL) {
file = ++slash;
dir = isc_mem_allocate(mctx, slash - path);
if (dir != NULL)
strlcpy(dir, path, slash - path);
} else {
file = path;
dir = isc_mem_strdup(mctx, ".");
}

if (dir == NULL)
return (ISC_R_NOMEMORY);

if (*file == '\0') {
isc_mem_free(mctx, dir);
return (ISC_R_INVALIDFILE);
}

*dirnam = dir;
*basenam = file;

return (ISC_R_SUCCESS);
}