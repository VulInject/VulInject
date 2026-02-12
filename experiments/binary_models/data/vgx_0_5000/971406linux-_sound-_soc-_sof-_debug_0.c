static void snd_sof_dbg_print_fw_state(struct snd_sof_dev *sdev, const char *level)
{
int i;

for (i = 0; i < ARRAY_SIZE(fw_state_dbg); i++) {
if (sdev->fw_state == fw_state_dbg[i].state) {
dev_printk(level, sdev->dev, "fw_state: %s (%d)\n",
fw_state_dbg[i].name, i);
return;
}
}

dev_printk(level, sdev->dev, "fw_state: UNKNOWN (%d)\n", sdev->fw_state);
}