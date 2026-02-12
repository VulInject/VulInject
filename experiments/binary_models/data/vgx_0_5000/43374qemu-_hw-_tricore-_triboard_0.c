static void tricore_load_kernel(const char *kernel_filename)
{
uint64_t entry;
long kernel_size;
TriCoreCPU *cpu;
CPUTriCoreState *env;

kernel_size = load_elf(kernel_filename, NULL,
NULL, NULL, &entry, NULL,
NULL, NULL, 0,
EM_TRICORE, 1, 0);
if (kernel_size <= 0) {
error_report("no kernel file '%s'", kernel_filename);
exit(1);
}
cpu = TRICORE_CPU(first_cpu);
env = &cpu->env;
env->PC = entry;
}