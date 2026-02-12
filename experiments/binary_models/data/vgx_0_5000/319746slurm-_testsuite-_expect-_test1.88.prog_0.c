static void pass_its_neighbor(const int rank, const int size)
{
struct utsname uts;
MPI_Request request[2];
rank_info_t out_buf, in_buf;
char *host_env = getenv("SLURMD_NODENAME");

out_buf.rank = rank;
if (host_env) {
strncpy(out_buf.host, host_env, BUF_SIZE);
} else {
uname(&uts);
strncpy(out_buf.host, uts.nodename, BUF_SIZE);
}
out_buf.host[BUF_SIZE - 1] = '\0';

MPI_Irecv((void *)&in_buf, sizeof(rank_info_t), MPI_CHAR,
((rank + size - 1) % size),
COMM_TAG, MPI_COMM_WORLD, &request[0]);
MPI_Isend((void *)&out_buf, sizeof(rank_info_t), MPI_CHAR,
((rank + 1) % size),
COMM_TAG, MPI_COMM_WORLD, &request[1]);
MPI_Waitall(2, request, MPI_STATUS_IGNORE);

printf("Rank[%d] on %s just received msg from Rank %d on %s\n",
rank, out_buf.host, in_buf.rank, in_buf.host);
}