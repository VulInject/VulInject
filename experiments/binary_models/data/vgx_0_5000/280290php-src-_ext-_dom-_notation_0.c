int dom_notation_public_id_read(dom_object *obj, zval *retval)
{
xmlEntityPtr nodep = (xmlEntityPtr) dom_object_get_node(obj);

if (nodep == NULL) {
php_dom_throw_error(INVALID_STATE_ERR, 1);
return FAILURE;
}

if (nodep->ExternalID) {
ZVAL_STRING(retval, (char *) (nodep->ExternalID));
} else {
ZVAL_EMPTY_STRING(retval);
}

return SUCCESS;
}