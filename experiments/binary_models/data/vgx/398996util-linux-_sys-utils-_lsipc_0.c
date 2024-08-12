static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const char *VAR5, const char *VAR6, uintmax_t VAR7,
uintmax_t VAR8, int VAR9, int VAR10)
{
struct VAR11 *VAR12;
size_t VAR13;

VAR12 = FUN2(VAR4, NULL);
if (!VAR12)
FUN3(VAR14, FUN4(""));

for (VAR13 = 0; VAR13 < VAR15; VAR13++) {
int VAR16 = 0;
char *VAR17 = NULL;

switch (FUN5(VAR13)) {
case VAR18:
VAR16 = FUN6(VAR12, VAR13, VAR5);
break;
case VAR19:
VAR16 = FUN6(VAR12, VAR13, VAR6);
break;
case VAR20:
if (VAR9) {
if (!VAR10 || VAR2->VAR21)
FUN7(&VAR17, "", VAR7);
else
VAR17 = FUN8(VAR22, VAR7);
VAR16 = FUN9(VAR12, VAR13, VAR17);
} else
VAR16 = FUN6(VAR12, VAR13, "");
break;
case VAR23:
if (VAR9) {
FUN7(&VAR17, "", (double) VAR7 / VAR8 * 100);
VAR16 = FUN9(VAR12, VAR13, VAR17);
} else
VAR16 = FUN6(VAR12, VAR13, "");
break;
case VAR24:
if (!VAR10 || VAR2->VAR21)
FUN7(&VAR17, "", VAR8);
else
VAR17 = FUN8(VAR22, VAR8);
VAR16 = FUN9(VAR12, VAR13, VAR17);
break;
}

if (VAR16 != 0)
FUN3(VAR14, FUN4(""));
}
}