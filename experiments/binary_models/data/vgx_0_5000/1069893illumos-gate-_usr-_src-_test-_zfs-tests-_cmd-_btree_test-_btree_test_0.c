static int
do_negative_test(zfs_btree_t *bt, char *test_name)
{
int rval = 0;
struct rlimit rlim = {0};

(void) setrlimit(RLIMIT_CORE, &rlim);

if (strcmp(test_name, "insert_duplicate") == 0) {
rval = insert_duplicate(bt);
} else if (strcmp(test_name, "remove_missing") == 0) {
rval = remove_missing(bt);
}


(void) fprintf(stderr, "Test: %s returned %d.\n", test_name, rval);
return (0);
}