}
EXPORT_SYMBOL(cfs_cpt_unset_cpumask);

int
cfs_cpt_set_node(struct cfs_cpt_table *cptab, int cpt, int node)
{
cpumask_t *mask;
int rc;

if (node < 0 || node >= MAX_NUMNODES) {
CDEBUG(D_INFO,
"Invalid NUMA id %d for CPU partition %d\n", node, cpt);
return 0;
}

mutex_lock(&cpt_data.cpt_mutex);

mask = cpt_data.cpt_cpumask;
cfs_node_to_cpumask(node, mask);

rc = cfs_cpt_set_cpumask(cptab, cpt, mask);

mutex_unlock(&cpt_data.cpt_mutex);

return rc;
}