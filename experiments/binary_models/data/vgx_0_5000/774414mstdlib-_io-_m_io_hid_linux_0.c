static char *hid_get_property(const char *basepath, const char *property)
{
unsigned char *result;
char           path[1024];
size_t         len;
M_fs_error_t   error;


if (M_str_isempty(basepath) || M_str_isempty(property))
return NULL;


M_snprintf(path, sizeof(path), "%s/%s", basepath, property);


if (M_fs_perms_can_access(path, 0) != M_FS_ERROR_SUCCESS)
return NULL;

error = M_fs_file_read_bytes(path, 0, &result, &len);
if (error != M_FS_ERROR_SUCCESS)
return NULL;


M_str_delete_newlines((char *)result);
return (char *)result;
}