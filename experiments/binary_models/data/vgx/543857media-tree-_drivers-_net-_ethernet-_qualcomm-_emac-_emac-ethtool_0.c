static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);


if (VAR4->VAR7 || VAR4->VAR8)
return -VAR9;

VAR6->VAR10 =
FUN3(VAR4->VAR11, VAR12, VAR13);

VAR6->VAR14 =
FUN3(VAR4->VAR15, VAR16, VAR17);

if (FUN4(VAR2))
return FUN5(VAR6);

return 0;
}