static int st_nci_hci_apdu_reader_event_received(struct nci_dev *ndev,
u8 event,
struct sk_buff *skb)
{
struct st_nci_info *info = nci_get_drvdata(ndev);

pr_debug("apdu reader gate event: %x\n", event);

switch (event) {
case ST_NCI_EVT_TRANSMIT_DATA:
del_timer_sync(&info->se_info.bwi_timer);
info->se_info.bwi_active = false;
info->se_info.cb(info->se_info.cb_context,
skb->data, skb->len, 0);
break;
case ST_NCI_EVT_WTX_REQUEST:
mod_timer(&info->se_info.bwi_timer, jiffies +
msecs_to_jiffies(info->se_info.wt_timeout));
break;
default:
nfc_err(&ndev->nfc_dev->dev, "Unexpected event on apdu reader gate\n");
return 1;
}

kfree_skb(skb);
return 0;
}