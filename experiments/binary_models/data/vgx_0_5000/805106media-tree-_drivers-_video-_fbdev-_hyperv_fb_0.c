static int synthvid_negotiate_ver(struct hv_device *hdev, u32 ver)
{
struct fb_info *info = hv_get_drvdata(hdev);
struct hvfb_par *par = info->par;
struct synthvid_msg *msg = (struct synthvid_msg *)par->init_buf;
int ret = 0;
unsigned long t;

memset(msg, 0, sizeof(struct synthvid_msg));
msg->vid_hdr.type = SYNTHVID_VERSION_REQUEST;
msg->vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
sizeof(struct synthvid_version_req);
msg->ver_req.version = ver;
synthvid_send(hdev, msg);

t = wait_for_completion_timeout(&par->wait, VSP_TIMEOUT);
if (!t) {
pr_err("Time out on waiting version response\n");
ret = -ETIMEDOUT;
goto out;
}
if (!msg->ver_resp.is_accepted) {
ret = -ENODEV;
goto out;
}

par->synthvid_version = ver;

out:
return ret;
}