static void ics_spapr_realize(DeviceState *dev, Error **errp)
{
ICSState *ics = ICS_SPAPR(dev);
ICSStateClass *icsc = ICS_GET_CLASS(ics);
Error *local_err = NULL;

icsc->parent_realize(dev, &local_err);
if (local_err) {
error_propagate(errp, local_err);
return;
}

spapr_rtas_register(RTAS_IBM_SET_XIVE, "ibm,set-xive", rtas_set_xive);
spapr_rtas_register(RTAS_IBM_GET_XIVE, "ibm,get-xive", rtas_get_xive);
spapr_rtas_register(RTAS_IBM_INT_OFF, "ibm,int-off", rtas_int_off);
spapr_rtas_register(RTAS_IBM_INT_ON, "ibm,int-on", rtas_int_on);

spapr_register_hypercall(H_CPPR, h_cppr);
spapr_register_hypercall(H_IPI, h_ipi);
spapr_register_hypercall(H_XIRR, h_xirr);
spapr_register_hypercall(H_XIRR_X, h_xirr_x);
spapr_register_hypercall(H_EOI, h_eoi);
spapr_register_hypercall(H_IPOLL, h_ipoll);
}