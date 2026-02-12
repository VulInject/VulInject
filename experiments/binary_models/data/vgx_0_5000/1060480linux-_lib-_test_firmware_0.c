static enum fw_upload_err test_fw_upload_prepare(struct fw_upload *fwl,
const u8 *data, u32 size)
{
struct test_firmware_upload *tst = fwl->dd_handle;
enum fw_upload_err ret = FW_UPLOAD_ERR_NONE;
const char *progress = "preparing:";

tst->cancel_request = false;

if (!size || size > TEST_UPLOAD_MAX_SIZE) {
ret = FW_UPLOAD_ERR_INVALID_SIZE;
goto err_out;
}

if (strncmp(data, "inject:", strlen("inject:")) == 0)
upload_err_inject_prog(tst, data + strlen("inject:"));

memset(tst->buf, 0, TEST_UPLOAD_MAX_SIZE);
tst->size = size;

if (tst->inject.err_code == FW_UPLOAD_ERR_NONE ||
strncmp(tst->inject.prog, progress, strlen(progress)) != 0)
return FW_UPLOAD_ERR_NONE;

if (tst->inject.err_code == FW_UPLOAD_ERR_CANCELED)
ret = fw_upload_wait_on_cancel(tst);
else
ret = tst->inject.err_code;

err_out:

tst->inject.err_code = FW_UPLOAD_ERR_NONE;
tst->inject.prog = NULL;

return ret;
}