void rt2x00debug_update_crypto(struct rt2x00_dev *rt2x00dev,
struct rxdone_entry_desc *rxdesc)
{
struct rt2x00debug_intf *intf = rt2x00dev->debugfs_intf;
enum cipher cipher = rxdesc->cipher;
enum rx_crypto status = rxdesc->cipher_status;

if (cipher == CIPHER_TKIP_NO_MIC)
cipher = CIPHER_TKIP;
if (cipher == CIPHER_NONE || cipher >= CIPHER_MAX)
return;


cipher--;

intf->crypto_stats[cipher].success += (status == RX_CRYPTO_SUCCESS);
intf->crypto_stats[cipher].icv_error += (status == RX_CRYPTO_FAIL_ICV);
intf->crypto_stats[cipher].mic_error += (status == RX_CRYPTO_FAIL_MIC);
intf->crypto_stats[cipher].key_error += (status == RX_CRYPTO_FAIL_KEY);
}