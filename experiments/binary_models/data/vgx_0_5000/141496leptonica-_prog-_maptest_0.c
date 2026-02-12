static void
TestMapIterator1(L_AMAP  *m,
l_int32  print)  
{
l_int32       count, npix, ival;
l_uint32      ukey;
L_AMAP_NODE  *n;

n = l_amapGetFirst(m);
count = 0;
npix = 0;
lept_stderr("\n ---------- Begin forward iter listing -----------\n");
while (n) {
count++;
ukey = n->key.utype;
ival = n->value.itype;
npix += ival;
if (print)
lept_stderr("key = %x, val = %d\n", ukey, ival);
n = l_amapGetNext(n);
}
lept_stderr("Count from iterator: %d\n", count);
lept_stderr("Number of pixels: %d\n", npix);
lept_stderr(" ------------ End forward iter listing -----------\n");
return;
}