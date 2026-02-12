static void  *allocate_memory(void *ptr, int prot, int mapping, char data, size_t map_size)
{
void *map_ptr = mmap(ptr, map_size, PROT_WRITE, mapping, -1, 0);

if (!map_ptr) {
perror("mmap");
return NULL;
}
memset(map_ptr, data, map_size);
if (mprotect(map_ptr, map_size, prot)) {
perror("mprotect");
munmap(map_ptr, map_size);
return NULL;
}

return map_ptr;
}