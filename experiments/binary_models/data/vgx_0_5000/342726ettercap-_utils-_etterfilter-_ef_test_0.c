void test_filter(char *filename)
{
struct filter_op *fop;
struct filter_env *fenv;
struct filter_list *flist;
flist = NULL;
u_int32 eip = 0;




if (filter_load_file(filename, &flist, 1) != E_SUCCESS) {
ef_exit(-1);
}
fenv = &flist->env;


fop = fenv->chain;

USER_MSG("Disassebling \"%s\" content...\n\n", filename);


while (eip < (fenv->len / sizeof(struct filter_op)) ) {


print_fop(&fop[eip], eip);


eip++;
}

USER_MSG("\n %d instructions decoded.\n\n", (int)(fenv->len / sizeof(struct filter_op)));

ef_exit(0);
}