static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->private;
struct VAR5 *VAR6 = VAR4->VAR6;
u32 VAR7, VAR8, VAR9;

VAR9 = FUN2(VAR6, VAR10);
VAR8 = FUN3(VAR6, VAR11);
VAR7 = FUN3(VAR6, VAR12);

FUN4(VAR2, "",
FUN5(VAR7 & (VAR13 |
FUN6(1))));
FUN4(VAR2, "", VAR9);
FUN4(VAR2, "",
(VAR8 & VAR14) ? "" : "");
FUN4(VAR2, "",
(VAR8 & VAR15) ? "" : "");

FUN7(VAR2, "", VAR16);
FUN7(VAR2, "", VAR17);

return FUN8(VAR2, NULL);
}