void zynq_ddrc_init(void)
{
u32 width, ecctype;

width = readl(&ddrc_base->ddrc_ctrl);
width = (width & ZYNQ_DDRC_CTRLREG_BUSWIDTH_MASK) >>
ZYNQ_DDRC_CTRLREG_BUSWIDTH_SHIFT;
ecctype = (readl(&ddrc_base->ecc_scrub) &
ZYNQ_DDRC_ECC_SCRUBREG_ECC_MODE_MASK);


if ((ecctype == ZYNQ_DDRC_ECC_SCRUBREG_ECCMODE_SECDED) &&
(width == ZYNQ_DDRC_CTRLREG_BUSWIDTH_16BIT)) {
puts("ECC enabled ");


memset((void *)0, 0, 1 * 1024 * 1024);
} else {
puts("ECC disabled ");
}
}