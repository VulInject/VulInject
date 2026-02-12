static isc_boolean_t
process_fds(isc__socketmgr_t *manager, struct kevent *events, int nevents) {
int i;
isc_boolean_t readable, writable;
isc_boolean_t done = ISC_FALSE;
isc_boolean_t have_ctlevent = ISC_FALSE;

if (nevents == manager->nevents) {

manager_log(manager, ISC_LOGCATEGORY_GENERAL,
ISC_LOGMODULE_SOCKET, ISC_LOG_INFO,
"maximum number of FD events (%d) received",
nevents);
}

for (i = 0; i < nevents; i++) {
REQUIRE(events[i].ident < manager->maxsocks);
if (events[i].ident == (uintptr_t)manager->pipe_fds[0]) {
have_ctlevent = ISC_TRUE;
continue;
}
readable = ISC_TF(events[i].filter == EVFILT_READ);
writable = ISC_TF(events[i].filter == EVFILT_WRITE);
process_fd(manager, events[i].ident, readable, writable);
}

if (have_ctlevent)
done = process_ctlfd(manager);

return (done);
}