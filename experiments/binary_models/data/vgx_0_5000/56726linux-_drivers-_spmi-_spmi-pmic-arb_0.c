static int pmic_arb_fmt_read_cmd(struct spmi_pmic_arb *pmic_arb, u8 opc, u8 sid,
u16 addr, size_t len, u32 *cmd, u32 *offset)
{
u8 bc = len - 1;
int rc;

rc = pmic_arb->ver_ops->offset(pmic_arb, sid, addr,
PMIC_ARB_CHANNEL_OBS);
if (rc < 0)
return rc;

*offset = rc;
if (bc >= PMIC_ARB_MAX_TRANS_BYTES) {
dev_err(&pmic_arb->spmic->dev, "pmic-arb supports 1..%d bytes per trans, but:%zu requested",
PMIC_ARB_MAX_TRANS_BYTES, len);
return  -EINVAL;
}


if (opc >= 0x60 && opc <= 0x7F)
opc = PMIC_ARB_OP_READ;
else if (opc >= 0x20 && opc <= 0x2F)
opc = PMIC_ARB_OP_EXT_READ;
else if (opc >= 0x38 && opc <= 0x3F)
opc = PMIC_ARB_OP_EXT_READL;
else
return -EINVAL;

*cmd = pmic_arb->ver_ops->fmt_cmd(opc, sid, addr, bc);

return 0;
}