static struct pim_msdp_sa *pim_msdp_sa_new(struct pim_instance *pim,
pim_sgaddr *sg, struct in_addr rp)
{
struct pim_msdp_sa *sa;

sa = XCALLOC(MTYPE_PIM_MSDP_SA, sizeof(*sa));

sa->pim = pim;
sa->sg = *sg;
snprintfrr(sa->sg_str, sizeof(sa->sg_str), "%pSG", sg);
sa->rp = rp;
sa->uptime = pim_time_monotonic_sec();


sa = hash_get(pim->msdp.sa_hash, sa, hash_alloc_intern);
listnode_add_sort(pim->msdp.sa_list, sa);

if (PIM_DEBUG_MSDP_EVENTS) {
zlog_debug("MSDP SA %s created", sa->sg_str);
}

return sa;
}