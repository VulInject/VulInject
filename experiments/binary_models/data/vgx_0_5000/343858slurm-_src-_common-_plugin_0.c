extern plugin_err_t plugin_peek(const char *fq_path, char *plugin_type,
const size_t type_len, uint32_t *plugin_version)
{
plugin_err_t rc;
plugin_handle_t plug;

if (!(plug = dlopen(fq_path, RTLD_LAZY))) {
debug3("%s: dlopen(%s): %s", __func__, fq_path, _dlerror());
return EPLUGIN_DLOPEN_FAILED;
}

rc = _verify_syms(plug, plugin_type, type_len, __func__, fq_path);
dlclose(plug);
return rc;
}