bool redirect_ike_auth(struct ike_sa *ike, struct msg_digest *md, stf_status *redirect_status)
{
if (md->pd[PD_v2N_REDIRECT] == NULL) {
dbg("redirect: no redirect payload in IKE_AUTH reply");
return false;
}

dbg("redirect: received v2N_REDIRECT in authenticated IKE_AUTH reply");
if (!LIN(POLICY_ACCEPT_REDIRECT_YES, ike->sa.st_connection->policy)) {
dbg("ignoring v2N_REDIRECT, we don't accept being redirected");
return false;
}

ip_address redirect_ip;
err_t err = parse_redirect_payload(&md->pd[PD_v2N_REDIRECT]->pbs,
ike->sa.st_connection->config->redirect.accept,
NULL,
&redirect_ip,
ike->sa.st_logger);
if (err != NULL) {
dbg("redirect: warning: parsing of v2N_REDIRECT payload failed: %s", err);
return false;
}




ike->sa.st_connection->temp_vars.redirect_ip = redirect_ip;
schedule_callback("IKE_AUTH redirect", ike->sa.st_serialno,
initiate_redirect, NULL);
*redirect_status = STF_SUSPEND;
return true;
}