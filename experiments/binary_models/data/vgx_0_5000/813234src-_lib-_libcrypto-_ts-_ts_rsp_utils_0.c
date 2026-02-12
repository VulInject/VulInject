int
TS_ACCURACY_set_micros(TS_ACCURACY *a, const ASN1_INTEGER *micros)
{
ASN1_INTEGER *new_micros = NULL;

if (a->micros == micros)
return 1;
if (micros != NULL) {
new_micros = ASN1_INTEGER_dup(micros);
if (new_micros == NULL) {
TSerror(ERR_R_MALLOC_FAILURE);
return 0;
}
}
ASN1_INTEGER_free(a->micros);
a->micros = new_micros;
return 1;
}