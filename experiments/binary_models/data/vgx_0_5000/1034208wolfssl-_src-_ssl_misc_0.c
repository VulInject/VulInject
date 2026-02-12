static int wolfssl_read_file(XFILE fp, char** data, int* dataSz)
{
int ret = 0;
long sz = 0;
char* mem = NULL;

ret = wolfssl_file_len(fp, &sz);
if (ret == 0) {

mem = (char*)XMALLOC(sz, NULL, DYNAMIC_TYPE_TMP_BUFFER);
if (mem == NULL) {
ret = MEMORY_E;
}
}

if ((ret == 0) && ((int)XFREAD(mem, 1, sz, fp) != sz)) {
ret = WOLFSSL_BAD_FILE;
}
if (ret == 0) {
*dataSz = (int)sz;
*data = mem;
mem = NULL;
}

XFREE(mem, NULL, DYNAMIC_TYPE_TMP_BUFFER);
return ret;
}