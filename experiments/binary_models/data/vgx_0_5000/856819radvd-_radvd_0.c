static void reset_prefix_lifetimes_foo(struct Interface *iface, void *data)
{
flog(LOG_INFO, "Resetting prefix lifetimes on %s", iface->props.name);

for (struct AdvPrefix *prefix = iface->AdvPrefixList; prefix; prefix = prefix->next) {
if (prefix->DecrementLifetimesFlag) {
char pfx_str[INET6_ADDRSTRLEN];
addrtostr(&prefix->Prefix, pfx_str, sizeof(pfx_str));
dlog(LOG_DEBUG, 4, "%s/%u%%%s plft reset from %u to %u secs", pfx_str, prefix->PrefixLen,
iface->props.name, prefix->curr_preferredlft, prefix->AdvPreferredLifetime);
dlog(LOG_DEBUG, 4, "%s/%u%%%s vlft reset from %u to %u secs", pfx_str, prefix->PrefixLen,
iface->props.name, prefix->curr_validlft, prefix->AdvValidLifetime);
prefix->curr_validlft = prefix->AdvValidLifetime;
prefix->curr_preferredlft = prefix->AdvPreferredLifetime;
}
}
}