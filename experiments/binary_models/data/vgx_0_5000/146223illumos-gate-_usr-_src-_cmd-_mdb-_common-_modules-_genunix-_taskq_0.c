int
taskq_ent(uintptr_t addr, uint_t flags, int argc, const mdb_arg_t *argv)
{
taskq_ent_t	taskq_ent;

if (!(flags & DCMD_ADDRSPEC)) {
return (DCMD_USAGE);
}

if (mdb_vread(&taskq_ent, sizeof (taskq_ent_t), addr) == -1) {
mdb_warn("failed to read taskq_ent_t at %p", addr);
return (DCMD_ERR);
}

if (DCMD_HDRSPEC(flags)) {
mdb_printf("%<u>%-?s %-?s %-s%</u>\n",
"ENTRY", "ARG", "FUNCTION");
}

mdb_printf("%-?p %-?p %a\n", addr, taskq_ent.tqent_arg,
taskq_ent.tqent_func);

return (DCMD_OK);
}