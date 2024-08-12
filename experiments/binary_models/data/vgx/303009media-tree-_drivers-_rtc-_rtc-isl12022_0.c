static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR5;

if (!FUN2(VAR2->VAR6, VAR7))
return -VAR8;

VAR5 = FUN3(&VAR2->VAR9, sizeof(struct VAR5),
VAR10);
if (!VAR5)
return -VAR11;

FUN4(VAR2, VAR5);

VAR5->VAR12 = FUN5(&VAR2->VAR9,
VAR13.VAR14.VAR15,
&VAR16, VAR17);
return FUN6(VAR5->VAR12);
}