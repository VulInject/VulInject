static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

VAR4 = FUN2(&VAR2->VAR6, sizeof(*VAR4), VAR7);
if (!VAR4)
return -VAR8;

VAR4->VAR6 = &VAR2->VAR6;
FUN3(&VAR4->VAR9);
VAR4->VAR9.VAR10 = &VAR11;
FUN4(&VAR4->VAR12);

VAR4->VAR13 = FUN5(VAR2, 0);
if (FUN6(VAR4->VAR13))
return FUN7(VAR4->VAR13);

FUN8(VAR4);

VAR4->VAR14 = FUN9(&VAR2->VAR6, "");
if (FUN6(VAR4->VAR14))
return FUN7(VAR4->VAR14);

VAR4->VAR15 = FUN9(&VAR2->VAR6, "");
if (FUN6(VAR4->VAR15))
return FUN7(VAR4->VAR15);

VAR5 = FUN10(VAR4->VAR14);
if (VAR5)
return VAR5;

VAR5 = FUN10(VAR4->VAR15);
if (VAR5)
goto VAR16;

VAR5 = FUN11(&VAR2->VAR6, FUN12(64));
if (VAR5)
goto VAR17;

VAR5 = FUN13(VAR4);
if (VAR5)
goto VAR17;

VAR5 = FUN14(VAR4);
if (VAR5)
goto VAR17;

FUN15(VAR2, VAR4);

return 0;

VAR17:
FUN16(VAR4->VAR15);

VAR16:
FUN16(VAR4->VAR14);

return VAR5;
}