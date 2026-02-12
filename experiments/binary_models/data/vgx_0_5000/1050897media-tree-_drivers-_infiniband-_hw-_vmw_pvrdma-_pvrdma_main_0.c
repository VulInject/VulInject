static int pvrdma_del_gid_at_index(struct pvrdma_dev *dev, int index)
{
int ret;
union pvrdma_cmd_req req;
struct pvrdma_cmd_destroy_bind *cmd_dest = &req.destroy_bind;


if (!dev->sgid_tbl) {
dev_warn(&dev->pdev->dev, "sgid table not initialized\n");
return -EINVAL;
}

memset(cmd_dest, 0, sizeof(*cmd_dest));
cmd_dest->hdr.cmd = PVRDMA_CMD_DESTROY_BIND;
memcpy(cmd_dest->dest_gid, &dev->sgid_tbl[index], 16);
cmd_dest->index = index;

ret = pvrdma_cmd_post(dev, &req, NULL, 0);
if (ret < 0) {
dev_warn(&dev->pdev->dev,
"could not destroy binding, error: %d\n", ret);
return ret;
}
memset(&dev->sgid_tbl[index], 0, 16);
return 0;
}