static apr_status_t use_staged_acct(md_acme_t *acme, struct md_store_t *store,
const md_t *md, apr_pool_t *p)
{
md_acme_acct_t *acct;
md_pkey_t *pkey;
apr_status_t rv;

if (APR_SUCCESS == (rv = md_acme_acct_load(&acct, &pkey, store, 
MD_SG_STAGING, md->name, acme->p))) {
acme->acct_id = NULL;
acme->acct = acct;
acme->acct_key = pkey;
rv = md_acme_acct_validate(acme, NULL, p);
}
return rv;
}