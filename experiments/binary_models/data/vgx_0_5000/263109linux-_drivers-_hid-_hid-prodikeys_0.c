static ssize_t store_channel(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
{
struct hid_device *hdev = to_hid_device(dev);
struct pk_device *pk = hid_get_drvdata(hdev);

unsigned channel = 0;

if (sscanf(buf, "%u", &channel) > 0 && channel <= PCMIDI_CHANNEL_MAX) {
dbg_hid("pcmidi sysfs write channel=%u\n", channel);
pk->pm->midi_channel = channel;
return strlen(buf);
}
return -EINVAL;
}