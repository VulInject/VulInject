static int vvp_device_init(const struct lu_env *env, struct lu_device *d,
const char *name, struct lu_device *next)
{
struct vvp_device  *vdv;
int rc;

vdv = lu2vvp_dev(d);
vdv->vdv_next = lu2cl_dev(next);

LASSERT(d->ld_site && next->ld_type);
next->ld_site = d->ld_site;
rc = next->ld_type->ldt_ops->ldto_device_init(env, next,
next->ld_type->ldt_name,
NULL);
if (rc == 0) {
lu_device_get(next);
lu_ref_add(&next->ld_reference, "lu-stack", &lu_site_init);
}
return rc;
}