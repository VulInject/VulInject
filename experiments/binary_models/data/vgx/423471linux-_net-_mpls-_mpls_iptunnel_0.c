static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;

VAR6 = FUN2(VAR4);

if (FUN3(VAR2, VAR7, VAR6->VAR8,
VAR6->VAR9))
goto VAR10;

if (VAR6->VAR11 != VAR12 &&
FUN4(VAR2, VAR13, VAR6->VAR14))
goto VAR10;

return 0;

VAR10:
return -VAR15;
}