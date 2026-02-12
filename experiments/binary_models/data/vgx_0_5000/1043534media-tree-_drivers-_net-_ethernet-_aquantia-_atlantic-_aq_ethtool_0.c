static int aq_ethtool_get_rss(struct net_device *ndev, u32 *indir, u8 *key,
u8 *hfunc)
{
struct aq_nic_s *aq_nic = netdev_priv(ndev);
struct aq_nic_cfg_s *cfg = aq_nic_get_cfg(aq_nic);
unsigned int i = 0U;

if (hfunc)
*hfunc = ETH_RSS_HASH_TOP; 
if (indir) {
for (i = 0; i < AQ_CFG_RSS_INDIRECTION_TABLE_MAX; i++)
indir[i] = cfg->aq_rss.indirection_table[i];
}
if (key)
memcpy(key, cfg->aq_rss.hash_secret_key,
sizeof(cfg->aq_rss.hash_secret_key));
return 0;
}