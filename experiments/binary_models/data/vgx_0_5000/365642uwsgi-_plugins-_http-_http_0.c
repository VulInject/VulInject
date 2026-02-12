ssize_t hr_recv_stud4(struct corerouter_peer * main_peer) {
struct http_session *hr = (struct http_session *) main_peer->session;
ssize_t len = read(main_peer->fd, hr->stud_prefix + hr->stud_prefix_pos, hr->stud_prefix_remains - hr->stud_prefix_pos);
if (len < 0) {
cr_try_again;
uwsgi_cr_error(main_peer, "hr_recv_stud4()");
return -1;
}

hr->stud_prefix_pos += len;

if (hr->stud_prefix_pos == hr->stud_prefix_remains) {
if (hr->stud_prefix[0] != AF_INET) {
uwsgi_cr_log(main_peer, "invalid stud prefix for address family %d\n", hr->stud_prefix[0]);
return -1;
}

memcpy(&main_peer->session->client_sockaddr.sa_in.sin_addr, hr->stud_prefix + 1, 4);


main_peer->hook_read = hr_read;
return hr_read(main_peer);
}

return len;

}