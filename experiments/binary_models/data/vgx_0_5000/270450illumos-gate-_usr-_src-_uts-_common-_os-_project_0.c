static kstat_t *
project_kstat_create_common(kproject_t *pj, char *name, char *zonename,
int (*updatefunc) (kstat_t *, int))
{
kstat_t *ksp;
kproject_kstat_t *kpk;

ksp = rctl_kstat_create_project(pj, name, KSTAT_TYPE_NAMED,
sizeof (kproject_kstat_t) / sizeof (kstat_named_t),
KSTAT_FLAG_VIRTUAL);

if (ksp == NULL)
return (NULL);

kpk = ksp->ks_data = kmem_alloc(sizeof (kproject_kstat_t), KM_SLEEP);
ksp->ks_data_size += strlen(zonename) + 1;
kstat_named_init(&kpk->kpk_zonename, "zonename", KSTAT_DATA_STRING);
kstat_named_setstr(&kpk->kpk_zonename, zonename);
kstat_named_init(&kpk->kpk_usage, "usage", KSTAT_DATA_UINT64);
kstat_named_init(&kpk->kpk_value, "value", KSTAT_DATA_UINT64);
ksp->ks_update = updatefunc;
ksp->ks_private = pj;
kstat_install(ksp);
return (ksp);
}