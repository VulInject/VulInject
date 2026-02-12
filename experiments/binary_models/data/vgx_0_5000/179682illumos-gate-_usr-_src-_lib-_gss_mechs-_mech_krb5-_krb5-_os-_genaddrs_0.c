static void *cvtaddr (struct sockaddr_storage *a, struct addrpair *ap)
{
switch (ss2sa(a)->sa_family) {
case AF_INET:
SET (ap->port, ss2sin(a)->sin_port, ADDRTYPE_IPPORT);
SET (ap->addr, ss2sin(a)->sin_addr, ADDRTYPE_INET);
return a;
case AF_INET6:
SET (ap->port, ss2sin6(a)->sin6_port, ADDRTYPE_IPPORT);
if (IN6_IS_ADDR_V4MAPPED (&ss2sin6(a)->sin6_addr)) {
ap->addr.addrtype = ADDRTYPE_INET;

ap->addr.contents = (IPV6_ADDR_LEN - IPV4_ADDR_LEN) + 
(krb5_octet *) &ss2sin6(a)->sin6_addr;
ap->addr.length = IPV4_ADDR_LEN;
} else
SET (ap->addr, ss2sin6(a)->sin6_addr, ADDRTYPE_INET6);
return a;
default:
return 0;
}
}