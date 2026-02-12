static int check_filter_block(char *filter, master_record_t *flow_record, int expect) {
uint64_t *block = (uint64_t *)flow_record;

Engine = CompileFilter(filter);
if (!Engine) {
exit(254);
}

Engine->ident = CurrentIdent;
Engine->nfrecord = (uint64_t *)flow_record;
int ret = (*Engine->FilterEngine)(Engine);
if (ret == expect) {
printf("Success: Startnode: %i Numblocks: %i Extended: %i Filter: '%s'\n", Engine->StartNode, nblocks(), Engine->Extended, filter);
} else {
printf("**** FAILED **** Startnode: %i Numblocks: %i Extended: %i Filter: '%s'\n", Engine->StartNode, nblocks(), Engine->Extended, filter);
DumpEngine(Engine);
printf("Expected: %i, Found: %i\n", expect, ret);
printf("Record:\n");
for (int i = 0; i <= Offset_MR_LAST; i++) {
printf("%3i %.16llx\n", i, (long long)block[i]);
}
if (Engine->IdentList) {
printf("Current Ident: %s, Ident 0 %s\n", Engine->ident ? Engine->ident : "NULL", Engine->IdentList[0]);
}
exit(255);
}
return (ret == expect);
}