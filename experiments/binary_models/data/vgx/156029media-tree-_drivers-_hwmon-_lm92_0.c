static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR5);
struct VAR10 *VAR11 = FUN3(VAR3);
struct VAR12 *VAR13 = VAR11->VAR13;
int VAR14 = VAR9->VAR15;
long VAR16;
int VAR17;

VAR17 = FUN4(VAR6, 10, &VAR16);
if (VAR17)
return VAR17;

FUN5(&VAR11->VAR18);
VAR11->VAR19[VAR14] = FUN6(VAR16);
FUN7(VAR13, VAR20[VAR14], VAR11->VAR19[VAR14]);
FUN8(&VAR11->VAR18);
return VAR7;
}