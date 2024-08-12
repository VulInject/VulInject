int FUN1(struct VAR1 *VAR2)
{
static const struct snd_pcm_ops VAR3 = {
.open      = VAR4,
.close     = VAR5,
.VAR6     = VAR7,
.VAR8 = VAR9,
.VAR10   = VAR11,
.VAR12   = VAR13,
.VAR14   = VAR15,
.VAR16   = VAR17,
.VAR18      = VAR19,
.VAR20      = VAR21,
};
static const struct snd_pcm_ops VAR22 = {
.open      = VAR4,
.close     = VAR5,
.VAR6     = VAR7,
.VAR8 = VAR23,
.VAR10   = VAR24,
.VAR12   = VAR25,
.VAR14   = VAR26,
.VAR16   = VAR27,
.VAR18      = VAR19,
.VAR20      = VAR21,
};
__be32 VAR28;
struct VAR29 *VAR30;
unsigned int VAR31, VAR32, VAR33, VAR34, VAR35;
int VAR36;


if (VAR2->VAR37) {
VAR32 = VAR33 = 2;
} else {
VAR32 = VAR33 = 0;
VAR36 = FUN2(VAR2, VAR38, &VAR28,
sizeof(VAR28));
if (VAR36 < 0)
return VAR36;
VAR32 = FUN3(unsigned int, FUN4(VAR28), VAR39);

VAR36 = FUN5(VAR2, VAR40, &VAR28,
sizeof(VAR28));
if (VAR36 < 0)
return VAR36;
VAR33 = FUN3(unsigned int, FUN4(VAR28), VAR39);
}

for (VAR31 = 0; VAR31 < VAR39; VAR31++) {
VAR34 = VAR35 = 0;
if (VAR31 < VAR32)
VAR34 = 1;
if (VAR31 < VAR33)
VAR35 = 1;
if (VAR34 == 0 && VAR35 == 0)
break;

VAR36 = FUN6(VAR2->VAR41, "", VAR31, VAR35, VAR34,
&VAR30);
if (VAR36 < 0)
return VAR36;
VAR30->VAR42 = VAR2;
strcpy(VAR30->VAR43, VAR2->VAR41->VAR44);

if (VAR34 > 0)
FUN7(VAR30, VAR45,
&VAR3);

if (VAR35 > 0)
FUN7(VAR30, VAR46,
&VAR22);
}

return 0;
}