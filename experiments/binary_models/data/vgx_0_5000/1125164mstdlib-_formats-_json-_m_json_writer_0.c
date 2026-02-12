M_fs_error_t M_json_write_file(const M_json_node_t *node, const char *path, M_uint32 flags)
{
char         *out;
M_fs_error_t  res;

out = M_json_write(node, flags, NULL);
if (out == NULL)
return M_FS_ERROR_INVALID;

res = M_fs_file_write_bytes(path, (unsigned char *)out, 0, M_FS_FILE_MODE_OVERWRITE, NULL);

M_free(out);
return res;
}