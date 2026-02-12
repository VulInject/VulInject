static int
pcie_hp_register_port(dev_info_t *dip, dev_info_t *pdip, char *cn_name)
{
ddi_hp_cn_info_t	*cn_info;
int			ret;

ASSERT((dip == NULL) != (cn_name == NULL));
cn_info = kmem_zalloc(sizeof (ddi_hp_cn_info_t), KM_SLEEP);
if (dip != NULL)
ret = pcie_hp_create_port_name_num(dip, cn_info);
else
ret = pcie_hp_setup_port_name_num(pdip, cn_name, cn_info);

if (ret != DDI_SUCCESS) {
kmem_free(cn_info, sizeof (ddi_hp_cn_info_t));
return (ret);
}

cn_info->cn_child = dip;
cn_info->cn_type = DDI_HP_CN_TYPE_VIRTUAL_PORT;
cn_info->cn_type_str = DDI_HP_CN_TYPE_STR_PORT;

ret = ndi_hp_register(pdip, cn_info);

kmem_free(cn_info->cn_name, strlen(cn_info->cn_name) + 1);
kmem_free(cn_info, sizeof (ddi_hp_cn_info_t));

return (ndi2ddi(ret));
}