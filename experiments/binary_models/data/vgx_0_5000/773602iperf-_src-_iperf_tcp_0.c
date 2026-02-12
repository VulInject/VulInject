int
iperf_tcp_send(struct iperf_stream *sp)
{
int r;

if (!sp->pending_size)
sp->pending_size = sp->settings->blksize;

if (sp->test->zerocopy)
r = Nsendfile(sp->buffer_fd, sp->socket, sp->buffer, sp->pending_size);
else
r = Nwrite(sp->socket, sp->buffer, sp->pending_size, Ptcp);

if (r < 0)
return r;

sp->pending_size -= r;
sp->result->bytes_sent += r;
sp->result->bytes_sent_this_interval += r;

if (sp->test->debug_level >=  DEBUG_LEVEL_DEBUG)
printf("sent %d bytes of %d, pending %d, total %" PRIu64 "\n",
r, sp->settings->blksize, sp->pending_size, sp->result->bytes_sent);

return r;
}