static int megasas_dcmd_get_bios_info(MegasasState *s, MegasasCmd *cmd)
{
struct mfi_bios_data info;
size_t dcmd_size = sizeof(info);
dma_addr_t residual;

memset(&info, 0x0, dcmd_size);
if (cmd->iov_size < dcmd_size) {
trace_megasas_dcmd_invalid_xfer_len(cmd->index, cmd->iov_size,
dcmd_size);
return MFI_STAT_INVALID_PARAMETER;
}
info.continue_on_error = 1;
info.verbose = 1;
if (megasas_is_jbod(s)) {
info.expose_all_drives = 1;
}

dma_buf_read(&info, dcmd_size, &residual, &cmd->qsg,
MEMTXATTRS_UNSPECIFIED);
cmd->iov_size -= residual;
return MFI_STAT_OK;
}