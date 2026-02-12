static int pscsi_attach_hba(struct se_hba *hba, u32 host_id)
{
struct pscsi_hba_virt *phv;

phv = kzalloc(sizeof(struct pscsi_hba_virt), GFP_KERNEL);
if (!phv) {
pr_err("Unable to allocate struct pscsi_hba_virt\n");
return -ENOMEM;
}
phv->phv_host_id = host_id;
phv->phv_mode = PHV_VIRTUAL_HOST_ID;

hba->hba_ptr = phv;

pr_debug("CORE_HBA[%d] - TCM SCSI HBA Driver %s on"
" Generic Target Core Stack %s\n", hba->hba_id,
PSCSI_VERSION, TARGET_CORE_VERSION);
pr_debug("CORE_HBA[%d] - Attached SCSI HBA to Generic\n",
hba->hba_id);

return 0;
}