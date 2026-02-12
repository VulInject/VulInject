static int
megaraid_mbox_support_ha(adapter_t *adapter, uint16_t *init_id)
{
mbox_t		*mbox;
uint8_t		raw_mbox[sizeof(mbox_t)];
int		rval;


mbox = (mbox_t *)raw_mbox;

memset((caddr_t)raw_mbox, 0, sizeof(raw_mbox));

mbox->xferaddr = (uint32_t)adapter->ibuf_dma_h;

memset((void *)adapter->ibuf, 0, MBOX_IBUF_SIZE);

raw_mbox[0] = GET_TARGET_ID;


*init_id = 7;
rval =  -1;
if (mbox_post_sync_cmd(adapter, raw_mbox) == 0) {

*init_id = *(uint8_t *)adapter->ibuf;

con_log(CL_ANN, (KERN_INFO
"megaraid: cluster firmware, initiator ID: %d\n",
*init_id));

rval =  0;
}

return rval;
}