spc_handler_tpic_ar (struct spc_env *spe,
struct spc_arg *ap ) 
{
struct  spc_tpic_ *tp = &_tpic_state;
double     v[6];
pdf_coord  cp;
int        pg;
char      *q;
int        i;

ASSERT(spe && ap && tp);

skip_blank(&ap->curptr, ap->endptr);
for (i = 0;
i < 6 && ap->curptr < ap->endptr; i++) {
q = parse_float_decimal(&ap->curptr, ap->endptr);
if (!q) {
spc_warn(spe, "Invalid args. in TPIC \"ar\" command.");
return  -1;
}
v[i] = atof(q);
RELEASE(q);
skip_blank(&ap->curptr, ap->endptr);
}
if (i != 6) {
spc_warn(spe, "Invalid arg for TPIC \"ar\" command.");
return  -1;
}

v[0] *= MI2DEV; v[1] *= MI2DEV;
v[2] *= MI2DEV; v[3] *= MI2DEV;
v[4] *= 180.0 / M_PI;
v[5] *= 180.0 / M_PI;

spc_currentpoint(spe, &pg, &cp);

return  tpic__arc(tp, &cp, 1, 0.0, v);
}