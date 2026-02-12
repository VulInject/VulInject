MODULE_DESCRIPTION("M2Tech hiFace USB-SPDIF audio driver");
MODULE_LICENSE("GPL v2");

static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX; 
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR; 
static bool enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP; 


module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");

static DEFINE_MUTEX(register_mutex);

struct hiface_vendor_quirk {
const char *device_name;
u8 extra_freq;
};