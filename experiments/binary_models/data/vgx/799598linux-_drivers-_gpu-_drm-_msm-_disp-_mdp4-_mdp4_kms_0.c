static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(FUN3(VAR2));
struct VAR4 *VAR5 = VAR3->VAR5->VAR5;
struct VAR6 *VAR7 = VAR2->VAR7;

if (VAR3->VAR8)
FUN4(VAR3->VAR9, VAR2->VAR7);
FUN5(VAR3->VAR9);

if (VAR7) {
VAR7->VAR10->VAR11->FUN6(VAR7->VAR10);
FUN7(VAR7);
}

if (VAR3->VAR12)
FUN8(VAR5);

FUN9(&VAR3->VAR13);

FUN10(VAR3);
}

static const struct mdp_kms_funcs VAR14 = {
.VAR13 = {
.VAR15         = VAR16,
.VAR17  = VAR18,
.VAR19 = VAR20,
.VAR21   = VAR22,
.VAR23             = VAR24,
.VAR25   = VAR26,
.VAR27  = VAR28,
.VAR29   = VAR30,
.VAR31  = VAR32,
.VAR33  = VAR34,
.VAR35    = VAR36,
.VAR37      = VAR38,
.VAR39 = VAR40,
.VAR41      = VAR42,
.VAR43    = VAR44,
.VAR45         = VAR46,
},
.VAR47         = VAR48,
};