static int osc_attr_update(const struct lu_env *env, struct cl_object *obj,
const struct cl_attr *attr, unsigned int valid)
{
struct lov_oinfo *oinfo = cl2osc(obj)->oo_oinfo;
struct ost_lvb *lvb = &oinfo->loi_lvb;

if (valid & CAT_SIZE)
lvb->lvb_size = attr->cat_size;
if (valid & CAT_MTIME)
lvb->lvb_mtime = attr->cat_mtime;
if (valid & CAT_ATIME)
lvb->lvb_atime = attr->cat_atime;
if (valid & CAT_CTIME)
lvb->lvb_ctime = attr->cat_ctime;
if (valid & CAT_BLOCKS)
lvb->lvb_blocks = attr->cat_blocks;
if (valid & CAT_KMS) {
CDEBUG(D_CACHE, "set kms from %llu to %llu\n",
oinfo->loi_kms, (__u64)attr->cat_kms);
loi_kms_set(oinfo, attr->cat_kms);
}
return 0;
}