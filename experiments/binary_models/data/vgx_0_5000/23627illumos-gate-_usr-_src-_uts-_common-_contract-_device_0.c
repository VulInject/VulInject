ct_ack_t
contract_device_negotiate(dev_info_t *dip, dev_t dev, int spec_type,
uint_t evtype)
{
int	result;

ASSERT(dip);
ASSERT(dev != NODEV);
ASSERT(dev != DDI_DEV_T_ANY);
ASSERT(dev != DDI_DEV_T_NONE);
ASSERT(spec_type == S_IFBLK || spec_type == S_IFCHR);

result = CT_NACK;
switch (evtype) {
case CT_DEV_EV_OFFLINE:
result = contract_device_offline(dip, dev, spec_type);
break;
default:
cmn_err(CE_PANIC, "contract_device_negotiate(): Negotiation "
"not supported: event (%d) for dev_t (%lu) and spec (%d), "
"dip (%p)", evtype, dev, spec_type, (void *)dip);
break;
}

return (result);
}