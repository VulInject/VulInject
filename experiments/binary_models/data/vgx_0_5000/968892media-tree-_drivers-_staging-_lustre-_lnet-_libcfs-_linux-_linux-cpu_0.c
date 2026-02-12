int
cfs_cpt_bind(struct cfs_cpt_table *cptab, int cpt)
{
cpumask_t *cpumask;
nodemask_t *nodemask;
int rc;
int i;

LASSERT(cpt == CFS_CPT_ANY || (cpt >= 0 && cpt < cptab->ctb_nparts));

if (cpt == CFS_CPT_ANY) {
cpumask = cptab->ctb_cpumask;
nodemask = cptab->ctb_nodemask;
} else {
cpumask = cptab->ctb_parts[cpt].cpt_cpumask;
nodemask = cptab->ctb_parts[cpt].cpt_nodemask;
}

if (cpumask_any_and(cpumask, cpu_online_mask) >= nr_cpu_ids) {
CERROR("No online CPU found in CPU partition %d, did someone do CPU hotplug on system? You might need to reload Lustre modules to keep system working well.\n",
cpt);
return -EINVAL;
}

for_each_online_cpu(i) {
if (cpumask_test_cpu(i, cpumask))
continue;

rc = set_cpus_allowed_ptr(current, cpumask);
set_mems_allowed(*nodemask);
if (!rc)
schedule(); 

return rc;
}


return 0;
}