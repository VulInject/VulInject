static int be_get_sriov_config(struct be_adapter *adapter)
{
struct be_resources res = {0};
int max_vfs, old_vfs;

be_cmd_get_profile_config(adapter, &res, NULL, ACTIVE_PROFILE_TYPE,
RESOURCE_LIMITS, 0);


if (BE3_chip(adapter) && !res.max_vfs) {
max_vfs = pci_sriov_get_totalvfs(adapter->pdev);
res.max_vfs = max_vfs > 0 ? min(MAX_VFS, max_vfs) : 0;
}

adapter->pool_res = res;


old_vfs = pci_num_vf(adapter->pdev);
if (old_vfs) {
dev_info(&adapter->pdev->dev, "%d VFs are already enabled\n",
old_vfs);

adapter->pool_res.max_vfs =
pci_sriov_get_totalvfs(adapter->pdev);
adapter->num_vfs = old_vfs;
}

if (skyhawk_chip(adapter) && be_max_vfs(adapter) && !old_vfs) {
be_calculate_pf_pool_rss_tables(adapter);
dev_info(&adapter->pdev->dev,
"RSS can be enabled for all VFs if num_vfs <= %d\n",
be_max_pf_pool_rss_tables(adapter));
}
return 0;
}