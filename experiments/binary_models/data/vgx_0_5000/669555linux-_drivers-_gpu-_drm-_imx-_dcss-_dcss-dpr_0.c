int dcss_dpr_init(struct dcss_dev *dcss, unsigned long dpr_base)
{
struct dcss_dpr *dpr;

dpr = kzalloc(sizeof(*dpr), GFP_KERNEL);
if (!dpr)
return -ENOMEM;

dcss->dpr = dpr;
dpr->dev = dcss->dev;
dpr->ctxld = dcss->ctxld;
dpr->ctx_id = CTX_SB_HP;

if (dcss_dpr_ch_init_all(dpr, dpr_base)) {
int i;

for (i = 0; i < 3; i++) {
if (dpr->ch[i].base_reg)
iounmap(dpr->ch[i].base_reg);
}

kfree(dpr);

return -ENOMEM;
}

return 0;
}