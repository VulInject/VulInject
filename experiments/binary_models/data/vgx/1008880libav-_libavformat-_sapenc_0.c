static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR1 *VAR5;
struct VAR6 *VAR7 = VAR2->VAR8;
int64_t VAR9 = FUN2();

if (!VAR7->VAR10 || VAR9 - VAR7->VAR10 > 5000000) {
int VAR11 = FUN3(VAR7->VAR12, VAR7->VAR13, VAR7->VAR14);

if (VAR11 < 0 && VAR11 != FUN4(VAR15))
return VAR11;
VAR7->VAR10 = VAR9;
}
VAR5 = VAR2->VAR16[VAR4->VAR17]->VAR8;
return FUN5(VAR5, 0, VAR4, VAR2);
}

AVOutputFormat VAR18 = {
.VAR19              = "",
.VAR20         = FUN6(""),
.VAR21    = sizeof(struct VAR6),
.VAR22       = VAR23,
.VAR24       = VAR25,
.VAR26      = VAR27,
.VAR28      = VAR29,
.VAR30     = VAR31,
.VAR32             = VAR33 | VAR34,
};