static inline struct dns_msg*
rpz_synthesize_localdata_from_rrset(struct rpz* ATTR_UNUSED(r), struct module_qstate* ms,
struct query_info* qi, struct local_rrset* rrset, struct auth_zone* az)
{
struct dns_msg* msg = NULL;
struct reply_info* new_reply_info;
struct ub_packed_rrset_key* rp;


msg = rpz_dns_msg_new(ms->region);
if(msg == NULL) { return NULL; }

new_reply_info = construct_reply_info_base(ms->region,
LDNS_RCODE_NOERROR | BIT_QR | BIT_AA | BIT_RA,
1, 
0, 
0, 
0, 
1, 
0, 
0, 
1, 
sec_status_insecure);
if(new_reply_info == NULL) {
log_err("out of memory");
return NULL;
}
new_reply_info->authoritative = 1;
rp = respip_copy_rrset(rrset->rrset, ms->region);
if(rp == NULL) {
log_err("out of memory");
return NULL;
}
rp->rk.dname = qi->qname;
rp->rk.dname_len = qi->qname_len;

rp->rk.flags |= PACKED_RRSET_RPZ;
new_reply_info->rrsets[0] = rp;
msg->rep = new_reply_info;
if(!rpz_add_soa(msg->rep, ms, az))
return NULL;
return msg;
}