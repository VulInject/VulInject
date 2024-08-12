static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6 = VAR2->VAR6;

if (!VAR6)
return 0;

FUN2(VAR4, VAR6) {
const char *VAR7 = VAR4->VAR8;
struct VAR9 *VAR10 = VAR4->VAR11;
int VAR12;

if (!VAR10)
continue;
for (VAR12 = 0; VAR12 < 3; VAR12++) {
struct VAR13 *VAR14;

if (!VAR10->VAR15[VAR12] || !FUN3(VAR10->VAR15[VAR12]))
continue;

VAR14 = FUN4(VAR16, &VAR10->VAR17[VAR12]);
if (!VAR14) {
FUN5(FUN6(""),
FUN7(&VAR10->VAR17[VAR12]));
VAR18 |= VAR19;
continue;
}
VAR14->VAR20 |= VAR21;
FUN8(&VAR22, &VAR10->VAR17[VAR12],
"", VAR12, VAR7);
FUN9(VAR14);
}
}
return 0;
}