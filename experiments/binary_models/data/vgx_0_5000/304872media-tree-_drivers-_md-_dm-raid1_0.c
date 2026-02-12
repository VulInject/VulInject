static int get_mirror(struct mirror_set *ms, struct dm_target *ti,
unsigned int mirror, char **argv)
{
unsigned long long offset;
char dummy;
int ret;

if (sscanf(argv[1], "%llu%c", &offset, &dummy) != 1) {
ti->error = "Invalid offset";
return -EINVAL;
}

ret = dm_get_device(ti, argv[0], dm_table_get_mode(ti->table),
&ms->mirror[mirror].dev);
if (ret) {
ti->error = "Device lookup failure";
return ret;
}

ms->mirror[mirror].ms = ms;
atomic_set(&(ms->mirror[mirror].error_count), 0);
ms->mirror[mirror].error_type = 0;
ms->mirror[mirror].offset = offset;

return 0;
}