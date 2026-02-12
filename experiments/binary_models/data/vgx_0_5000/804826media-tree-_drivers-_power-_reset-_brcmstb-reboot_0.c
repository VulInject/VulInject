static int brcmstb_restart_handler(struct notifier_block *this,
unsigned long mode, void *cmd)
{
int rc;
u32 tmp;

rc = regmap_write(regmap, rst_src_en, reset_masks->rst_src_en_mask);
if (rc) {
pr_err("failed to write rst_src_en (%d)\n", rc);
return NOTIFY_DONE;
}

rc = regmap_read(regmap, rst_src_en, &tmp);
if (rc) {
pr_err("failed to read rst_src_en (%d)\n", rc);
return NOTIFY_DONE;
}

rc = regmap_write(regmap, sw_mstr_rst, reset_masks->sw_mstr_rst_mask);
if (rc) {
pr_err("failed to write sw_mstr_rst (%d)\n", rc);
return NOTIFY_DONE;
}

rc = regmap_read(regmap, sw_mstr_rst, &tmp);
if (rc) {
pr_err("failed to read sw_mstr_rst (%d)\n", rc);
return NOTIFY_DONE;
}

while (1)
;

return NOTIFY_DONE;
}

static struct notifier_block brcmstb_restart_nb = {
.notifier_call = brcmstb_restart_handler,
.priority = 128,
};