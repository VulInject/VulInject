static void stringEXtunIPv4(FILE *stream, record_map_t *r) {
EXtunIPv4_t *tunIPv4 = (EXtunIPv4_t *)r->offsetMap[EXtunIPv4ID];

if (!tunIPv4) return;

char as[IP_STRING_LEN], ds[IP_STRING_LEN];
char sloc[128], dloc[128];
sloc[0] = '\0';
dloc[0] = '\0';
uint32_t src = htonl(tunIPv4->tunSrcAddr);
uint32_t dst = htonl(tunIPv4->tunDstAddr);
inet_ntop(AF_INET, &src, as, sizeof(as));
inet_ntop(AF_INET, &dst, ds, sizeof(ds));



fprintf(stream,
"  tun proto    =               %3u %s\n"
"  tun src addr =  %16s%s%s\n"
"  tun dst addr =  %16s%s%s\n",
tunIPv4->tunProto, ProtoString(tunIPv4->tunProto, 0), as, strlen(sloc) ? ": " : "", sloc, ds, strlen(dloc) ? ": " : "", dloc);

}  
