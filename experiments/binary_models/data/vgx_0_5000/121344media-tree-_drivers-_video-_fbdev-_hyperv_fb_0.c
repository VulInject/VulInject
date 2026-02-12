static void synthvid_recv_sub(struct hv_device *hdev)
{
struct fb_info *info = hv_get_drvdata(hdev);
struct hvfb_par *par;
struct synthvid_msg *msg;

if (!info)
return;

par = info->par;
msg = (struct synthvid_msg *)par->recv_buf;


if (msg->vid_hdr.type == SYNTHVID_VERSION_RESPONSE ||
msg->vid_hdr.type == SYNTHVID_VRAM_LOCATION_ACK) {
memcpy(par->init_buf, msg, MAX_VMBUS_PKT_SIZE);
complete(&par->wait);
return;
}


if (msg->vid_hdr.type == SYNTHVID_FEATURE_CHANGE) {
if (par->fb_ready) {
synthvid_send_ptr(hdev);
synthvid_send_situ(hdev);
}

par->update = msg->feature_chg.is_dirt_needed;
if (par->update)
schedule_delayed_work(&par->dwork, HVFB_UPDATE_DELAY);
}
}