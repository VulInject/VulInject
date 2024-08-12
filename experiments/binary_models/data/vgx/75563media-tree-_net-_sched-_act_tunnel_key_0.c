static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR4);
struct VAR9 *VAR10;
int VAR11;

FUN3();

VAR10 = FUN4(VAR8->VAR10);

FUN5(&VAR8->VAR12);
FUN6(FUN7(VAR8->VAR13.VAR14), VAR2);
VAR11 = VAR10->VAR11;

switch (VAR10->VAR15) {
case VAR16:
FUN8(VAR2);
break;
case VAR17:
FUN8(VAR2);
FUN9(VAR2, FUN10(&VAR10->VAR18->VAR19));
break;
default:
FUN11(1, "",
VAR10->VAR15);
break;
}

FUN12();

return VAR11;
}

static const struct nla_policy VAR20[VAR21 + 1] = {
[VAR22]	    = { .VAR23 = sizeof(struct VAR24) },
[VAR25] = { .VAR26 = VAR27 },
[VAR28] = { .VAR26 = VAR27 },
[VAR29] = { .VAR23 = sizeof(struct VAR30) },
[VAR31] = { .VAR23 = sizeof(struct VAR30) },
[VAR32]   = { .VAR26 = VAR27 },
[VAR33] = {.VAR26 = VAR34},
};