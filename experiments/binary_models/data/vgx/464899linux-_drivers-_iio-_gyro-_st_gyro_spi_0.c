static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8;
int VAR9;

FUN2(&VAR2->VAR10, VAR2->VAR11, sizeof(VAR2->VAR11));

VAR4 = FUN3(VAR2->VAR11);
if (!VAR4) {
FUN4(&VAR2->VAR10, "",
VAR2->VAR11);
return -VAR12;
}

VAR8 = FUN5(&VAR2->VAR10, sizeof(*VAR6));
if (!VAR8)
return -VAR13;

VAR6 = FUN6(VAR8);
VAR6->VAR14 = (struct VAR3 *)VAR4;

VAR9 = FUN7(VAR8, VAR2);
if (VAR9 < 0)
return VAR9;

VAR9 = FUN8(VAR8);
if (VAR9)
return VAR9;

return FUN9(VAR8);
}