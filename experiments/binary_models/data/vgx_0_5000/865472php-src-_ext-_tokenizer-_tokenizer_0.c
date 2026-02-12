static zend_string *make_str(unsigned char *text, size_t leng, HashTable *interned_strings) {
if (leng == 1) {
return ZSTR_CHAR(text[0]);
} else if (interned_strings) {
zend_string *interned_str = zend_hash_str_find_ptr(interned_strings, (char *) text, leng);
if (interned_str) {
return zend_string_copy(interned_str);
}
interned_str = zend_string_init((char *) text, leng, 0);
zend_hash_add_new_ptr(interned_strings, interned_str, interned_str);
return interned_str;
} else {
return zend_string_init((char *) text, leng, 0);
}
}