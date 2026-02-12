static void mei_hbm_cl_connect_res(struct mei_device *dev, struct mei_cl *cl,
struct mei_hbm_cl_cmd *cmd)
{
struct hbm_client_connect_response *rs =
(struct hbm_client_connect_response *)cmd;

cl_dbg(dev, cl, "hbm: connect response status=%s\n",
mei_cl_conn_status_str(rs->status));

if (rs->status == MEI_CL_CONN_SUCCESS)
cl->state = MEI_FILE_CONNECTED;
else {
cl->state = MEI_FILE_DISCONNECT_REPLY;
if (rs->status == MEI_CL_CONN_NOT_FOUND) {
mei_me_cl_del(dev, cl->me_cl);
if (dev->dev_state == MEI_DEV_ENABLED)
schedule_work(&dev->bus_rescan_work);
}
}
cl->status = mei_cl_conn_status_to_errno(rs->status);
}