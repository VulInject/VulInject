static char **M_io_process_list_to_args(const char *command, M_list_str_t *list)
{
char              **args     = NULL;
size_t              i        = 0;
size_t              len      = M_list_str_len(list);


args    = M_malloc_zero(sizeof(*args) * (len + 2));
args[0] = M_strdup(command);
for (i=0; i<len; i++) {
args[i+1] = M_strdup(M_list_str_at(list, i));
}

return args;
}