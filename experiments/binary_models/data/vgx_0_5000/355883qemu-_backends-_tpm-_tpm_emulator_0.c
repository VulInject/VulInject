static int tpm_emulator_ctrlcmd(TPMEmulator *tpm, unsigned long cmd, void *msg,
size_t msg_len_in, size_t msg_len_out)
{
CharBackend *dev = &tpm->ctrl_chr;
uint32_t cmd_no = cpu_to_be32(cmd);
ssize_t n = sizeof(uint32_t) + msg_len_in;
uint8_t *buf = NULL;

WITH_QEMU_LOCK_GUARD(&tpm->mutex) {
buf = g_alloca(n);
memcpy(buf, &cmd_no, sizeof(cmd_no));
memcpy(buf + sizeof(cmd_no), msg, msg_len_in);

n = qemu_chr_fe_write_all(dev, buf, n);
if (n <= 0) {
return -1;
}

if (msg_len_out != 0) {
n = qemu_chr_fe_read_all(dev, msg, msg_len_out);
if (n <= 0) {
return -1;
}
}
}

return 0;
}