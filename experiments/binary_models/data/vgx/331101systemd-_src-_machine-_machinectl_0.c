static int FUN1(
VAR1 *VAR2,
const char *VAR3,
int VAR4,
const char *VAR5,
const char *VAR6,
char **VAR7) {

FUN2(VAR8) sd_bus_error VAR9 = VAR10;
FUN2(VAR11) VAR12 *VAR13 = NULL;
_cleanup_free_ char *VAR14 = NULL;
unsigned VAR15 = 0;
int VAR16;

assert(VAR2);
assert(VAR3);
assert(VAR5);
assert(VAR6);

VAR16 = FUN3(VAR2, VAR17, "", NULL, &VAR13, "", VAR3);
if (VAR16 < 0)
return FUN4(VAR16, "", FUN5(&VAR9, VAR16));

VAR14 = strdup(VAR5);
if (!VAR14)
return FUN6();
VAR5 = "";

VAR16 = FUN7(VAR13, '', "");
if (VAR16 < 0)
return FUN8(VAR16);

while ((VAR16 = FUN7(VAR13, '', "")) > 0) {
int VAR18;
const void *VAR19;
size_t VAR20;
char VAR21[1 + FUN9(int)] = "";

VAR16 = FUN10(VAR13, "", &VAR18);
if (VAR16 < 0)
return FUN8(VAR16);

VAR16 = FUN11(VAR13, '', &VAR19, &VAR20);
if (VAR16 < 0)
return FUN8(VAR16);

if (VAR18 == VAR22 && VAR4 > 0)
FUN12(VAR21, "", VAR4);

if (!FUN13(&VAR14, VAR5, FUN14(VAR18, VAR19), VAR21))
return FUN6();

VAR16 = FUN15(VAR13);
if (VAR16 < 0)
return FUN8(VAR16);

VAR5 = VAR6;

VAR15++;
}
if (VAR16 < 0)
return FUN8(VAR16);

VAR16 = FUN15(VAR13);
if (VAR16 < 0)
return FUN8(VAR16);

*VAR7 = FUN16(VAR14);
return (int) VAR15;
}