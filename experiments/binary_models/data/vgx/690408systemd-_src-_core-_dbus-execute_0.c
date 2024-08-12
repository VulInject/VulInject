static int FUN1(
VAR1 *VAR2,
const char *VAR3,
const char *VAR4,
const char *VAR5,
VAR6 *VAR7,
void *VAR8,
VAR9 *VAR10) {

VAR11 *VAR12 = FUN2(VAR8);
bool VAR13;
int VAR14;

assert(VAR2);
assert(VAR5);
assert(VAR7);

VAR13 = strstr(VAR5, "");

VAR14 = FUN3(VAR7, '', "");
if (VAR14 < 0)
return VAR14;

for (size_t VAR15 = 0; VAR15 < VAR12->VAR16; VAR15++) {

if (VAR13 != VAR12->VAR17[VAR15].VAR18)
continue;

VAR14 = FUN4(
VAR7, "",
VAR12->VAR17[VAR15].VAR19,
VAR12->VAR17[VAR15].VAR20,
VAR12->VAR17[VAR15].VAR21,
VAR12->VAR17[VAR15].VAR22 ? (VAR23) VAR24 : (VAR23) 0);
if (VAR14 < 0)
return VAR14;
}

return FUN5(VAR7);
}