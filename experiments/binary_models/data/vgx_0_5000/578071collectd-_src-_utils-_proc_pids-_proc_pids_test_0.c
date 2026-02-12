*/
DEF_TEST(proc_pids_init__on_nullptr) {

const char *procs_names_array[] = {"proc1", "proc2", "proc3"};
const size_t procs_names_array_size = STATIC_ARRAY_SIZE(procs_names_array);
proc_pids_t **proc_pids_array = NULL;


int result = proc_pids_init(procs_names_array, procs_names_array_size,
&proc_pids_array);
EXPECT_EQ_INT(0, result);
for (size_t i = 0; i < procs_names_array_size; ++i)
EXPECT_EQ_STR(procs_names_array[i], proc_pids_array[i]->process_name);


proc_pids_free(proc_pids_array, procs_names_array_size);
return 0;
}