static int
engine_add(struct Socket* sock)
{
assert(0 != sock);
assert(0 == sockList[s_fd(sock)]);


if (s_fd(sock) >= FD_SETSIZE) {
log_write(LS_SYSTEM, L_ERROR, 0,
"Attempt to add socket %d (> %d) to event engine", s_fd(sock),
FD_SETSIZE);
return 0;
}

sockList[s_fd(sock)] = sock; 

if (s_fd(sock) >= highest_fd) 
highest_fd = s_fd(sock);

Debug((DEBUG_ENGINE, "select: Adding socket %d to engine [%p], state %s",
s_fd(sock), sock, state_to_name(s_state(sock))));


set_or_clear(s_fd(sock), 0, state_to_events(s_state(sock), s_events(sock)));

return 1; 
}