static int drbg_init_hash_kernel(struct drbg_state *drbg)
{
struct sdesc *sdesc;
struct crypto_shash *tfm;

tfm = crypto_alloc_shash(drbg->core->backend_cra_name, 0, 0);
if (IS_ERR(tfm)) {
pr_info("DRBG: could not allocate digest TFM handle: %s\n",
drbg->core->backend_cra_name);
return PTR_ERR(tfm);
}
BUG_ON(drbg_blocklen(drbg) != crypto_shash_digestsize(tfm));
sdesc = kzalloc(sizeof(struct shash_desc) + crypto_shash_descsize(tfm),
GFP_KERNEL);
if (!sdesc) {
crypto_free_shash(tfm);
return -ENOMEM;
}

sdesc->shash.tfm = tfm;
sdesc->shash.flags = 0;
drbg->priv_data = sdesc;

return crypto_shash_alignmask(tfm);
}