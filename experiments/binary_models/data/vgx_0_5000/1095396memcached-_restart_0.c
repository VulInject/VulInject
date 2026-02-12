bool restart_mmap_open(const size_t limit, const char *file, void **mem_base) {
bool reuse_mmap = true;

long pagesize = _find_pagesize();
memory_file = strdup(file);
mmap_fd = open(file, O_RDWR|O_CREAT, S_IRWXU);
if (mmap_fd == -1) {
perror("failed to open file for mmap");
abort();
}
if (ftruncate(mmap_fd, limit) != 0) {
perror("ftruncate failed");
abort();
}

if (limit % pagesize) {


fprintf(stderr, "[restart] memory limit not divisible evenly by pagesize (please report bug)\n");
abort();
}
mmap_base = mmap(NULL, limit, PROT_READ|PROT_WRITE, MAP_SHARED, mmap_fd, 0);
if (mmap_base == MAP_FAILED) {
perror("failed to mmap, aborting");
abort();
}

slabmem_limit = limit;
if (restart_check(file) != 0) {
reuse_mmap = false;
}
*mem_base = mmap_base;

return reuse_mmap;
}