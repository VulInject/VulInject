static void _mysqlnd_efree(void *ptr MYSQLND_MEM_D)
{
size_t free_amount = 0;
bool collect_memory_statistics = MYSQLND_G(collect_memory_statistics);
TRACE_ALLOC_ENTER(mysqlnd_efree_name);

{
char * fn = strrchr(__zend_filename, PHP_DIR_SEPARATOR);
TRACE_ALLOC_INF_FMT("file=%-15s line=%4d", fn? fn + 1:__zend_filename, __zend_lineno);
}
TRACE_ALLOC_INF_FMT("ptr=%p", ptr);

if (ptr) {
if (collect_memory_statistics) {
free_amount = *(size_t *)(((char*)ptr) - sizeof(size_t));
TRACE_ALLOC_INF_FMT("ptr=%p size=%zu", ((char*)ptr) - sizeof(size_t), free_amount);
}
efree_rel(REAL_PTR(ptr));
}

if (collect_memory_statistics) {
MYSQLND_INC_GLOBAL_STATISTIC_W_VALUE2(STAT_MEM_EFREE_COUNT, 1, STAT_MEM_EFREE_AMOUNT, free_amount);
}
TRACE_ALLOC_VOID_RETURN;
}