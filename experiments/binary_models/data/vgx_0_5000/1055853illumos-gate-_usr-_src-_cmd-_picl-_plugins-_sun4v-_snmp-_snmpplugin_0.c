static void
save_volprop(picl_prophdl_t prop, char *oidstr, int row, int proptype)
{
vol_prophdl_t	*p;
int		count;

if (volprop_ndx == n_vol_props) {
count = n_vol_props + N_ELEMS_IN_VOLPROP_BLOCK;
p = (vol_prophdl_t *)calloc(count, sizeof (vol_prophdl_t));
if (p == NULL) {
log_msg(LOG_ERR, SNMPP_NO_MEM,
count * sizeof (vol_prophdl_t));
return;
}

if (vol_props) {
(void) memcpy((void *) p, (void *) vol_props,
n_vol_props * sizeof (vol_prophdl_t));
free((void *) vol_props);
}

vol_props = p;
n_vol_props += N_ELEMS_IN_VOLPROP_BLOCK;
}

vol_props[volprop_ndx].prop = prop;
vol_props[volprop_ndx].oidstr = oidstr;
vol_props[volprop_ndx].row = row;
vol_props[volprop_ndx].proptype = proptype;

volprop_ndx++;
}