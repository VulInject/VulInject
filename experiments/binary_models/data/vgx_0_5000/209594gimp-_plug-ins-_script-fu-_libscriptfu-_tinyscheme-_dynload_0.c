static HMODULE dl_attach(const char *module) {
wchar_t *module_utf16 = g_utf8_to_utf16 (module, -1, NULL, NULL, NULL);
HMODULE  dll          = NULL;

if (!module_utf16)
return NULL;

dll = LoadLibraryW (module_utf16);
if (!dll)
display_w32_error_msg (module);

free (module_utf16);
return dll;
}