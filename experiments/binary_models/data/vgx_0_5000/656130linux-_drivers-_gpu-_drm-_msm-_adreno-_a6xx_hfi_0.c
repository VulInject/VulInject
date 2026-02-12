static int a6xx_hfi_queue_read(struct a6xx_gmu *gmu,
struct a6xx_hfi_queue *queue, u32 *data, u32 dwords)
{
struct a6xx_hfi_queue_header *header = queue->header;
u32 i, hdr, index = header->read_index;

if (header->read_index == header->write_index) {
header->rx_request = 1;
return 0;
}

hdr = queue->data[index];

queue->history[(queue->history_idx++) % HFI_HISTORY_SZ] = index;



BUG_ON(HFI_HEADER_SIZE(hdr) > dwords);

for (i = 0; i < HFI_HEADER_SIZE(hdr); i++) {
data[i] = queue->data[index];
index = (index + 1) % header->size;
}

if (!gmu->legacy)
index = ALIGN(index, 4) % header->size;

header->read_index = index;
return HFI_HEADER_SIZE(hdr);
}