int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8 = FUN2(VAR2);

VAR6 = &VAR8->VAR6;
if ((VAR8->VAR9 & VAR10) == 0)
return -VAR11;

if (FUN3(VAR4->VAR12, VAR6, sizeof(*VAR6)))
return -VAR13;
else
return 0;
}