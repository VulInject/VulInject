static int switch_pg_num(struct multipath *m, const char *pgstr)
{
struct priority_group *pg;
unsigned int pgnum;
unsigned long flags;
char dummy;

if (!pgstr || (sscanf(pgstr, "%u%c", &pgnum, &dummy) != 1) || !pgnum ||
!m->nr_priority_groups || (pgnum > m->nr_priority_groups)) {
DMWARN("invalid PG number supplied to %s", __func__);
return -EINVAL;
}

spin_lock_irqsave(&m->lock, flags);
list_for_each_entry(pg, &m->priority_groups, list) {
pg->bypassed = false;
if (--pgnum)
continue;

m->current_pgpath = NULL;
m->current_pg = NULL;
m->next_pg = pg;
}
spin_unlock_irqrestore(&m->lock, flags);

schedule_work(&m->trigger_event);
return 0;
}