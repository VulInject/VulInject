static int FUN1(struct VAR1 *VAR2)
{
if (FUN2(VAR2))
return 0;

if (FUN3(1, VAR3, 0, VAR2) != 0)
return 0;

if (*(VAR4 *) (VAR2->VAR5) == *(VAR4 *) (&VAR6.VAR7))
VAR2->VAR5 += VAR8;

return 1;
}