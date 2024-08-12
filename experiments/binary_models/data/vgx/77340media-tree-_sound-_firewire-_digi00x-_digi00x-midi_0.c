static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4, bool VAR5)
{
static const struct snd_rawmidi_ops VAR6 = {
.open = VAR7,
.close = VAR8,
.VAR9 = VAR10,
};
static const struct snd_rawmidi_ops VAR11 = {
.open = VAR7,
.close = VAR8,
.VAR9 = VAR12,
};
const char *VAR13;
struct VAR14 *VAR15;
int VAR16;


VAR16 = FUN2(VAR2->VAR17, VAR2->VAR17->VAR18, VAR5,
VAR3, VAR4, &VAR15);
if (VAR16 < 0)
return VAR16;
VAR15->VAR19 = VAR2;

if (!VAR5)
VAR13 = "";
else
VAR13 = "";
snprintf(VAR15->VAR20, sizeof(VAR15->VAR20), VAR13,
VAR2->VAR17->VAR21);

FUN3(VAR15, VAR22, &VAR11);
FUN3(VAR15, VAR23, &VAR6);

VAR15->VAR24 |= VAR25 |
VAR26 |
VAR27;

FUN4(VAR2, VAR15, VAR5);

return 0;
}