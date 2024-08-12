FUN1 (struct VAR1 *VAR1)
{
tree VAR2;
basic_block VAR3;
edge VAR4;

if (!FUN2 (VAR1->VAR5))
return NULL;

VAR3 = FUN3 (VAR1->VAR5);
VAR2 = FUN4 (VAR3);
if (FUN5 (VAR2) != VAR6)
return NULL;

VAR4 = FUN6 (VAR3, 0);
if (VAR4->VAR7 == VAR1->VAR5)
VAR4 = FUN6 (VAR3, 1);

if (FUN7 (VAR1, VAR4->VAR7))
return NULL;

return VAR3;
}