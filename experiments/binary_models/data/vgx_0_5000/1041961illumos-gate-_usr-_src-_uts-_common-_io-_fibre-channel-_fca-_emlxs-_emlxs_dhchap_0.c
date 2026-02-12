static void
emlxs_cmpl_dhchap_challenge_issue(fc_packet_t *pkt)
{
emlxs_port_t *port = pkt->pkt_ulp_private;
emlxs_buf_t *sbp;
NODELIST *ndlp;
uint32_t did;

did = pkt->pkt_cmd_fhdr.d_id;
sbp = (emlxs_buf_t *)pkt->pkt_fca_private;
ndlp = sbp->node;

if (!ndlp) {
ndlp = emlxs_node_find_did(port, did, 1);
}
if (pkt->pkt_state != FC_PKT_SUCCESS) {
EMLXS_MSGF(EMLXS_CONTEXT, &emlxs_fcsp_detail_msg,
"cmpl_dhchap_challenge_issue: did=0x%x state=%x",
did, pkt->pkt_state);
} else {
EMLXS_MSGF(EMLXS_CONTEXT, &emlxs_fcsp_detail_msg,
"cmpl_dhchap_challenge_issue: did=0x%x. Succcess.",
did);
}

if (ndlp) {
if (pkt->pkt_state == FC_PKT_SUCCESS) {
(void) emlxs_dhchap_state_machine(port, NULL, NULL,
NULL, ndlp, NODE_EVENT_CMPL_AUTH_MSG);
}
}
emlxs_pkt_free(pkt);

return;

} 