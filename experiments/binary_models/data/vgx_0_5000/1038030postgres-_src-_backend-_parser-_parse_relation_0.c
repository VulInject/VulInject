void
markNullableIfNeeded(ParseState *pstate, Var *var)
{
int			rtindex = var->varno;
Bitmapset  *relids;


for (int lv = 0; lv < var->varlevelsup; lv++)
pstate = pstate->parentParseState;


if (rtindex > 0 && rtindex <= list_length(pstate->p_nullingrels))
relids = (Bitmapset *) list_nth(pstate->p_nullingrels, rtindex - 1);
else
relids = NULL;


if (relids != NULL)
var->varnullingrels = bms_union(var->varnullingrels, relids);
}