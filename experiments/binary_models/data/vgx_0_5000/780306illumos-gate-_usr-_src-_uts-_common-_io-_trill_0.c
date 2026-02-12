static trill_sock_t *
trill_do_open(int flags)
{
trill_sock_t *tsock;
int kmflag = ((flags & SOCKET_NOSLEEP)) ? KM_NOSLEEP:KM_SLEEP;

tsock = kmem_zalloc(sizeof (trill_sock_t), kmflag);
if (tsock != NULL) {
tsock->ts_state = TS_UNBND;
tsock->ts_refs++;
mutex_init(&tsock->ts_socklock, NULL, MUTEX_DRIVER, NULL);
cv_init(&tsock->ts_sockthreadwait, NULL, CV_DRIVER, NULL);
cv_init(&tsock->ts_sockclosewait, NULL, CV_DRIVER, NULL);
}
return (tsock);
}