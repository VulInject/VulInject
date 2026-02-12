static ptrdiff_t
write_iseq_block(mrb_state *mrb, const mrb_irep *irep, uint8_t *buf, uint8_t flags)
{
uint8_t *cur = buf;
size_t seqlen = irep->ilen * sizeof(mrb_code) +
irep->clen * sizeof(struct mrb_irep_catch_handler);

cur += uint16_to_bin(irep->clen, cur); 
cur += uint32_to_bin(irep->ilen, cur); 
memcpy(cur, irep->iseq, seqlen);
cur += seqlen;

return cur - buf;
}