static int dra7_reset_assert(struct reset_ctl *reset_ctl)
{
struct dra7_reset_priv *priv = dev_get_priv(reset_ctl->dev);
int mask = 1 << reset_ctl->id;

if (reset_ctl->id < 0 || reset_ctl->id >= priv->nreset)
return -EINVAL;

dra7_reset_rmw(priv->rstctrl, mask, 0x0);

return 0;
}

struct reset_ops dra7_reset_ops = {
.rst_assert = dra7_reset_assert,
.rst_deassert = dra7_reset_deassert,
};