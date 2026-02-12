static inline int handle_opstring(RAnalOp *op, const ut8 *buf, int buflen) {
if (buf[0] != '\'') {
op->type = R_ANAL_OP_TYPE_ILL;
return -1;
}
buf++;
buflen --; 
char *str = get_line (buf, buflen);
if (str) {
size_t len = strlen (str);
if (len > 0 && str[len - 1] == '\'') {
str[len - 1] = '\0';
op->mnemonic = r_str_newf ("string \"%s\"", str);
op->ptr = op->addr + 2; 
op->ptrsize = len - 1; 
op->size = 2 + op->ptrsize + 2; 
free (str);
return op->size;
}
free (str);
}
return -1;
}