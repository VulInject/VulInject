static void check_conflict (LexState *ls, struct LHS_assign *lh, expdesc *v) {
FuncState *fs = ls->fs;
int extra = fs->freereg;  
int conflict = 0;
for (; lh; lh = lh->prev) {  
if (lh->v.k == VINDEXED) {  

if (lh->v.u.ind.vt == v->k && lh->v.u.ind.t == v->u.info) {
conflict = 1;
lh->v.u.ind.vt = VLOCAL;
lh->v.u.ind.t = extra;  
}

if (v->k == VLOCAL && lh->v.u.ind.idx == v->u.info) {
conflict = 1;
lh->v.u.ind.idx = extra;  
}
}
}
if (conflict) {

OpCode op = (v->k == VLOCAL) ? OP_MOVE : OP_GETUPVAL;
luaK_codeABC(fs, op, extra, v->u.info, 0);
luaK_reserveregs(fs, 1);
}
}