static void *mmap_file(char const *fname, size_t *size)
{
int fd;
struct stat sb;
void *addr = NULL;

fd = open(fname, O_RDWR);
if (fd < 0) {
perror(fname);
return NULL;
}
if (fstat(fd, &sb) < 0) {
perror(fname);
goto out;
}
if (!S_ISREG(sb.st_mode)) {
fprintf(stderr, "not a regular file: %s\n", fname);
goto out;
}

addr = mmap(0, sb.st_size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);
if (addr == MAP_FAILED) {
fprintf(stderr, "Could not mmap file: %s\n", fname);
goto out;
}

*size = sb.st_size;

out:
close(fd);
return addr;
}