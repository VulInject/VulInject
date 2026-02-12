bool netlink_policy(struct nlmsghdr *hdr, bool enoent_ok, const char *text_said)
{
size_t len = hdr->nlmsg_len;

fprintf(stderr, "writing netlink policy for %s\n", text_said);
hexdump(stderr, (char *)hdr, 0, len);
errno = 0;
return TRUE;
}



struct kernel_ops noklips_kernel_ops;
struct kernel_ops mast_kernel_ops;
struct kernel_ops klips_kernel_ops;
struct kernel_ops unit_kernel_ops = {
kern_name: "netkeyunit",
type: USE_NETKEY,
inbound_eroute:  TRUE,
policy_lifetime: TRUE,
async_fdp: NULL,