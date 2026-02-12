static int bnxt_hwrm_fwd_resp(struct bnxt *bp, struct bnxt_vf_info *vf,
void *encap_resp, __le64 encap_resp_addr,
__le16 encap_resp_cpr, u32 msg_size)
{
struct hwrm_fwd_resp_input *req;
int rc;

if (BNXT_FWD_RESP_SIZE_ERR(msg_size))
return -EINVAL;

rc = hwrm_req_init(bp, req, HWRM_FWD_RESP);
if (!rc) {

req->target_id = cpu_to_le16(vf->fw_fid);
req->encap_resp_target_id = cpu_to_le16(vf->fw_fid);
req->encap_resp_len = cpu_to_le16(msg_size);
req->encap_resp_addr = encap_resp_addr;
req->encap_resp_cmpl_ring = encap_resp_cpr;
memcpy(req->encap_resp, encap_resp, msg_size);

rc = hwrm_req_send(bp, req);
}
if (rc)
netdev_err(bp->dev, "hwrm_fwd_resp failed. rc:%d\n", rc);
return rc;
}