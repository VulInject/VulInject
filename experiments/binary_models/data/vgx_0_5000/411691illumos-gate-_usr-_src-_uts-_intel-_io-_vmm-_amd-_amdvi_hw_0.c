static void
amdvi_destroy_domain(void *arg)
{
struct amdvi_domain *domain;

domain = (struct amdvi_domain *)arg;
KASSERT(domain, ("domain is NULL"));
printf("Destroying domain %d\n", domain->id);
if (domain->ptp)
amdvi_free_ptp(domain->ptp, domain->ptp_level);

amdvi_do_inv_domain(domain->id, false);
SLIST_REMOVE(&dom_head, domain, amdvi_domain, next);
free(domain, M_AMDVI);
}