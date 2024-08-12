static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4->VAR7);

if (VAR2->VAR8 != FUN4(VAR9))
goto VAR10;

if (!VAR6->VAR11)
FUN5(VAR2,
FUN6(VAR4->VAR7),
false);

return VAR4->VAR7->FUN7(VAR2);

VAR10:
FUN8(VAR2);
return -VAR12;
}

static const struct nla_policy VAR13[VAR14 + 1] = {
[VAR15] = { .VAR16 = VAR17, },
[VAR18] = { .VAR16 = VAR19, },
[VAR20] = { .VAR16 = VAR19, },
[VAR21] = { .VAR16 = VAR19, },
};