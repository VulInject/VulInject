static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6);
struct VAR9 *VAR10;

VAR10 = FUN4(VAR8, VAR2->VAR11.VAR12);

if (!VAR10) {
FUN5(VAR8->VAR13, "", VAR14);
return -VAR15;
}

VAR4->VAR16.VAR17.VAR16[0] = VAR10->VAR18;

return 0;
}