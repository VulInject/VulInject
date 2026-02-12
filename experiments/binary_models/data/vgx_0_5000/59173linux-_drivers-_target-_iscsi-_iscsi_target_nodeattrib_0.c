int iscsit_na_nopin_response_timeout(
struct iscsi_node_acl *acl,
u32 nopin_response_timeout)
{
struct iscsi_node_attrib *a = &acl->node_attrib;

if (nopin_response_timeout > NA_NOPIN_RESPONSE_TIMEOUT_MAX) {
pr_err("Requested NopIn Response Timeout %u larger"
" than maximum %u\n", nopin_response_timeout,
NA_NOPIN_RESPONSE_TIMEOUT_MAX);
return -EINVAL;
} else if (nopin_response_timeout < NA_NOPIN_RESPONSE_TIMEOUT_MIN) {
pr_err("Requested NopIn Response Timeout %u smaller"
" than minimum %u\n", nopin_response_timeout,
NA_NOPIN_RESPONSE_TIMEOUT_MIN);
return -EINVAL;
}

a->nopin_response_timeout = nopin_response_timeout;
pr_debug("Set NopIn Response Timeout to %u for"
" Initiator Node %s\n", a->nopin_timeout,
iscsit_na_get_initiatorname(acl));

return 0;
}