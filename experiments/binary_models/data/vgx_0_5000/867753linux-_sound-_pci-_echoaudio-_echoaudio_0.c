module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " ECHOCARD_NAME " soundcard.");

static const unsigned int channels_list[10] = {1, 2, 4, 6, 8, 10, 12, 14, 16, 999999};
static const DECLARE_TLV_DB_SCALE(db_scale_output_gain, -12800, 100, 1);



static int get_firmware(const struct firmware **fw_entry,
struct echoaudio *chip, const short fw_index)
{
int err;
char name[30];

if (chip->fw_cache[fw_index]) {
dev_dbg(chip->card->dev,
"firmware requested: %s is cached\n",
card_fw[fw_index].data);
*fw_entry = chip->fw_cache[fw_index];
return 0;
}

dev_dbg(chip->card->dev,
"firmware requested: %s\n", card_fw[fw_index].data);
snprintf(name, sizeof(name), "ea/%s", card_fw[fw_index].data);
err = request_firmware(fw_entry, name, &chip->pci->dev);
if (err < 0)
dev_err(chip->card->dev,
"get_firmware(): Firmware not available (%d)\n", err);
else
chip->fw_cache[fw_index] = *fw_entry;
return err;
}