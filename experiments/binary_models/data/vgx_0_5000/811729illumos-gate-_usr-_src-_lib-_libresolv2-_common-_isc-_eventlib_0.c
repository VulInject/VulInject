int
evPollfdRealloc(evContext_p *ctx, int pollfd_chunk_size, int fd) {

int     i, maxnfds;
void	*pollfds, *fdTable;

if (fd < ctx->maxnfds)
return (0);


if (pollfd_chunk_size < 20)
pollfd_chunk_size = 20;

maxnfds = (1 + (fd/pollfd_chunk_size)) * pollfd_chunk_size;

pollfds = realloc(ctx->pollfds, maxnfds * sizeof(*ctx->pollfds));
if (pollfds != NULL)
ctx->pollfds = pollfds;
fdTable = realloc(ctx->fdTable, maxnfds * sizeof(*ctx->fdTable));
if (fdTable != NULL)
ctx->fdTable = fdTable;

if (pollfds == NULL || fdTable == NULL) {
evPrintf(ctx, 2, "pollfd() realloc (%ld) failed\n",
(long)maxnfds*sizeof(struct pollfd));
return (-1);
}

for (i = ctx->maxnfds; i < maxnfds; i++) {
ctx->pollfds[i].fd = -1;
ctx->pollfds[i].events = 0;
ctx->fdTable[i] = 0;
}

ctx->maxnfds = maxnfds;

return (0);
}