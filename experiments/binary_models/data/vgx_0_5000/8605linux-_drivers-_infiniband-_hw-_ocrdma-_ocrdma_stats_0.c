static int ocrdma_add_stat(char *start, char *pcur,
char *name, u64 count)
{
char buff[128] = {0};
int cpy_len = 0;

snprintf(buff, 128, "%s: %llu\n", name, count);
cpy_len = strlen(buff);

if (pcur + cpy_len > start + OCRDMA_MAX_DBGFS_MEM) {
pr_err("%s: No space in stats buff\n", __func__);
return 0;
}

memcpy(pcur, buff, cpy_len);
return cpy_len;
}