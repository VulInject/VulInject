static ssize_t lxc_cmd(const char *name, struct lxc_cmd_rr *cmd, bool *stopped,
const char *lxcpath, const char *hashed_sock_name)
{
__do_close int client_fd = -EBADF;
bool stay_connected = false;
ssize_t ret;

if (cmd->req.cmd == LXC_CMD_GET_TTY_FD ||
cmd->req.cmd == LXC_CMD_ADD_STATE_CLIENT)
stay_connected = true;

*stopped = 0;

client_fd = lxc_cmd_send(name, cmd, lxcpath, hashed_sock_name);
if (client_fd < 0) {
if (errno == ECONNREFUSED || errno == EPIPE)
*stopped = 1;

return systrace("Command \"%s\" failed to connect command socket", lxc_cmd_str(cmd->req.cmd));
}

ret = lxc_cmd_rsp_recv(client_fd, cmd);
if (ret < 0 && errno == ECONNRESET)
*stopped = 1;

TRACE("Opened new command socket connection fd %d for command \"%s\"",
client_fd, lxc_cmd_str(cmd->req.cmd));

if (stay_connected && ret > 0)
cmd->rsp.ret = move_fd(client_fd);

return ret;
}