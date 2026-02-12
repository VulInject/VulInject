int asn1_parse_oid(uint8_t *buf, size_t len, struct asn1_oid *oid)
{
uint8_t *pos, *end;
unsigned long val;
uint8_t tmp;

memset(oid, 0, sizeof(*oid));

pos = buf;
end = buf + len;

while (pos < end) {
val = 0;

do {
if (pos >= end)
return -1;
tmp = *pos++;
val = (val << 7) | (tmp & 0x7f);
} while (tmp & 0x80);

if (oid->len >= ASN1_MAX_OID_LEN) {
DEBUG_MSG("ASN.1: Too long OID value");
return -1;
}
if (oid->len == 0) {

oid->oid[0] = val / 40;
if (oid->oid[0] > 2)
oid->oid[0] = 2;
oid->oid[1] = val - oid->oid[0] * 40;
oid->len = 2;
} else
oid->oid[oid->len++] = val;
}

return 0;
}