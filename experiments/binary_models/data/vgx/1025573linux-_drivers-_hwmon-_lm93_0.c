static FUN1(VAR1, VAR2, 14);
static FUN1(VAR3, VAR2, 15);

static VAR4 FUN2(struct VAR5 *VAR6, struct VAR7 *VAR8,
char *VAR9)
{
int VAR10 = (FUN3(VAR8))->VAR11;
struct VAR12 *VAR13 = FUN4(VAR6);
int VAR14 = VAR10 - 6;
long VAR15, VAR16;

if ((VAR10 == 6 || VAR10 == 7) && VAR17[VAR14]) {
VAR16 = FUN5(VAR13->VAR16[VAR14]);
VAR15 = FUN6(VAR13->VAR18[VAR14], VAR16);
} else {
VAR15 = FUN7(VAR10, VAR13->VAR19[VAR10].VAR20);
}
return sprintf(VAR9, "", VAR15);
}