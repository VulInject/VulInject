static LDAPControl** _php_ldap_controls_from_array(LDAP *ld, zval* array, uint32_t arg_num)
{
int ncontrols;
LDAPControl** ctrlp, **ctrls = NULL;
zval* ctrlarray;
int error = 0;

ncontrols = zend_hash_num_elements(Z_ARRVAL_P(array));
ctrls = safe_emalloc((1 + ncontrols), sizeof(*ctrls), 0);
*ctrls = NULL;
ctrlp = ctrls;
ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(array), ctrlarray) {
if (Z_TYPE_P(ctrlarray) != IS_ARRAY) {
zend_argument_type_error(arg_num, "must contain only arrays, where each array is a control");
error = 1;
break;
}

if (_php_ldap_control_from_array(ld, ctrlp, ctrlarray) == LDAP_SUCCESS) {
++ctrlp;
} else {
error = 1;
break;
}

*ctrlp = NULL;
} ZEND_HASH_FOREACH_END();

if (error) {
ctrlp = ctrls;
while (*ctrlp) {
ldap_control_free(*ctrlp);
ctrlp++;
}
efree(ctrls);
ctrls = NULL;
}

return ctrls;
}