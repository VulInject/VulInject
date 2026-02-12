int handle_disconnect_req(const char *msg, size_t msg_len)
{
struct disconnect_cmd *cmd = parse_disconnect_cmd(msg, msg_len);
if (!cmd)
return 1;
if (cmd->permaban) {
error("Cloud Banned This Agent!");
aclk_disable_runtime = 1;
}
info("Cloud requested disconnect (EC=%u, \"%s\")", (unsigned int)cmd->error_code, cmd->error_description);
if (cmd->reconnect_after_s > 0) {
aclk_block_until = now_monotonic_sec() + cmd->reconnect_after_s;
info(
"Cloud asks not to reconnect for %u seconds. We shall honor that request",
(unsigned int)cmd->reconnect_after_s);
}
disconnect_req = 1;
freez(cmd->error_description);
freez(cmd);
return 0;
}