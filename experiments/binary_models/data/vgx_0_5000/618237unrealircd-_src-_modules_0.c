int LoadPersistentIntX(ModuleInfo *modinfo, const char *varshortname, int *var)
{
ModDataInfo *m;
const char *fullname = mod_var_name(modinfo, varshortname);

m = findmoddata_byname(fullname, MODDATATYPE_LOCAL_VARIABLE);
if (m)
{
*var = moddata_local_variable(m).i;
return 1;
} else {
ModDataInfo mreq;
memset(&mreq, 0, sizeof(mreq));
mreq.type = MODDATATYPE_LOCAL_VARIABLE;
mreq.name = strdup(fullname);
mreq.free = NULL;
m = ModDataAdd(modinfo->handle, mreq);
moddata_local_variable(m).i = 0;
safe_free(mreq.name);
return 0;
}
}