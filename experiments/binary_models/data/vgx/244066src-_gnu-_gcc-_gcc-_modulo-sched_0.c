FUN1 (partial_schedule_ptr VAR1, ps_insn_ptr VAR2)
{
int VAR3;

if (!VAR1 || !VAR2)
return false;

VAR3 = FUN2 (VAR2->VAR4, VAR1->VAR5);
if (! VAR2->VAR6)
{
if (VAR2 != VAR1->VAR7[VAR3])
return false;

VAR1->VAR7[VAR3] = VAR2->VAR8;
if (VAR1->VAR7[VAR3])
VAR1->VAR7[VAR3]->VAR6 = NULL;
}
else
{
VAR2->VAR6->VAR8 = VAR2->VAR8;
if (VAR2->VAR8)
VAR2->VAR8->VAR6 = VAR2->VAR6;
}
free (VAR2);
return true;
}