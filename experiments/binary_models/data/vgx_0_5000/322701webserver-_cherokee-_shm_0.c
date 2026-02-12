cherokee_shm_map (cherokee_shm_t    *shm,
cherokee_buffer_t *name)
{
int         re;
int         fd;
struct stat info;

fd = cherokee_open (name->buf, O_RDWR, 0600);
if (fd < 0) {
return ret_error;
}

re = cherokee_fstat (fd, &info);
if (re != 0) {
cherokee_fd_close (fd);
return ret_error;
}

shm->mem = mmap (0, info.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
if (shm->mem == MAP_FAILED) {
shm->mem = NULL;
cherokee_fd_close (fd);
return ret_error;
}

cherokee_fd_close (fd);

cherokee_buffer_clean      (&shm->name);
cherokee_buffer_add_buffer (&shm->name, name);

TRACE (ENTRIES, "SHM (mmap: '%s', size: %d) opened\n", name->buf, info.st_size);
return ret_ok;
}