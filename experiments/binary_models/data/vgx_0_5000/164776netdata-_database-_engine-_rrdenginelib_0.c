int check_file_properties(uv_file file, uint64_t *file_size, size_t min_size)
{
int ret;
uv_fs_t req;
uv_stat_t* s;

ret = uv_fs_fstat(NULL, &req, file, NULL);
if (ret < 0) {
fatal("uv_fs_fstat: %s\n", uv_strerror(ret));
}
fatal_assert(req.result == 0);
s = req.ptr;
if (!(s->st_mode & S_IFREG)) {
error("Not a regular file.\n");
uv_fs_req_cleanup(&req);
return UV_EINVAL;
}
if (s->st_size < min_size) {
error("File length is too short.\n");
uv_fs_req_cleanup(&req);
return UV_EINVAL;
}
*file_size = s->st_size;
uv_fs_req_cleanup(&req);

return 0;
}