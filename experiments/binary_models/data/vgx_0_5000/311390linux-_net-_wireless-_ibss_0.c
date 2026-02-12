static void __cfg80211_clear_ibss(struct net_device *dev, bool nowext)
{
struct wireless_dev *wdev = dev->ieee80211_ptr;
struct cfg80211_registered_device *rdev = wiphy_to_rdev(wdev->wiphy);
int i;

ASSERT_WDEV_LOCK(wdev);

kfree_sensitive(wdev->connect_keys);
wdev->connect_keys = NULL;

rdev_set_qos_map(rdev, dev, NULL);


if (rdev->ops->del_key)
for (i = 0; i < 6; i++)
rdev_del_key(rdev, dev, -1, i, false, NULL);

if (wdev->u.ibss.current_bss) {
cfg80211_unhold_bss(wdev->u.ibss.current_bss);
cfg80211_put_bss(wdev->wiphy, &wdev->u.ibss.current_bss->pub);
}

wdev->u.ibss.current_bss = NULL;
wdev->u.ibss.ssid_len = 0;
memset(&wdev->u.ibss.chandef, 0, sizeof(wdev->u.ibss.chandef));
if (!nowext)
wdev->wext.ibss.ssid_len = 0;
cfg80211_sched_dfs_chan_update(rdev);
}