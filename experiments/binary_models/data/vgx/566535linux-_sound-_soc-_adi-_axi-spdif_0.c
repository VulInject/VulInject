static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR4);

FUN3(VAR6->VAR7, VAR8,
VAR9, 0);

FUN4(VAR6->VAR10);
}

static const struct snd_soc_dai_ops VAR11 = {
.VAR12 = VAR13,
.VAR14 = VAR15,
.VAR16 = VAR17,
.VAR18 = VAR19,
};