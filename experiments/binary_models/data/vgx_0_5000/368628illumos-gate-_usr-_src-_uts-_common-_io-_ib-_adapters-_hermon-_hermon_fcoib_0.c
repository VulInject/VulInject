int
hermon_fcoib_check_exch_base_off(hermon_state_t *state, int port,
ibt_fc_attr_t *fcp)
{
hermon_fcoib_t	*fcoib;
int		exch_base_off;

port--;		
ASSERT(port >= 0 && port < HERMON_MAX_PORTS);
fcoib = &state->hs_fcoib;

exch_base_off = fcp->fc_exch_base_off;
if (exch_base_off >= fcoib->hfc_fexch_qps_per_port)
exch_base_off = -1;

return (exch_base_off);
}