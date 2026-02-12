static int
subtlv_decode_ipsec_ta(
struct bgp_attr_encap_subtlv 	*subtlv,
struct bgp_tea_subtlv_ipsec_ta	*st)
{
st->authenticator_length = subtlv->length - 2;
if (st->authenticator_length > sizeof(st->value)) {
zlog_debug("%s, authenticator length %d exceeds storage maximum %d",
__func__, st->authenticator_length, (int)sizeof(st->value));
return -1;
}
st->authenticator_type = (subtlv->value[0] << 8) | subtlv->value[1];
memcpy(st->value, subtlv->value + 2,  st->authenticator_length);
return 0;
}