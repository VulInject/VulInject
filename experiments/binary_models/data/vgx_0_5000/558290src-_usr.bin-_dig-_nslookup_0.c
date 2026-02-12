static void
printrdata(dns_rdata_t *rdata) {
isc_result_t result;
isc_buffer_t *b = NULL;
unsigned int size = 1024;
int done = 0;

if (rdata->type < N_KNOWN_RRTYPES)
printf("%s", rtypetext[rdata->type]);
else
printf("rdata_%d = ", rdata->type);

while (!done) {
result = isc_buffer_allocate(&b, size);
if (result != ISC_R_SUCCESS)
check_result(result, "isc_buffer_allocate");
result = dns_rdata_totext(rdata, NULL, b);
if (result == ISC_R_SUCCESS) {
printf("%.*s\n", (int)isc_buffer_usedlength(b),
(char *)isc_buffer_base(b));
done = 1;
} else if (result != ISC_R_NOSPACE)
check_result(result, "dns_rdata_totext");
isc_buffer_free(&b);
size *= 2;
}
}