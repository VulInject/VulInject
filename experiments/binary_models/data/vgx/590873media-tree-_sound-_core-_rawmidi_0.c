int FUN1(struct VAR1 *VAR2, char *VAR3, int VAR4,
int VAR5, int VAR6,
struct VAR7 ** VAR8)
{
struct VAR7 *VAR9;
int VAR10;
static struct snd_device_ops VAR11 = {
.VAR12 = VAR13,
.VAR14 = VAR15,
.VAR16 = VAR17,
};

if (FUN2(!VAR2))
return -VAR18;
if (VAR8)
*VAR8 = NULL;
VAR9 = FUN3(sizeof(*VAR9), VAR19);
if (!VAR9)
return -VAR20;
VAR9->VAR2 = VAR2;
VAR9->VAR4 = VAR4;
FUN4(&VAR9->VAR21);
FUN5(&VAR9->VAR22);
FUN6(&VAR9->VAR23[VAR24].VAR25);
FUN6(&VAR9->VAR23[VAR26].VAR25);

if (VAR3 != NULL)
FUN7(VAR9->VAR3, VAR3, sizeof(VAR9->VAR3));

FUN8(&VAR9->VAR27, VAR2);
VAR9->VAR27.VAR28 = VAR29;
FUN9(&VAR9->VAR27, "", VAR2->VAR30, VAR4);

if ((VAR10 = FUN10(VAR9,
&VAR9->VAR23[VAR24],
VAR24,
VAR6)) < 0) {
FUN11(VAR9);
return VAR10;
}
if ((VAR10 = FUN10(VAR9,
&VAR9->VAR23[VAR26],
VAR26,
VAR5)) < 0) {
FUN11(VAR9);
return VAR10;
}
if ((VAR10 = FUN12(VAR2, VAR31, VAR9, &VAR11)) < 0) {
FUN11(VAR9);
return VAR10;
}
if (VAR8)
*VAR8 = VAR9;
return 0;
}