int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2, struct VAR5);

if (FUN3(VAR2->VAR7 & VAR8))
return -VAR9;
if (VAR4->VAR10 || VAR4->VAR11 || VAR4->VAR12)
return -VAR9;

VAR6->VAR13 = FUN4(VAR4->VAR13);
VAR6->VAR7 = FUN4(VAR4->VAR14);
if (VAR6->VAR7 & ~VAR15)
return -VAR9;
if (VAR6->VAR7 & VAR16) {
if (VAR6->VAR7 & VAR17)
return -VAR9;
VAR6->VAR18 = FUN4(VAR4->VAR18);
}

return 0;
}