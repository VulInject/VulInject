struct dtm_node_t *dtm_load(char *filename) {
struct dtm_node_t *mroot;
int fd;
int len;
int nodes;

fd = open(filename, O_RDONLY);
if (fd < 0) {
LERR("cannot open file '%s'\n", filename);
return NULL;
}

len=lseek(fd, 0, SEEK_END);
lseek(fd, 0, SEEK_SET);

nodes=len/sizeof(struct dtm_node_t);
LINFO("file contains %ld nodes (size=%ld, rest=%ld)\n", (long int)nodes, (long int)len, (long int)len%sizeof(struct dtm_node_t));

mroot=mmap(NULL, len, PROT_READ, MAP_PRIVATE, fd, 0);
if (mroot==MAP_FAILED) {
LERR("cannot mmap file '%s', error=%d (%s)\n", filename, errno, strerror(errno));
close(fd);
return NULL;
}

return mroot;
}