static bool esil_neg(REsil *esil) {
bool ret = false;
char *src = r_esil_pop (esil);
if (src) {
ut64 num;
if (r_esil_get_parm (esil, src, &num)) {
r_esil_pushnum (esil, !num);
ret = true;
} else {
if (isregornum (esil, src, &num)) {
ret = true;
r_esil_pushnum (esil, !num);
} else {
R_LOG_WARN ("0x%08"PFMT64x" esil_neg: unknown reg %s", esil->address, src);
}
}
} else {
R_LOG_DEBUG ("esil_neg: empty stack");
}
free (src);
return ret;
}