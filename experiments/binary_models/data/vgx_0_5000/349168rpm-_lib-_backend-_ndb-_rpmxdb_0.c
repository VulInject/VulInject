static int moveblob(rpmxdb xdb, struct xdb_slot *oldslot, unsigned int newpagecnt)
{
struct xdb_slot *slot, *lastslot;
unsigned int nslots;
unsigned int freecnt;
int i;

nslots = xdb->nslots;
freecnt = 0;
lastslot = xdb->slots;
for (i = xdb->slots[0].next; ; lastslot = slot, i = slot->next) {
slot = xdb->slots + i;
freecnt = slot->startpage - (lastslot->startpage + lastslot->pagecnt);
if (freecnt >= newpagecnt)
break;
if (i == nslots)
break;
}
if (i == nslots && newpagecnt > freecnt) {

if (rpmxdbWriteEmptyPages(xdb, slot->startpage, newpagecnt - freecnt)) {
return RPMRC_FAIL;
}
slot->startpage += newpagecnt - freecnt;
}
return moveblobto(xdb, oldslot, lastslot, newpagecnt);
}