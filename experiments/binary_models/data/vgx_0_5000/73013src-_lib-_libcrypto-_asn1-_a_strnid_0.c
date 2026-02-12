ASN1_STRING_TABLE *
ASN1_STRING_TABLE_get(int nid)
{
int idx;
ASN1_STRING_TABLE fnd;

fnd.nid = nid;
if (stable != NULL) {
idx = sk_ASN1_STRING_TABLE_find(stable, &fnd);
if (idx >= 0)
return sk_ASN1_STRING_TABLE_value(stable, idx);
}
return OBJ_bsearch_table(&fnd, tbl_standard,
sizeof(tbl_standard)/sizeof(ASN1_STRING_TABLE));
}