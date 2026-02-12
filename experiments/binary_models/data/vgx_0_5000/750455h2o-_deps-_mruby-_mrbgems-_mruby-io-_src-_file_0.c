static mrb_value
mrb_file_dirname(mrb_state *mrb, mrb_value klass)
{
char dname[_MAX_DIR], vname[_MAX_DRIVE];
char buffer[_MAX_DRIVE + _MAX_DIR];
const char *utf8_path;
char *path;
size_t ridx;
mrb_get_args(mrb, "z", &utf8_path);
path = mrb_locale_from_utf8(utf8_path, -1);
_splitpath(path, vname, dname, NULL, NULL);
snprintf(buffer, _MAX_DRIVE + _MAX_DIR, "%s%s", vname, dname);
mrb_locale_free(path);
ridx = strlen(buffer);
if (ridx == 0) {
strncpy(buffer, ".", 2);  
} else if (ridx > 1) {
ridx--;
while (ridx > 0 && (buffer[ridx] == '/' || buffer[ridx] == '\\')) {
buffer[ridx] = '\0';  
ridx--;
}
}
return mrb_str_new_cstr(mrb, buffer);
char *dname, *path;
mrb_value s;
mrb_get_args(mrb, "S", &s);
path = mrb_locale_from_utf8(mrb_str_to_cstr(mrb, s), -1);

if ((dname = dirname(path)) == NULL) {
mrb_locale_free(path);
mrb_sys_fail(mrb, "dirname");
}
mrb_locale_free(path);
return mrb_str_new_cstr(mrb, dname);
}