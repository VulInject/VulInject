static void lsa_read(struct thread *thread)
{
struct ospf_apiclient *oclient;
int fd;
int ret;

printf("lsa_read called\n");

oclient = THREAD_ARG(thread);
fd = THREAD_FD(thread);


ret = ospf_apiclient_handle_async(oclient);
if (ret < 0) {
printf("Connection closed, exiting...");
exit(0);
}


thread_add_read(master, lsa_read, oclient, fd, NULL);
}