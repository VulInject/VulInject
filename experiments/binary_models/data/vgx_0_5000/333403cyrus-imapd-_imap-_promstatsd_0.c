static int accum_stats(const struct prom_stats *stats, void *rock)
{
struct prom_stats *stats_copy;
hash_table *h = (hash_table *) rock;
int i;

stats_copy = hash_lookup(stats->ident, h);
if (!stats_copy) {
stats_copy = xzmalloc(sizeof *stats_copy);
strcpy(stats_copy->ident, stats->ident);
hash_insert(stats->ident, stats_copy, h);
}

for (i = 0; i < PROM_NUM_METRICS; i++) {
stats_copy->metrics[i].value += stats->metrics[i].value;
stats_copy->metrics[i].last_updated = MAX(stats_copy->metrics[i].last_updated,
stats->metrics[i].last_updated);
}

return 0;
}