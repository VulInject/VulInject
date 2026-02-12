int
do_devinfo(int syserrlog, char *pgname, int log_flag, int prt_flag)
{
Sys_tree sys_tree;		
Prom_node *root_node;		
di_node_t di_root_node;		
struct system_kstat_data sys_kstat; 
int retval = -1;


progname = pgname;
logging = log_flag;
print_flag = prt_flag;


sys_tree.sys_mem = NULL;
sys_tree.boards = NULL;
sys_tree.bd_list = NULL;
sys_tree.board_cnt = 0;


if ((di_root_node = di_init("/", DINFOCPYALL)) == DI_NODE_NIL) {
exit(_error("di_init() failed"));
}


if ((ph = di_prom_init()) == NULL) {
exit(_error("di_prom_init() failed"));
}


root_node = walk_di_tree(&sys_tree, NULL, di_root_node);


resolve_board_types(&sys_tree);

read_sun4u_kstats(&sys_tree, &sys_kstat);
retval = display(&sys_tree, root_node, &sys_kstat, syserrlog);

di_fini(di_root_node);
di_prom_fini(ph);
return (retval);
}