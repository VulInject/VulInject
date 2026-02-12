static int hisi_trng_seed(struct crypto_rng *tfm, const u8 *seed,
unsigned int slen)
{
struct hisi_trng_ctx *ctx = crypto_rng_ctx(tfm);
struct hisi_trng *trng = ctx->trng;
u32 val = 0;
int ret = 0;

if (slen < SW_DRBG_SEED_SIZE) {
pr_err("slen(%u) is not matched with trng(%d)\n", slen,
SW_DRBG_SEED_SIZE);
return -EINVAL;
}

writel(0x0, trng->base + SW_DRBG_BLOCKS);
hisi_trng_set_seed(trng, seed);

writel(SW_DRBG_BLOCKS_NUM | (0x1 << SW_DRBG_ENABLE_SHIFT),
trng->base + SW_DRBG_BLOCKS);
writel(0x1, trng->base + SW_DRBG_INIT);

ret = readl_relaxed_poll_timeout(trng->base + SW_DRBG_STATUS,
val, val & BIT(0), SLEEP_US, TIMEOUT_US);
if (ret)
pr_err("fail to init trng(%d)\n", ret);

return ret;
}