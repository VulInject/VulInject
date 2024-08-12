int FUN1(
const char *VAR1,
const char *VAR2,
unsigned VAR3,
const char *VAR4,
unsigned VAR5,
const char *VAR6,
int VAR7,
const char *VAR8,
void *VAR9,
void *VAR10) {

FUN2(VAR11) VAR12 *VAR13 = NULL;
VAR14 *VAR15 = FUN3(VAR9);
VAR16 *VAR17;
uint64_t VAR18;
int VAR19;

assert(VAR2);
assert(VAR6);
assert(VAR8);

VAR19 = FUN4(VAR20, VAR15, VAR2, VAR5, &VAR13);
if (VAR19 == -VAR21)
return FUN5();
if (VAR19 < 0) {
FUN6(VAR1, VAR22, VAR2, VAR3, VAR19,
"");
return 0;
}

VAR17 = FUN7(VAR13);

if (FUN8(VAR8)) {
if (FUN9(VAR6, "", ""))
VAR17->VAR23 = 0;
else if (FUN9(VAR6, "", ""))
VAR17->VAR24 = 0;
else if (FUN10(VAR6, ""))
VAR17->VAR25 = 0;
else if (FUN10(VAR6, ""))
VAR17->VAR26 = 0;
else
FUN11();

FUN12(VAR13);
return 0;
}

VAR19 = FUN13(VAR8, 1024, &VAR18);
if (VAR19 < 0) {
FUN6(VAR1, VAR22, VAR2, VAR3, VAR19,
"",
VAR6, VAR8);
return 0;
}

if (FUN9(VAR6, "", ""))
VAR17->VAR23 = VAR18;
else if (FUN9(VAR6, "", ""))
VAR17->VAR24 = VAR18;
else if (FUN10(VAR6, ""))
VAR17->VAR26 = VAR18;
else if (FUN10(VAR6, ""))
VAR17->VAR25 = VAR18;
else
FUN11();

FUN12(VAR13);

return 0;
}