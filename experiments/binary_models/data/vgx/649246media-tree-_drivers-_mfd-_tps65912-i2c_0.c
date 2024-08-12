};
FUN1(VAR1, VAR2);

static int FUN2(struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
struct VAR7 *VAR8;

VAR8 = FUN3(&VAR4->VAR9, sizeof(*VAR8), VAR10);
if (!VAR8)
return -VAR11;

FUN4(VAR4, VAR8);
VAR8->VAR9 = &VAR4->VAR9;
VAR8->VAR12 = VAR4->VAR12;

VAR8->VAR13 = FUN5(VAR4, &VAR14);
if (FUN6(VAR8->VAR13)) {
FUN7(VAR8->VAR9, "");
return FUN8(VAR8->VAR13);
}

return FUN9(VAR8);
}