static uint64_t ipmi_kcs_ioport_read(void *opaque, hwaddr addr, unsigned size)
{
IPMIInterface *ii = opaque;
IPMIInterfaceClass *iic = IPMI_INTERFACE_GET_CLASS(ii);
IPMIKCS *ik = iic->get_backend_data(ii);
uint32_t ret;

switch (addr & ik->size_mask) {
case 0:
ret = ik->data_out_reg;
IPMI_KCS_SET_OBF(ik->status_reg, 0);
if (ik->obf_irq_set) {
ik->obf_irq_set = 0;
if (!ik->atn_irq_set) {
ipmi_kcs_lower_irq(ik);
}
}
break;

case 1:
ret = ik->status_reg;
if (ik->atn_irq_set) {
ik->atn_irq_set = 0;
if (!ik->obf_irq_set) {
ipmi_kcs_lower_irq(ik);
}
}
break;

default:
ret = 0xff;
}
return ret;
}