static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR3 *VAR5 = VAR4->VAR6;
struct VAR7 *VAR8;
int VAR9 = -VAR10, VAR11;


if (FUN2(VAR4->VAR12.VAR13))
return 0;

VAR8 = FUN3(VAR2->VAR14, VAR15);
if (!VAR8)
return -VAR16;

VAR8->VAR2 = VAR2;

VAR11 = FUN4(VAR8, VAR5, true);
if (VAR11 < 0)
goto VAR17;

VAR8->VAR18 = VAR11;
VAR11 = FUN4(VAR8, VAR4, false);
if (VAR11 < 0)
goto VAR17;

VAR8->VAR18 = VAR11;

VAR9 = FUN5(VAR8, NULL, VAR11);
VAR17:
FUN6(VAR8);
return VAR9;
}