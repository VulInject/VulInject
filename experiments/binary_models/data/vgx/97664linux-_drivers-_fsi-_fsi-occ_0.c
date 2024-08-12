static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
struct VAR3 *VAR4 = FUN2(sizeof(*VAR4), VAR5);
struct VAR6 *VAR7 = VAR2->VAR8;
struct VAR9 *VAR9 = FUN3(VAR7);

if (!VAR4)
return -VAR10;

VAR4->VAR11 = (VAR12 *)FUN4(VAR5);
if (!VAR4->VAR11) {
FUN5(VAR4);
return -VAR10;
}

VAR4->VAR9 = VAR9;
FUN6(&VAR4->VAR13);
VAR2->VAR8 = VAR4;
FUN7(VAR9->VAR14);


FUN8((VAR15 + 3) > VAR16);
FUN8((VAR17 + 7) > VAR16);

return 0;
}