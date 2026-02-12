static caddr_t ipc_get_info(cid_t cid, int cmd, int version, int stsize,
int *nmemb) 
{
int size = 0;
caddr_t buff = NULL;

if (get_ipc_info(cid, cmd, version, buff, &size) < 0) {
if (errno != ENOSPC) {
WARNING("ipc plugin: get_ipc_info: %s", STRERRNO);
return NULL;
}
}

if (size == 0)
return NULL;

if (size % stsize) {
ERROR("ipc plugin: ipc_get_info: missmatch struct size and buffer size");
return NULL;
}

*nmemb = size / stsize;

buff = malloc(size);
if (buff == NULL) {
ERROR("ipc plugin: ipc_get_info malloc failed.");
return NULL;
}

if (get_ipc_info(cid, cmd, version, buff, &size) < 0) {
WARNING("ipc plugin: get_ipc_info: %s", STRERRNO);
free(buff);
return NULL;
}

return buff;
} 