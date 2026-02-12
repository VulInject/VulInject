static int
megaraid_mbox_get_max_sg(adapter_t *adapter)
{
mbox_t		*mbox;
uint8_t		raw_mbox[sizeof(mbox_t)];
int		nsg;


mbox = (mbox_t *)raw_mbox;

memset((caddr_t)raw_mbox, 0, sizeof(mbox_t));

mbox->xferaddr = (uint32_t)adapter->ibuf_dma_h;

memset((void *)adapter->ibuf, 0, MBOX_IBUF_SIZE);

raw_mbox[0] = MAIN_MISC_OPCODE;
raw_mbox[2] = GET_MAX_SG_SUPPORT;


if (mbox_post_sync_cmd(adapter, raw_mbox) == 0) {
nsg =  *(uint8_t *)adapter->ibuf;
}
else {
nsg =  MBOX_DEFAULT_SG_SIZE;
}

if (nsg > MBOX_MAX_SG_SIZE) nsg = MBOX_MAX_SG_SIZE;

return nsg;
}