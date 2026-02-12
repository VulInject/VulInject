static int emac_hash_add(struct emac_priv *priv, u8 *mac_addr)
{
struct device *emac_dev = &priv->ndev->dev;
u32 rc = 0;
u32 hash_bit;
u32 hash_value = hash_get(mac_addr);

if (hash_value >= EMAC_NUM_MULTICAST_BITS) {
if (netif_msg_drv(priv)) {
dev_err(emac_dev, "DaVinci EMAC: emac_hash_add(): Invalid "\
"Hash %08x, should not be greater than %08x",
hash_value, (EMAC_NUM_MULTICAST_BITS - 1));
}
return -1;
}


if (priv->multicast_hash_cnt[hash_value] == 0) {
rc = 1; 
if (hash_value < 32) {
hash_bit = BIT(hash_value);
priv->mac_hash1 |= hash_bit;
} else {
hash_bit = BIT((hash_value - 32));
priv->mac_hash2 |= hash_bit;
}
}


++priv->multicast_hash_cnt[hash_value];

return rc;
}