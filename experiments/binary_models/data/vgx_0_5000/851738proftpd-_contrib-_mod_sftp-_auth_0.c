static int send_userauth_methods(char partial_success) {
struct ssh2_packet *pkt;
unsigned char *buf, *ptr;
uint32_t buflen, bufsz = 1024;
int res;

pkt = sftp_ssh2_packet_create(auth_pool);

buflen = bufsz;
ptr = buf = palloc(pkt->pool, bufsz);

(void) pr_log_writefile(sftp_logfd, MOD_SFTP_VERSION,
"sending acceptable userauth methods: %s", auth_avail_meths);

sftp_msg_write_byte(&buf, &buflen, SFTP_SSH2_MSG_USER_AUTH_FAILURE);
sftp_msg_write_string(&buf, &buflen, auth_avail_meths);
sftp_msg_write_bool(&buf, &buflen, partial_success);

pkt->payload = ptr;
pkt->payload_len = (bufsz - buflen);

res = sftp_ssh2_packet_write(sftp_conn->wfd, pkt);
if (res < 0) {
destroy_pool(pkt->pool);
return -1;
}

return 0;
}