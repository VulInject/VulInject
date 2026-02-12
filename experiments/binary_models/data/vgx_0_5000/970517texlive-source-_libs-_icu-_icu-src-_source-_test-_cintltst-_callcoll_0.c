void genericRulesStarterWithOptionsAndResult(const char *rules, const char * const s[], uint32_t size, const UColAttribute *attrs, const UColAttributeValue *values, uint32_t attsize, UCollationResult result) {
UErrorCode status = U_ZERO_ERROR;
UChar rlz[RULE_BUFFER_LEN] = { 0 };
uint32_t rlen = u_unescape(rules, rlz, RULE_BUFFER_LEN);
uint32_t i;

UCollator *coll = ucol_openRules(rlz, rlen, UCOL_DEFAULT, UCOL_DEFAULT,NULL, &status);

log_verbose("Rules starter for %s\n", rules);

if(U_SUCCESS(status)) {
log_verbose("Setting attributes\n");
for(i = 0; i < attsize; i++) {
ucol_setAttribute(coll, attrs[i], values[i], &status);
}

genericOrderingTestWithResult(coll, s, size, result);
} else {
log_err_status(status, "Unable to open collator with rules %s\n", rules);
}
ucol_close(coll);
}