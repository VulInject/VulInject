static int pvr_boot(struct bttv *btv)
{
const struct firmware *fw_entry;
int rc;

rc = request_firmware(&fw_entry, "hcwamc.rbf", &btv->c.pci->dev);
if (rc != 0) {
pr_warn("%d: no altera firmware [via hotplug]\n", btv->c.nr);
return rc;
}
rc = pvr_altera_load(btv, fw_entry->data, fw_entry->size);
pr_info("%d: altera firmware upload %s\n",
btv->c.nr, (rc < 0) ? "failed" : "ok");
release_firmware(fw_entry);
return rc;
}