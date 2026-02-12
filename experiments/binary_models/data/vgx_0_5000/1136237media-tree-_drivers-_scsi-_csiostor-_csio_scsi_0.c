static void
csio_scsi_cbfn(struct csio_hw *hw, struct csio_ioreq *req)
{
struct scsi_cmnd *cmnd  = (struct scsi_cmnd *)csio_scsi_cmnd(req);
uint8_t scsi_status = SAM_STAT_GOOD;
uint32_t host_status = DID_OK;

if (likely(req->wr_status == FW_SUCCESS)) {
if (req->nsge > 0) {
scsi_dma_unmap(cmnd);
if (req->dcopy)
host_status = csio_scsi_copy_to_sgl(hw, req);
}

cmnd->result = (((host_status) << 16) | scsi_status);
cmnd->scsi_done(cmnd);
csio_scsi_cmnd(req) = NULL;
CSIO_INC_STATS(csio_hw_to_scsim(hw), n_tot_success);
} else {

csio_scsi_err_handler(hw, req);
}
}