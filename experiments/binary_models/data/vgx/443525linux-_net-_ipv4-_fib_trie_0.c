static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
const struct VAR4 *VAR5 = VAR2->private;
struct VAR6 *VAR7 = VAR3;

if (FUN2(FUN3(VAR7)))
FUN4(VAR2, VAR5->VAR8);

if (FUN5(VAR7)) {
__be32 VAR9 = FUN6(VAR7->VAR10);

FUN7(VAR2, VAR5->VAR11-1);
FUN8(VAR2, "",
&VAR9, VAR12 - VAR7->VAR13 - VAR7->VAR14, VAR7->VAR14,
FUN9(VAR7)->VAR15,
FUN9(VAR7)->VAR16);
} else {
__be32 VAR17 = FUN6(VAR7->VAR10);
struct VAR18 *VAR19;

FUN7(VAR2, VAR5->VAR11);
FUN8(VAR2, "", &VAR17);

FUN10(VAR19, &VAR7->VAR20, VAR21) {
char VAR22[32], VAR23[32];

FUN7(VAR2, VAR5->VAR11 + 1);
FUN8(VAR2, "",
VAR12 - VAR19->VAR24,
FUN11(VAR22, sizeof(VAR22),
VAR19->VAR25->VAR26),
FUN12(VAR23, sizeof(VAR23),
VAR19->VAR27));
if (VAR19->VAR28)
FUN8(VAR2, "",
FUN13(VAR19->VAR28));
FUN14(VAR2, '');
}
}

return 0;
}

static const struct seq_operations VAR29 = {
.VAR30  = VAR31,
.VAR32   = VAR33,
.VAR34   = VAR35,
.VAR36   = VAR37,
};

struct VAR38 {
struct seq_net_private VAR39;
struct VAR40 *VAR41;
struct VAR6 *VAR42;
loff_t	VAR13;
t_key	VAR10;
};