static int handle_env_channel(struct ssh2_channel *chan,
struct ssh2_packet *pkt, unsigned char **buf, uint32_t *buflen) {
int res;
char *key, *value;

key = sftp_msg_read_string(pkt->pool, buf, buflen);
value = sftp_msg_read_string(pkt->pool, buf, buflen);

(void) pr_log_writefile(sftp_logfd, MOD_SFTP_VERSION,
"'env' channel request: '%s' = '%s'", key, value);

if (allow_env(key) == TRUE) {
res = pr_env_set(sftp_pool, pstrdup(session.pool, key),
pstrdup(session.pool, value));
if (res < 0) {
(void) pr_log_writefile(sftp_logfd, MOD_SFTP_VERSION,
"error setting environment variable '%s' with value '%s': %s",
key, value, strerror(errno));
}

} else {
(void) pr_log_writefile(sftp_logfd, MOD_SFTP_VERSION,
"environment variable '%s' prohibited by policy", key);
res = -1;
}

return res;
}