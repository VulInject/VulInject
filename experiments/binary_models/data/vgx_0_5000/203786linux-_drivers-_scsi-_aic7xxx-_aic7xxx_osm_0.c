static int
ahc_linux_map_seg(struct ahc_softc *ahc, struct scb *scb,
struct ahc_dma_seg *sg, dma_addr_t addr, bus_size_t len)
{
int	 consumed;

if ((scb->sg_count + 1) > AHC_NSEG)
panic("Too few segs for dma mapping.  "
"Increase AHC_NSEG\n");

consumed = 1;
sg->addr = ahc_htole32(addr & 0xFFFFFFFF);
scb->platform_data->xfer_len += len;

if (sizeof(dma_addr_t) > 4
&& (ahc->flags & AHC_39BIT_ADDRESSING) != 0)
len |= (addr >> 8) & AHC_SG_HIGH_ADDR_MASK;

sg->len = ahc_htole32(len);
return (consumed);
}