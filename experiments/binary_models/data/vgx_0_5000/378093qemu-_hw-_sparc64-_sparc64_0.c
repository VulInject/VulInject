static void main_cpu_reset(void *opaque)
{
ResetData *s = (ResetData *)opaque;
CPUSPARCState *env = &s->cpu->env;
static unsigned int nr_resets;

cpu_reset(CPU(s->cpu));

cpu_timer_reset(env->tick);
cpu_timer_reset(env->stick);
cpu_timer_reset(env->hstick);

env->gregs[1] = 0; 
env->gregs[2] = current_machine->ram_size; 
env->gregs[3] = 0; 
if (nr_resets++ == 0) {

env->pc = s->prom_addr + 0x20ULL;
} else {
env->pc = s->prom_addr + 0x40ULL;
}
env->npc = env->pc + 4;
}