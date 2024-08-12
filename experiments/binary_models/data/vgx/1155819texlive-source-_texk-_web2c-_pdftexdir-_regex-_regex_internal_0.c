FUN1 (VAR1 *VAR2, const VAR1 *VAR3)
{
VAR2->VAR4 = VAR3->VAR4;
if (VAR3->VAR4 > 0)
{
VAR2->VAR5 = VAR2->VAR4;
VAR2->VAR6 = FUN2 (int, VAR2->VAR5);
if (FUN3 (VAR2->VAR6 == NULL, 0))
{
VAR2->VAR5 = VAR2->VAR4 = 0;
return VAR7;
}
memcpy (VAR2->VAR6, VAR3->VAR6, VAR3->VAR4 * sizeof (int));
}
else
FUN4 (VAR2);
return VAR8;
}