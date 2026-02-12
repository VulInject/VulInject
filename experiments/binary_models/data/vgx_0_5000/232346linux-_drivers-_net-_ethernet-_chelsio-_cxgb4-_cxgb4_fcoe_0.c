bool cxgb_fcoe_sof_eof_supported(struct adapter *adap, struct sk_buff *skb)
{
struct fcoe_hdr *fcoeh = (struct fcoe_hdr *)skb_network_header(skb);
u8 sof = fcoeh->fcoe_sof;
u8 eof = 0;

if ((sof != FC_SOF_I3) && (sof != FC_SOF_N3)) {
dev_err(adap->pdev_dev, "Unsupported SOF 0x%x\n", sof);
return false;
}

skb_copy_bits(skb, skb->len - 4, &eof, 1);

if ((eof != FC_EOF_N) && (eof != FC_EOF_T)) {
dev_err(adap->pdev_dev, "Unsupported EOF 0x%x\n", eof);
return false;
}

return true;
}