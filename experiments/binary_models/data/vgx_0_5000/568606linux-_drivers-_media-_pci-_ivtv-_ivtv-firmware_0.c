static int load_fw_direct(const char *fn, volatile u8 __iomem *mem, struct ivtv *itv, long size)
{
const struct firmware *fw = NULL;
int retries = 3;

retry:
if (retries && request_firmware(&fw, fn, &itv->pdev->dev) == 0) {
int i;
volatile u32 __iomem *dst = (volatile u32 __iomem *)mem;
const u32 *src = (const u32 *)fw->data;

if (fw->size != size) {

IVTV_INFO("Retry: file loaded was not %s (expected size %ld, got %zu)\n", fn, size, fw->size);
release_firmware(fw);
retries--;
goto retry;
}
for (i = 0; i < fw->size; i += 4) {

__raw_writel(*src, dst);
dst++;
src++;
}
IVTV_INFO("Loaded %s firmware (%zu bytes)\n", fn, fw->size);
release_firmware(fw);
return size;
}
IVTV_ERR("Unable to open firmware %s (must be %ld bytes)\n", fn, size);
IVTV_ERR("Did you put the firmware in the hotplug firmware directory?\n");
return -ENOMEM;
}