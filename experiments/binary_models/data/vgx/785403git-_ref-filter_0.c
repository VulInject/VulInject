static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const char *VAR5, struct VAR6 *VAR7)
{
struct VAR8 *VAR8 = &VAR4->VAR9.VAR8;
struct string_list VAR10 = VAR11;
int VAR12;
unsigned int VAR13 = ~0U;

if (!VAR5)
return FUN2(VAR7, -1, FUN3(""));

VAR8->VAR14 = VAR15;

FUN4(&VAR10, VAR5, '', -1);
for (VAR12 = 0; VAR12 < VAR10.VAR16; VAR12++) {
const char *VAR17 = VAR10.VAR18[VAR12].VAR19;
int VAR14;

if (FUN5(VAR17, "", &VAR17)) {
VAR14 = FUN6(VAR17);
if (VAR14 < 0) {
FUN7(VAR7, FUN3(""), VAR17);
FUN8(&VAR10, 0);
return -1;
}
VAR8->VAR14 = VAR14;
} else if (FUN5(VAR17, "", &VAR17)) {
if (FUN9(VAR17, 10, &VAR13)) {
FUN7(VAR7, FUN3(""), VAR17);
FUN8(&VAR10, 0);
return -1;
}
} else if (!FUN9(VAR17, 10, &VAR13))
;
else if ((VAR14 = FUN6(VAR17)) >= 0)
VAR8->VAR14 = VAR14;
else {
FUN7(VAR7, FUN3(""), "", VAR17);
FUN8(&VAR10, 0);
return -1;
}
}

if (VAR13 == ~0U) {
FUN8(&VAR10, 0);
return FUN2(VAR7, -1, FUN3(""));
}
VAR8->VAR13 = VAR13;
FUN8(&VAR10, 0);
return 0;
}