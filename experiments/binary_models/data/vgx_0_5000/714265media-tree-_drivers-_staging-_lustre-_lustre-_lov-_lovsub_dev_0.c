static int lovsub_device_init(const struct lu_env *env, struct lu_device *d,
const char *name, struct lu_device *next)
{
struct lovsub_device  *lsd = lu2lovsub_dev(d);
struct lu_device_type *ldt;
int rc;

next->ld_site = d->ld_site;
ldt = next->ld_type;
rc = ldt->ldt_ops->ldto_device_init(env, next, ldt->ldt_name, NULL);
if (rc) {
next->ld_site = NULL;
return rc;
}

lu_device_get(next);
lu_ref_add(&next->ld_reference, "lu-stack", &lu_site_init);
lsd->acid_next = lu2cl_dev(next);
return rc;
}