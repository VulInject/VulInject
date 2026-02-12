static void rx_stop(struct slgt_info *info)
{
unsigned short val;


val = rd_reg16(info, RCR) & ~BIT1;          
wr_reg16(info, RCR, (unsigned short)(val | BIT2)); 
wr_reg16(info, RCR, val);                  

slgt_irq_off(info, IRQ_RXOVER + IRQ_RXDATA + IRQ_RXIDLE);


wr_reg16(info, SSR, IRQ_RXIDLE + IRQ_RXOVER);

rdma_reset(info);

info->rx_enabled = false;
info->rx_restart = false;
}