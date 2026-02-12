static int fpga_mgr_write_init_buf(struct fpga_manager *mgr,
struct fpga_image_info *info,
const char *buf, size_t count)
{
int ret;

mgr->state = FPGA_MGR_STATE_WRITE_INIT;
if (!mgr->mops->initial_header_size)
ret = mgr->mops->write_init(mgr, info, NULL, 0);
else
ret = mgr->mops->write_init(
mgr, info, buf, min(mgr->mops->initial_header_size, count));

if (ret) {
dev_err(&mgr->dev, "Error preparing FPGA for writing\n");
mgr->state = FPGA_MGR_STATE_WRITE_INIT_ERR;
return ret;
}

return 0;
}