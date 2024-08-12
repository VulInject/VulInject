static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR6;
struct VAR7 *VAR8;

VAR8 = FUN2(VAR2->VAR5, sizeof(*VAR8), VAR9);
if (!VAR8)
return -VAR10;

if (FUN3(VAR4, "",
&VAR8->VAR11))
VAR8->VAR11 = 360;

if (FUN3(VAR4, "",
&VAR8->VAR12))
VAR8->VAR12 = 0;

VAR8->VAR13 = FUN4(VAR2->VAR5, "");
if (FUN5(VAR8->VAR13))
FUN6(VAR2->VAR5, "");

VAR8->VAR14 = FUN4(VAR2->VAR5, "");
if (FUN5(VAR8->VAR14))
FUN6(VAR2->VAR5, "");

VAR2->VAR8 = VAR8;

return 0;
}