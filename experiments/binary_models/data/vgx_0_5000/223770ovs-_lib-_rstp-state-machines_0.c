void
process_received_bpdu__(struct rstp_port *p, const void *bpdu_,
size_t bpdu_size)
OVS_REQUIRES(rstp_mutex)
{
struct rstp *rstp = p->rstp;
struct rstp_bpdu *bpdu = (struct rstp_bpdu *)bpdu_;

if (!p->port_enabled) {
return;
}
if (p->rcvd_bpdu) {
return;
}


if (bpdu->bpdu_type == RAPID_SPANNING_TREE_BPDU) {
uint8_t role = (bpdu->flags & ROLE_FLAG_MASK) >> ROLE_FLAG_SHIFT;

if (role == PORT_UNKN) {
bpdu->bpdu_type = CONFIGURATION_BPDU;
}
}

if (validate_received_bpdu(p, bpdu, bpdu_size) == 0) {
p->rcvd_bpdu = true;
p->rx_rstp_bpdu_cnt++;

memcpy(&p->received_bpdu_buffer, bpdu, sizeof(struct rstp_bpdu));

rstp->changes = true;
move_rstp__(rstp);
} else {
VLOG_DBG("%s, port %u: Bad STP or RSTP BPDU received", p->rstp->name,
p->port_number);
p->error_count++;
}
}