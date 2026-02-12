static void fs_symlink_file(void *obj, void *data, QGuestAllocator *t_alloc)
{
QVirtio9P *v9p = obj;
alloc = t_alloc;
struct stat st;
char *real_file = virtio_9p_test_path("05/real_file");
char *symlink_file = virtio_9p_test_path("05/symlink_file");

do_attach(v9p);
do_mkdir(v9p, "/", "05");
do_lcreate(v9p, "05", "real_file");
g_assert(stat(real_file, &st) == 0);
g_assert((st.st_mode & S_IFMT) == S_IFREG);

do_symlink(v9p, "05", "symlink_file", "real_file");


g_assert(stat(symlink_file, &st) == 0);

g_free(symlink_file);
g_free(real_file);
}