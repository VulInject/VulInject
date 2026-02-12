static int cancel_ssl_run(void *tdata) {
struct basic_test_data *btd = (struct basic_test_data *)tdata;
struct sockaddr_in peer;
nsock_iod iod;
nsock_event_id id;
int done = 0;

iod = nsock_iod_new(btd->nsp, NULL);
AssertNonNull(iod);

memset(&peer, 0, sizeof(peer));
peer.sin_family = AF_INET;
inet_aton("127.0.0.1", &peer.sin_addr);

id = nsock_connect_ssl(btd->nsp, iod, cancel_handler, 4000, (void *)&done,
(struct sockaddr *)&peer, sizeof(peer), IPPROTO_TCP,
PORT_TCPSSL, NULL);
nsock_event_cancel(btd->nsp, id, 1);

nsock_iod_delete(iod, NSOCK_PENDING_SILENT);

return (done == 1) ? 0 : -ENOEXEC;
}


const struct test_case TestCancelTCP = {
.t_name     = "schedule and cancel TCP connect",
.t_setup    = cancel_setup,
.t_run      = cancel_tcp_run,
.t_teardown = cancel_teardown
};