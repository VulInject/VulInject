static void cmd_acquire(yrmcds_cnt* c,
const char* name, size_t name_len,
uint32_t resouces, uint32_t initial) {
yrmcds_error e;
uint32_t serial;

e = yrmcds_cnt_acquire(c, name, name_len, resouces, initial, &serial);
if( e != YRMCDS_OK ) {
fprintf(stderr, "yc-cnt: failed to send acquire: %s\n",
yrmcds_strerror(e));
yrmcds_cnt_close(c);
exit(1);
}

yrmcds_cnt_response r;
recv_or_die(c, &r, serial);

if( r.status == YRMCDS_STATUS_OK ) {
printf("%" PRIu32 "\n", r.resources);
} else {
printf("ERROR: %02x %.*s\n", r.status, (int)r.body_length, r.body);
yrmcds_cnt_close(c);
exit(2);
}
}