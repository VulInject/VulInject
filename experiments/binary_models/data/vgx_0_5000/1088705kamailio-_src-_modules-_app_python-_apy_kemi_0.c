static void app_python_rpc_reload(rpc_t* rpc, void* ctx)
{
void *vh;

if(_sr_python_load_file.s == NULL && _sr_python_load_file.len<=0) {
LM_WARN("script file path not provided\n");
rpc->fault(ctx, 500, "No script file");
return;
}
if(_sr_python_reload_version == NULL) {
LM_WARN("reload not enabled\n");
rpc->fault(ctx, 500, "Reload not enabled");
return;
}

*_sr_python_reload_version += 1;
LM_INFO("marking for reload Python script file: %.*s (%d)\n",
_sr_python_load_file.len, _sr_python_load_file.s,
*_sr_python_reload_version);

if (rpc->add(ctx, "{", &vh) < 0) {
rpc->fault(ctx, 500, "Server error");
return;
}
rpc->struct_add(vh, "dd",
"old", *_sr_python_reload_version-1,
"new", *_sr_python_reload_version);

return;
}