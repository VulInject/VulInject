static ssize_t read_file_bool_bmps(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
{
struct wcn36xx *wcn = file->private_data;
struct wcn36xx_vif *vif_priv = NULL;
struct ieee80211_vif *vif = NULL;
char buf[3];

list_for_each_entry(vif_priv, &wcn->vif_list, list) {
vif = wcn36xx_priv_to_vif(vif_priv);
if (NL80211_IFTYPE_STATION == vif->type) {
if (vif_priv->pw_state == WCN36XX_BMPS)
buf[0] = '1';
else
buf[0] = '0';
break;
}
}
buf[1] = '\n';
buf[2] = 0x00;

return simple_read_from_buffer(user_buf, count, ppos, buf, 2);
}