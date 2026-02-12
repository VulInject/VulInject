const char *alchemist_set_clock(struct cgpu_info * const device, const char * const option, const char * const setting, char * const replybuf, enum bfg_set_device_replytype * const success)
{
struct alchemist_chip * const chip = device->device_data;
int val = atoi(setting);

if (val < ALCHEMIST_MIN_CLOCK || val > ALCHEMIST_MAX_CLOCK || (val%16)) {
sprintf(replybuf, "invalid clock: '%s' valid range %d-%d and a mutiple of 16",
setting, ALCHEMIST_MIN_CLOCK, ALCHEMIST_MAX_CLOCK);
return replybuf;
} else
chip->freq = val;

return NULL;
}