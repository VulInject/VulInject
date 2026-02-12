static int sun6i_csi_isp_detect(struct sun6i_csi_device *csi_dev)
{
struct device *dev = csi_dev->dev;
struct fwnode_handle *handle;


handle = fwnode_graph_get_endpoint_by_id(dev_fwnode(dev),
SUN6I_CSI_PORT_ISP, 0,
FWNODE_GRAPH_ENDPOINT_NEXT);
if (!handle)
return 0;

fwnode_handle_put(handle);

if (!IS_ENABLED(CONFIG_VIDEO_SUN6I_ISP)) {
dev_warn(dev,
"ISP link is detected but not enabled in kernel config!");
return 0;
}

csi_dev->isp_available = true;

return 0;
}