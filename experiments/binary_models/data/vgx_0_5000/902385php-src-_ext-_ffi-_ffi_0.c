static bool zend_ffi_func_ptr_are_compatible(zend_ffi_type *dst_type, zend_ffi_type *src_type) 
{
uint32_t dst_argc, src_argc, i;
zend_ffi_type *dst_arg, *src_arg;

ZEND_ASSERT(dst_type->kind == ZEND_FFI_TYPE_FUNC);
ZEND_ASSERT(src_type->kind == ZEND_FFI_TYPE_FUNC);


if (dst_type->func.abi != src_type->func.abi) {
return 0;
}


if ((dst_type->attr & ZEND_FFI_ATTR_VARIADIC) != (src_type->attr & ZEND_FFI_ATTR_VARIADIC)) {
return 0;
}


dst_argc = dst_type->func.args ? zend_hash_num_elements(dst_type->func.args) : 0;
src_argc = src_type->func.args ? zend_hash_num_elements(src_type->func.args) : 0;
if (dst_argc != src_argc) {
return 0;
}


if (!zend_ffi_is_compatible_type(dst_type->func.ret_type, src_type->func.ret_type)) {
return 0;
}


for (i = 0; i < dst_argc; i++) {
dst_arg = zend_hash_index_find_ptr(dst_type->func.args, i);
src_arg = zend_hash_index_find_ptr(src_type->func.args, i);
if (!zend_ffi_is_compatible_type(ZEND_FFI_TYPE(dst_arg), ZEND_FFI_TYPE(src_arg))) {
return 0;
}
}

return 1;
}