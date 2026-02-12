static void aspeed_smc_dma_checksum(AspeedSMCState *s)
{
MemTxResult result;
uint32_t data;

if (s->regs[R_DMA_CTRL] & DMA_CTRL_WRITE) {
aspeed_smc_error("invalid direction for DMA checksum");
return;
}

if (s->regs[R_DMA_CTRL] & DMA_CTRL_CALIB) {
aspeed_smc_dma_calibration(s);
}

while (s->regs[R_DMA_LEN]) {
data = address_space_ldl_le(&s->flash_as, s->regs[R_DMA_FLASH_ADDR],
MEMTXATTRS_UNSPECIFIED, &result);
if (result != MEMTX_OK) {
aspeed_smc_error("Flash read failed @%08x",
s->regs[R_DMA_FLASH_ADDR]);
return;
}
trace_aspeed_smc_dma_checksum(s->regs[R_DMA_FLASH_ADDR], data);


s->regs[R_DMA_CHECKSUM] += data;
s->regs[R_DMA_FLASH_ADDR] += 4;
s->regs[R_DMA_LEN] -= 4;
}

if (s->inject_failure && aspeed_smc_inject_read_failure(s)) {
s->regs[R_DMA_CHECKSUM] = 0xbadc0de;
}

}