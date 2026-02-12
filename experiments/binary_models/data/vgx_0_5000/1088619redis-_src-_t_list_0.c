robj *listTypePop(robj *subject, int where) {
robj *value = NULL;

if (subject->encoding == OBJ_ENCODING_QUICKLIST) {
long long vlong;
int ql_where = where == LIST_HEAD ? QUICKLIST_HEAD : QUICKLIST_TAIL;
if (quicklistPopCustom(subject->ptr, ql_where, (unsigned char **)&value,
NULL, &vlong, listPopSaver)) {
if (!value)
value = createStringObjectFromLongLong(vlong);
}
} else if (subject->encoding == OBJ_ENCODING_LISTPACK) {
unsigned char *p;
unsigned char *vstr;
int64_t vlen;
unsigned char intbuf[LP_INTBUF_SIZE];

p = (where == LIST_HEAD) ? lpFirst(subject->ptr) : lpLast(subject->ptr);
if (p) {
vstr = lpGet(p, &vlen, intbuf);
value = createStringObject((char*)vstr, vlen);
subject->ptr = lpDelete(subject->ptr, p, NULL);
}
} else {
serverPanic("Unknown list encoding");
}
return value;
}