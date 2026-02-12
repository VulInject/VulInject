static int ich_spi_exec_op_swseq(struct spi_slave *slave,
const struct spi_mem_op *op)
{
struct udevice *bus = dev_get_parent(slave->dev);
struct ich_spi_plat *plat = dev_get_plat(bus);
struct ich_spi_priv *ctlr = dev_get_priv(bus);
uint16_t control;
int16_t opcode_index;
int with_address;
int status;
struct spi_trans *trans = &ctlr->trans;
bool lock = spi_lock_status(plat, ctlr->base);
int ret = 0;

trans->in = NULL;
trans->out = NULL;
trans->type = 0xFF;

if (op->data.nbytes) {
if (op->data.dir == SPI_MEM_DATA_IN) {
trans->in = op->data.buf.in;
trans->bytesin = op->data.nbytes;
} else {
trans->out = op->data.buf.out;
trans->bytesout = op->data.nbytes;
}
}

if (trans->opcode != op->cmd.opcode)
trans->opcode = op->cmd.opcode;

if (lock && trans->opcode == SPI_OPCODE_WRDIS)
return 0;

if (trans->opcode == SPI_OPCODE_WREN) {

if (!lock)
ich_writew(ctlr, trans->opcode, ctlr->preop);
return 0;
}

ret = ich_status_poll(ctlr, SPIS_SCIP, 0);
if (ret < 0)
return ret;

if (plat->ich_version == ICHV_7)
ich_writew(ctlr, SPIS_CDS | SPIS_FCERR, ctlr->status);
else
ich_writeb(ctlr, SPIS_CDS | SPIS_FCERR, ctlr->status);


if (op->data.dir == SPI_MEM_DATA_OUT) {
if (op->addr.nbytes)
trans->type = SPI_OPCODE_TYPE_WRITE_WITH_ADDRESS;
else
trans->type = SPI_OPCODE_TYPE_WRITE_NO_ADDRESS;
} else {
if (op->addr.nbytes)
trans->type = SPI_OPCODE_TYPE_READ_WITH_ADDRESS;
else
trans->type = SPI_OPCODE_TYPE_READ_NO_ADDRESS;
}

if (op->addr.nbytes && !op->data.buswidth)
trans->type = SPI_OPCODE_TYPE_WRITE_WITH_ADDRESS;

opcode_index = spi_setup_opcode(ctlr, trans, lock);
if (opcode_index < 0)
return -EINVAL;

if (op->addr.nbytes) {
trans->offset = op->addr.val;
with_address = 1;
}

if (ctlr->speed && ctlr->max_speed >= 33000000) {
int byte;

byte = ich_readb(ctlr, ctlr->speed);
if (ctlr->cur_speed >= 33000000)
byte |= SSFC_SCF_33MHZ;
else
byte &= ~SSFC_SCF_33MHZ;
ich_writeb(ctlr, byte, ctlr->speed);
}


control = SPIC_SCGO | ((opcode_index & 0x07) << 4);


if (ich_readw(ctlr, ctlr->preop))
control |= SPIC_ACS;

if (!trans->bytesout && !trans->bytesin) {

if (with_address) {
ich_writel(ctlr, trans->offset & 0x00FFFFFF,
ctlr->addr);
}

ich_writew(ctlr, control, ctlr->control);


status = ich_status_poll(ctlr, SPIS_CDS | SPIS_FCERR, 1);
if (status < 0)
return status;

if (status & SPIS_FCERR) {
debug("ICH SPI: Command transaction error\n");
return -EIO;
}

return 0;
}

while (trans->bytesout || trans->bytesin) {
uint32_t data_length;


ich_writel(ctlr, trans->offset & 0x00FFFFFF, ctlr->addr);

if (trans->bytesout)
data_length = min(trans->bytesout, ctlr->databytes);
else
data_length = min(trans->bytesin, ctlr->databytes);


if (trans->bytesout) {
write_reg(ctlr, trans->out, ctlr->data, data_length);
trans->bytesout -= data_length;
}


control &= ~((ctlr->databytes - 1) << 8);
control |= SPIC_DS;
control |= (data_length - 1) << 8;


ich_writew(ctlr, control, ctlr->control);


status = ich_status_poll(ctlr, SPIS_CDS | SPIS_FCERR, 1);
if (status < 0)
return status;

if (status & SPIS_FCERR) {
debug("ICH SPI: Data transaction error %x\n", status);
return -EIO;
}

if (trans->bytesin) {
read_reg(ctlr, ctlr->data, trans->in, data_length);
trans->bytesin -= data_length;
}
}


if (!lock)
ich_writew(ctlr, 0, ctlr->preop);

return 0;
}