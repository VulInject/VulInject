void
eib_mac_stop(eib_t *ss)
{
eib_vnic_t *vnic;
link_state_t cur_link_state = ss->ei_node_state->ns_link_state;
int ndx;


for (ndx = EIB_MAX_VNICS - 1; ndx >= 0; ndx--) {
if ((vnic = ss->ei_vnic[ndx]) != NULL)
eib_vnic_delete(ss, vnic);
}


eib_rb_mac_start(ss, NULL);


mac_unicst_update(ss->ei_mac_hdl, eib_zero_mac);


if (cur_link_state == LINK_STATE_UP)
eib_mac_link_state(ss, LINK_STATE_UNKNOWN, B_TRUE);
}