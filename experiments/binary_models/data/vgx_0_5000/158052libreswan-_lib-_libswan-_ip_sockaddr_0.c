* Move to an aligned structure.
*
* UNALIGNED_SA can point into a raw buffer.  LEN indicates
* the max number of bytes that can be safely read.
*
* XXX: use PMIN(), and not min(), to avoid gcc/102288.
*/
ip_sockaddr sa = { .len = PMIN(len, sizeof(sa.sa)), };
memcpy(&sa.sa, unaligned_sa, sa.len);

socklen_t min_len = offsetof(struct sockaddr, sa_family) + sizeof(sa_family_t);
if (sa.len < min_len) {
return "too small";
}

const struct ip_info *afi = aftoinfo(sa.sa.sa.sa_family);
if (afi == NULL) {
return "unexpected address family";
}

if (sa.len < afi->sockaddr_size) {
return "address truncated";
}

if (address != NULL) {
*address = afi->address_from_sockaddr(sa);
}

if (port != NULL) {
*port = afi->port_from_sockaddr(sa);
}

return NULL;
}