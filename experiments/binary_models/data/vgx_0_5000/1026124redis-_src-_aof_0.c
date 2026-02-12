static int rioWriteHashIteratorCursor(rio *r, hashTypeIterator *hi, int what) {
if (hi->encoding == OBJ_ENCODING_LISTPACK) {
unsigned char *vstr = NULL;
unsigned int vlen = UINT_MAX;
long long vll = LLONG_MAX;

hashTypeCurrentFromListpack(hi, what, &vstr, &vlen, &vll);
if (vstr)
return rioWriteBulkString(r, (char*)vstr, vlen);
else
return rioWriteBulkLongLong(r, vll);
} else if (hi->encoding == OBJ_ENCODING_HT) {
sds value = hashTypeCurrentFromHashTable(hi, what);
return rioWriteBulkString(r, value, sdslen(value));
}

serverPanic("Unknown hash encoding");
return 0;
}