static int cl_copy_fw_skl(struct snd_sof_dev *sdev,
struct snd_dma_buffer *dmab)

{
const struct firmware *fw =  sdev->basefw.fw;
struct firmware stripped_firmware;
unsigned int bufsize = HDA_SKL_CLDMA_MAX_BUFFER_SIZE;
int ret;

stripped_firmware.data = fw->data + sdev->basefw.payload_offset;
stripped_firmware.size = fw->size - sdev->basefw.payload_offset;

dev_dbg(sdev->dev, "firmware size: %#zx buffer size %#x\n", fw->size, bufsize);

ret = cl_skl_cldma_copy_to_buf(sdev, dmab, stripped_firmware.data,
stripped_firmware.size, bufsize);
if (ret < 0)
dev_err(sdev->dev, "%s: fw copy failed %d\n", __func__, ret);

return ret;
}