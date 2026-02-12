static void ul_rpc_snapshot(rpc_t* rpc, void *ctx) {
str filename;
time_t current_time;
struct tm *t;
char str_time[100];

if (rpc->scan(ctx, "S", &filename) < 1) {
rpc->fault(ctx, 400, "required filename to dump usrloc snapshot to");
return;
}


LM_DBG("Dumping S-CSCF usrloc snapshot to file: [%.*s]\n", filename.len, filename.s);

current_time = time(NULL);
t = localtime(&current_time);
strftime(str_time, 100, "%Y-%m-%d %H:%M:%S", t);
FILE *f = fopen(filename.s, "a");
fprintf(f, "########################################################\n");
fprintf(f, "Dumping USRLOC for S-CSCF: %s\n", str_time);
fprintf(f, "########################################################\n\n");
print_all_udomains(f);
fflush(f);
fclose(f);
}