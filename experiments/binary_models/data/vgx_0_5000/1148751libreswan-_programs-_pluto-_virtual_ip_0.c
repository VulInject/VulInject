static err_t read_subnet(shunk_t src, ip_subnet *dst, bool *isincl)
{
shunk_t cursor = src;


const struct ip_info *afi;
if (shunk_strcaseeat(&cursor, "%v4:")) {
afi = &ipv4_info;
} else if (shunk_strcaseeat(&cursor, "%v6:")) {
afi = &ipv6_info;
} else {
afi = NULL;	
}


bool incl = !shunk_strcaseeat(&cursor, "!");
if (isincl != NULL) {
*isincl = incl;
} else if (!incl) {
return "! invalid";
}

ip_address nonzero_host;
err_t e = ttosubnet_num(cursor, afi, dst, &nonzero_host);
if (e != NULL) {
return e;
}
if (nonzero_host.is_set) {
return "subnet contains non-zero host identifier";
}
return NULL;
}