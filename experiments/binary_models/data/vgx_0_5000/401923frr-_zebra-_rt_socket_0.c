static int kernel_rtm_add_labels(struct mpls_label_stack *nh_label,
struct sockaddr_mpls *smpls)
{
if (nh_label->num_labels > 1) {
flog_warn(EC_ZEBRA_MAX_LABELS_PUSH,
"%s: can't push %u labels at once (maximum is 1)",
__func__, nh_label->num_labels);
return -1;
}

memset(smpls, 0, sizeof(*smpls));
smpls->smpls_len = sizeof(*smpls);
smpls->smpls_family = AF_MPLS;
smpls->smpls_label = htonl(nh_label->label[0] << MPLS_LABEL_OFFSET);

return 0;
}