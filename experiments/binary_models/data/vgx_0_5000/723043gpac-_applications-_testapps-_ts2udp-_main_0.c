u32 sender_thread_proc(void *param) {
char *data = NULL;
UDPSender *sender = param;
s32 time_to_wait_in_ms = 0;
while (!sender->done) {
gf_sema_wait(sender->sema);
time_to_wait_in_ms = (s32)((sender->pcr - sender->first_pcr) / 27000 - gf_sys_clock());
if (time_to_wait_in_ms > 0) {
gf_sleep(time_to_wait_in_ms);
} else if (time_to_wait_in_ms < -300) {
fprintf(stderr, "sender late from %d ms\n", -time_to_wait_in_ms);
}
data = sender->buffer + MPEGTS_PKT_SIZE * (sender->data_read_idx % QUEUE_SIZE);
gf_sk_send(sender->sk, data, MPEGTS_PKT_SIZE); 
sender->data_read_idx++;
}

return 0;
}