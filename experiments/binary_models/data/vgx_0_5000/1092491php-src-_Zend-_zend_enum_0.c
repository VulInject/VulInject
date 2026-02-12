void zend_enum_add_interfaces(zend_class_entry *ce)
{
uint32_t num_interfaces_before = ce->num_interfaces;

ce->num_interfaces++;
if (ce->enum_backing_type != IS_UNDEF) {
ce->num_interfaces++;
}

ZEND_ASSERT(!(ce->ce_flags & ZEND_ACC_RESOLVED_INTERFACES));

ce->interface_names = erealloc(ce->interface_names, sizeof(zend_class_name) * ce->num_interfaces);

ce->interface_names[num_interfaces_before].name = zend_string_copy(zend_ce_unit_enum->name);
ce->interface_names[num_interfaces_before].lc_name = zend_string_init("unitenum", sizeof("unitenum") - 1, 0);

if (ce->enum_backing_type != IS_UNDEF) {
ce->interface_names[num_interfaces_before + 1].name = zend_string_copy(zend_ce_backed_enum->name);
ce->interface_names[num_interfaces_before + 1].lc_name = zend_string_init("backedenum", sizeof("backedenum") - 1, 0);	
}

ce->default_object_handlers = &zend_enum_object_handlers;
}