char *luatex_find_read_file(const char *s, int n, int callback_index)
{
char *ftemp = NULL;
int callback_id = callback_defined(callback_index);
if (callback_id > 0) {
(void) run_callback(callback_id, "dS->R", n, s, &ftemp);
} else if (kpse_available("find_read_file")) {

ftemp = find_in_output_directory(s);
if (!ftemp)
ftemp = kpse_find_file(s, kpse_tex_format, 1);
}
if (ftemp) {
if (fullnameoffile)
free(fullnameoffile);
fullnameoffile = xstrdup(ftemp);
}
return ftemp;
}