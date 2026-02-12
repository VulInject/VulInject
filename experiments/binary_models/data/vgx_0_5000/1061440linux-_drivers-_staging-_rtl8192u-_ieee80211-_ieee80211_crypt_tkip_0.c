static int ieee80211_tkip_set_key(void *key, int len, u8 *seq, void *priv)
{
struct ieee80211_tkip_data *tkey = priv;
int keyidx;
struct crypto_shash *tfm = tkey->tx_tfm_michael;
struct crypto_shash *tfm3 = tkey->rx_tfm_michael;

keyidx = tkey->key_idx;
memset(tkey, 0, sizeof(*tkey));
tkey->key_idx = keyidx;
tkey->tx_tfm_michael = tfm;
tkey->rx_tfm_michael = tfm3;

if (len == TKIP_KEY_LEN) {
memcpy(tkey->key, key, TKIP_KEY_LEN);
tkey->key_set = 1;
tkey->tx_iv16 = 1; 
if (seq) {
tkey->rx_iv32 = (seq[5] << 24) | (seq[4] << 16) |
(seq[3] << 8) | seq[2];
tkey->rx_iv16 = (seq[1] << 8) | seq[0];
}
} else if (len == 0)
tkey->key_set = 0;
else
return -1;

return 0;
}