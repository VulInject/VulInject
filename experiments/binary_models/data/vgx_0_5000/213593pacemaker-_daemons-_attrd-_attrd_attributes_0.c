static int
attrd_update_dampening(attribute_t *a, xmlNode *xml, const char *attr)
{
const char *dvalue = crm_element_value(xml, PCMK__XA_ATTR_DAMPENING);
int dampen = 0;

if (dvalue == NULL) {
crm_warn("Could not update %s: peer did not specify value for delay",
attr);
return EINVAL;
}

dampen = crm_get_msec(dvalue);
if (dampen < 0) {
crm_warn("Could not update %s: invalid delay value %dms (%s)",
attr, dampen, dvalue);
return EINVAL;
}

if (a->timeout_ms != dampen) {
mainloop_timer_del(a->timer);
a->timeout_ms = dampen;
if (dampen > 0) {
a->timer = attrd_add_timer(attr, a->timeout_ms, a);
crm_info("Update attribute %s delay to %dms (%s)",
attr, dampen, dvalue);
} else {
a->timer = NULL;
crm_info("Update attribute %s to remove delay", attr);
}


attrd_write_or_elect_attribute(a);
}

return pcmk_rc_ok;
}