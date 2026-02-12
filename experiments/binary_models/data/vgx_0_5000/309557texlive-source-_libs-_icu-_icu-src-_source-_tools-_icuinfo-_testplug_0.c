DECLARE_PLUGIN(myPluginFailQuery);
DECLARE_PLUGIN(myPluginFailToken);
DECLARE_PLUGIN(myPluginBad);
DECLARE_PLUGIN(myPluginHigh);
DECLARE_PLUGIN(debugMemoryPlugin);



U_CAPI
UPlugTokenReturn U_EXPORT2 myPlugin (
UPlugData *data,
UPlugReason reason,
UErrorCode *status) {

fprintf(stderr,"MyPlugin: data=%p, reason=%s, status=%s\n", (void*)data, udbg_enumName(UDBG_UPlugReason,(int32_t)reason), u_errorName(*status));

if(reason==UPLUG_REASON_QUERY) {
uplug_setPlugName(data, "Just a Test High-Level Plugin"); 
uplug_setPlugLevel(data, UPLUG_LEVEL_HIGH); 
}

return UPLUG_TOKEN; 
}