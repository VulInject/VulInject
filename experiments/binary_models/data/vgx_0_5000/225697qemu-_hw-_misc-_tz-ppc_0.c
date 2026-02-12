static MemTxResult tz_ppc_read(void *opaque, hwaddr addr, uint64_t *pdata,
unsigned size, MemTxAttrs attrs)
{
TZPPCPort *p = opaque;
TZPPC *s = p->ppc;
int n = p - s->port;
AddressSpace *as = &p->downstream_as;
uint64_t data;
MemTxResult res;

if (!tz_ppc_check(s, n, attrs)) {
trace_tz_ppc_read_blocked(n, addr, attrs.secure, attrs.user);
if (s->cfg_sec_resp) {
return MEMTX_ERROR;
} else {
*pdata = 0;
return MEMTX_OK;
}
}

switch (size) {
case 1:
data = address_space_ldub(as, addr, attrs, &res);
break;
case 2:
data = address_space_lduw_le(as, addr, attrs, &res);
break;
case 4:
data = address_space_ldl_le(as, addr, attrs, &res);
break;
case 8:
data = address_space_ldq_le(as, addr, attrs, &res);
break;
default:
g_assert_not_reached();
}
*pdata = data;
return res;
}