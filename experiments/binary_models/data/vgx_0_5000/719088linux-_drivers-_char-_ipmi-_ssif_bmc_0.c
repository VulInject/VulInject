static void process_smbus_cmd(struct ssif_bmc_ctx *ssif_bmc, u8 *val)
{

ssif_bmc->part_buf.smbus_cmd = *val;
ssif_bmc->msg_idx = 1;
memset(&ssif_bmc->part_buf.payload[0], 0, MAX_PAYLOAD_PER_TRANSACTION);

if (*val == SSIF_IPMI_SINGLEPART_WRITE || *val == SSIF_IPMI_MULTIPART_WRITE_START) {

if (ssif_bmc->response_in_progress)
complete_response(ssif_bmc);


if (ssif_bmc->aborting)
ssif_bmc->aborting = false;
}
}