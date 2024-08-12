static int FUN1(
const char *VAR1,
VAR2 **VAR3) {

FUN2(VAR4) VAR2 *VAR5 = NULL;
bool VAR6 = false, VAR7 = true;
VAR2 *VAR8 = NULL;
uint64_t VAR9 = 0;
size_t VAR10, VAR11 = 0;

assert(VAR1);

VAR10 = strlen(VAR1);

for (const char *VAR12 = VAR1; *VAR12 != 0; VAR12++) {
if (*VAR12 == '') {
if (!VAR6) {
VAR6 = true;
continue;
}


VAR6 = false;

} else if (VAR6) {
PatternElementType VAR13;
uint64_t VAR14;

VAR13 = FUN3(*VAR12);
if (VAR13 < 0)
return FUN4(VAR13, "", *VAR12);

VAR14 = FUN5(1) << VAR13;
if (VAR9 & VAR14)
return FUN4(FUN6(VAR15), "", *VAR12);


if (!VAR7)
return FUN4(FUN6(VAR15), "");

if (VAR3) {
VAR2 *VAR16;

VAR16 = malloc(FUN7(VAR2, VAR17));
if (!VAR16)
return -VAR18;

VAR16->VAR19 = VAR13;
FUN8(VAR20, VAR5, VAR8, VAR16);
VAR8 = VAR16;
}

VAR9 |= VAR14;
VAR7 = VAR6 = false;
continue;
}

if (!FUN9(*VAR12))
return FUN4(
FUN6(VAR21),
"",
(unsigned) *VAR12);

VAR7 = true;

if (!VAR3)
continue;

if (!VAR8 || VAR8->VAR19 != VAR22) {
VAR2 *VAR16;

VAR16 = FUN10(FUN7(VAR2, VAR17) + VAR10 + 1); 
if (!VAR16)
return -VAR18;

VAR16->VAR19 = VAR22;
VAR11 = 0;

FUN8(VAR20, VAR5, VAR8, VAR16);
VAR8 = VAR16;
}

assert(VAR8);
assert(VAR8->VAR19 == VAR22);

VAR8->VAR17[VAR11++] = *VAR12;
}

if (VAR6)
return FUN4(FUN6(VAR15), "");
if (!(VAR9 & (FUN5(1) << VAR23)))
return FUN4(FUN6(VAR15), "");

if (VAR3)
*VAR3 = FUN11(VAR5);

return 0;
}