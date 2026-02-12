static TEE_Result sc_rm_assign_resource(enum sc_resource resource)
{
TEE_Result res = TEE_ERROR_GENERIC;
enum sc_error err = SC_ERR_LAST;
uint8_t secure_partition = 0;
struct imx_mu_msg msg = {
.header.version = SC_RPC_VERSION,
.header.size = 2,
.header.tag = SC_RPC_SVC_RM,
.header.command = SC_RM_FUNC_ASSIGN_RESOURCE,
};

res = sc_rm_get_partition(&secure_partition);
if (res != TEE_SUCCESS) {
EMSG("Cannot get secure partition ID");
return res;
}

IMX_MU_DATA_U16(&msg, 0) = (uint16_t)resource;
IMX_MU_DATA_U8(&msg, 2) = secure_partition;

res = imx_mu_call(secure_ipc_addr, &msg, true);
if (res != TEE_SUCCESS) {
EMSG("Communication error");
return res;
}

err = msg.header.command;
if (err != SC_ERR_NONE) {
EMSG("Unable to assign resource, sc_error: %d", err);
return TEE_ERROR_GENERIC;
}

return TEE_SUCCESS;
}