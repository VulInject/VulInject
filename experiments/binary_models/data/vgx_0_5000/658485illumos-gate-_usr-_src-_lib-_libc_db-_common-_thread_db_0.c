static struct ps_prochandle *
ph_lock_ta(td_thragent_t *ta_p, td_err_e *err)
{
struct ps_prochandle *ph_p = NULL;
td_err_e error;

if (ta_p == NULL || ta_p->initialized == -1) {
*err = TD_BADTA;
} else if (rw_rdlock(&ta_p->rwlock) != 0) {	
*err = TD_BADTA;
} else if ((ph_p = ta_p->ph_p) == NULL) {
(void) rw_unlock(&ta_p->rwlock);
*err = TD_BADPH;
} else if (ta_p->initialized != 2 &&
(error = td_read_bootstrap_data(ta_p)) != TD_OK) {
(void) rw_unlock(&ta_p->rwlock);
ph_p = NULL;
*err = error;
} else {
*err = TD_OK;
}

return (ph_p);
}