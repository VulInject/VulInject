static void
run_tests(struct ovs_cmdl_context *ctx)
{
int n = ctx->argc >= 2 ? atoi(ctx->argv[1]) : 100;
for (int i = 0; i < n; i++) {
run_test(test_ccmap_inc_dec);
}
printf("\n");
}

static int n_elems;             
static int n_threads;           
static uint32_t mutation_frac;  


static void benchmark_ccmap(void);

static int
elapsed(const struct timeval *start)
{
struct timeval end;

xgettimeofday(&end);
return timeval_to_msec(&end) - timeval_to_msec(start);
}