static int posix_addlimit(int limit, const char *name, zval *return_value) {
int result;
struct rlimit rl;
char hard[80];
char soft[80];

snprintf(hard, 80, "hard %s", name);
snprintf(soft, 80, "soft %s", name);

result = getrlimit(limit, &rl);
if (result < 0) {
POSIX_G(last_error) = errno;
return FAILURE;
}

if (rl.rlim_cur == RLIM_INFINITY) {
add_assoc_stringl(return_value, soft, UNLIMITED_STRING, sizeof(UNLIMITED_STRING)-1);
} else {
add_assoc_long(return_value, soft, rl.rlim_cur);
}

if (rl.rlim_max == RLIM_INFINITY) {
add_assoc_stringl(return_value, hard, UNLIMITED_STRING, sizeof(UNLIMITED_STRING)-1);
} else {
add_assoc_long(return_value, hard, rl.rlim_max);
}

return SUCCESS;
}