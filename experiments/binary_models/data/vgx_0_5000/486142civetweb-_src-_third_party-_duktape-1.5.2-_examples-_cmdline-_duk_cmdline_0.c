static int handle_file(duk_context *ctx, const char *filename, const char *bytecode_filename) {
FILE *f = NULL;
int retval;
char fnbuf[256];


duk_push_string(ctx, "DebuggerHandleFile");
duk_push_string(ctx, filename);
duk_debugger_notify(ctx, 2);

if (filename[0] == '/') {
snprintf(fnbuf, sizeof(fnbuf), "%s", filename);
} else {
snprintf(fnbuf, sizeof(fnbuf), "/working/%s", filename);
}
snprintf(fnbuf, sizeof(fnbuf), "%s", filename);
fnbuf[sizeof(fnbuf) - 1] = (char) 0;

f = fopen(fnbuf, "rb");
if (!f) {
fprintf(stderr, "failed to open source file: %s\n", filename);
fflush(stderr);
goto error;
}

retval = handle_fh(ctx, f, filename, bytecode_filename);

fclose(f);
return retval;

error:
return -1;
}