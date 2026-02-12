static void dumpFunction(DumpState *D, const Proto *f, TString *psource);

static void dumpConstants (DumpState *D, const Proto *f) {
int i;
int n = f->sizek;
dumpInt(D, n);
for (i = 0; i < n; i++) {
const TValue *o = &f->k[i];
int tt = ttypetag(o);
dumpByte(D, tt);
switch (tt) {
case LUA_VNUMFLT:
dumpNumber(D, fltvalue(o));
break;
case LUA_VNUMINT:
dumpInteger(D, ivalue(o));
break;
case LUA_VSHRSTR:
case LUA_VLNGSTR:
dumpString(D, tsvalue(o));
break;
default:
lua_assert(tt == LUA_VNIL || tt == LUA_VFALSE || tt == LUA_VTRUE);
}
}
}