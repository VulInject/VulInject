static void
efollow(re_re *r, Positionset *fpos, Expr *e)
{
ID i, *p;

CLEAR(r, fpos);
follow(fpos, e);
e->flen = fpos->count;
e->follow = (ID *)egmalloc(e->flen * sizeof (ID));
p = e->follow;
printf("ID = %d LIT %c FLEN = %d\n", e->id, e->lit, e->flen);
for (i = fpos->last; i > 0; i = fpos->base[i].id) {
*p++ = i;
printf("FOLLOW ID = %d LIT %c\n", r->ptr[i]->id, r->ptr[i]->lit);
}
if (p != e->follow + e->flen) {
err("internal error");
}
}