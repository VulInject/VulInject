static void flush_fifo_rx(struct ux500_msp *msp)
{
u32 reg_val_GCR, reg_val_FLR;
u32 limit = 32;

reg_val_GCR = readl(msp->registers + MSP_GCR);
writel(reg_val_GCR | RX_ENABLE, msp->registers + MSP_GCR);

reg_val_FLR = readl(msp->registers + MSP_FLR);
while (!(reg_val_FLR & RX_FIFO_EMPTY) && limit--) {
readl(msp->registers + MSP_DR);
reg_val_FLR = readl(msp->registers + MSP_FLR);
}

writel(reg_val_GCR, msp->registers + MSP_GCR);
}