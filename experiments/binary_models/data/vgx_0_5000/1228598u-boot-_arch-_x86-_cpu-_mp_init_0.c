static int bsp_do_flight_plan(struct udevice *cpu, struct mp_flight_plan *plan,
int num_aps)
{
int i;
int ret = 0;
const int timeout_us = 100000;
const int step_us = 100;

for (i = 0; i < plan->num_records; i++) {
struct mp_flight_record *rec = &plan->records[i];


if (atomic_read(&rec->barrier) == 0) {

if (wait_for_aps(&rec->cpus_entered, num_aps,
timeout_us, step_us)) {
debug("MP record %d timeout\n", i);
ret = -ETIMEDOUT;
}
}

if (rec->bsp_call != NULL)
rec->bsp_call(cpu, rec->bsp_arg);

release_barrier(&rec->barrier);
}

return ret;
}