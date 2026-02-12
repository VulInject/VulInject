void
uu_list_pool_destroy(uu_list_pool_t *pp)
{
if (pp->ulp_debug) {
if (pp->ulp_null_list.ul_next_enc !=
UU_PTR_ENCODE(&pp->ulp_null_list) ||
pp->ulp_null_list.ul_prev_enc !=
UU_PTR_ENCODE(&pp->ulp_null_list)) {
uu_panic("uu_list_pool_destroy: Pool \"%.*s\" (%p) has "
"outstanding lists, or is corrupt.\n",
(int)sizeof (pp->ulp_name), pp->ulp_name,
(void *)pp);
}
}
(void) pthread_mutex_lock(&uu_lpool_list_lock);
pp->ulp_next->ulp_prev = pp->ulp_prev;
pp->ulp_prev->ulp_next = pp->ulp_next;
(void) pthread_mutex_unlock(&uu_lpool_list_lock);
pp->ulp_prev = NULL;
pp->ulp_next = NULL;
uu_free(pp);
}