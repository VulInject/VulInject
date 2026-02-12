static void local_coprocessor_flush_all(void *info)
{
struct thread_info *ti = info;
struct thread_info **coprocessor_owner;
unsigned long old_cpenable;
int i;

coprocessor_owner = this_cpu_ptr(&exc_table)->coprocessor_owner;
old_cpenable = xtensa_xsr(ti->cpenable, cpenable);

for (i = 0; i < XCHAL_CP_MAX; i++) {
if (coprocessor_owner[i] == ti)
coprocessor_flush(ti, i);
}
xtensa_set_sr(old_cpenable, cpenable);
}