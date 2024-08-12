int FUN1(struct VAR1 *VAR1, gfp_t VAR2)
{
if (FUN2(VAR1)) {
struct VAR3 *VAR3 = VAR1->VAR4->VAR5;
struct VAR6 *VAR7 = FUN3(VAR3);

FUN4(VAR8, "",
VAR9, VAR1, VAR7->VAR10);
if (!FUN5(VAR7->VAR10, VAR1, VAR2))
return 0;
}

return 1;
}