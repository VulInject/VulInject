add_subweb (web, reg)
struct web *web;
rtx reg;
{
struct web *w;
if (GET_CODE (reg) != SUBREG)
abort ();
w = (struct web *) xmalloc (sizeof (struct web));

*w = *web;

w->orig_x = reg;
w->add_hardregs = CLASS_MAX_NREGS (web->regclass, GET_MODE (reg)) - 1;
w->num_conflicts = 0 * w->add_hardregs;
w->num_defs = 0;
w->num_uses = 0;
w->dlink = NULL;
w->parent_web = web;
w->subreg_next = web->subreg_next;
web->subreg_next = w;
return w;
}