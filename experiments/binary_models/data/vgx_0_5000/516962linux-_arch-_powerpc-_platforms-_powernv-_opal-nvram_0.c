static ssize_t opal_nvram_write(char *buf, size_t count, loff_t *index)
{
s64 rc = OPAL_BUSY;
int off;

if (*index >= nvram_size)
return 0;
off = *index;
if ((off + count) > nvram_size)
count = nvram_size - off;

while (rc == OPAL_BUSY || rc == OPAL_BUSY_EVENT) {
rc = opal_write_nvram(__pa(buf), count, off);
if (rc == OPAL_BUSY_EVENT) {
if (in_interrupt() || irqs_disabled())
mdelay(OPAL_BUSY_DELAY_MS);
else
msleep(OPAL_BUSY_DELAY_MS);
opal_poll_events(NULL);
} else if (rc == OPAL_BUSY) {
if (in_interrupt() || irqs_disabled())
mdelay(OPAL_BUSY_DELAY_MS);
else
msleep(OPAL_BUSY_DELAY_MS);
}
}

if (rc)
return -EIO;

*index += count;
return count;
}