struct vmem_altmap *nvdimm_setup_pfn(struct nd_pfn *nd_pfn,
struct resource *res, struct vmem_altmap *altmap)
{
int rc;

if (!nd_pfn->uuid || !nd_pfn->ndns)
return ERR_PTR(-ENODEV);

rc = nd_pfn_init(nd_pfn);
if (rc)
return ERR_PTR(rc);


return __nvdimm_setup_pfn(nd_pfn, res, altmap);
}