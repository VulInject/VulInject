static int ipw_fw_dma_add_command_block(struct ipw_priv *priv,
u32 src_address,
u32 dest_address,
u32 length,
int interrupt_enabled, int is_last)
{

u32 control = CB_VALID | CB_SRC_LE | CB_DEST_LE | CB_SRC_AUTOINC |
CB_SRC_IO_GATED | CB_DEST_AUTOINC | CB_SRC_SIZE_LONG |
CB_DEST_SIZE_LONG;
struct command_block *cb;
u32 last_cb_element = 0;

IPW_DEBUG_FW_INFO("src_address=0x%x dest_address=0x%x length=0x%x\n",
src_address, dest_address, length);

if (priv->sram_desc.last_cb_index >= CB_NUMBER_OF_ELEMENTS_SMALL)
return -1;

last_cb_element = priv->sram_desc.last_cb_index;
cb = &priv->sram_desc.cb_list[last_cb_element];
priv->sram_desc.last_cb_index++;


if (interrupt_enabled)
control |= CB_INT_ENABLED;

if (is_last)
control |= CB_LAST_VALID;

control |= length;


cb->status = control ^ src_address ^ dest_address;


cb->dest_addr = dest_address;
cb->source_addr = src_address;


cb->control = control;

return 0;
}