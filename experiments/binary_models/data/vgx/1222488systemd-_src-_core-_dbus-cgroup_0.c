static int FUN1(
VAR1 *VAR2,
const char *VAR3,
const char *VAR4,
const char *VAR5,
VAR6 *VAR7,
void *VAR8,
VAR9 *VAR10) {

VAR11 *VAR12 = FUN2(VAR8);
int VAR13;

assert(VAR2);
assert(VAR7);

VAR13 = FUN3(VAR7, '', "");
if (VAR13 < 0)
return VAR13;

FUN4(VAR14, VAR15, VAR12->VAR14) {
unsigned VAR16 = 0;
char VAR17[4];

if (VAR15->VAR13)
VAR17[VAR16++] = '';
if (VAR15->VAR18)
VAR17[VAR16++] = '';
if (VAR15->VAR19)
VAR17[VAR16++] = '';

VAR17[VAR16] = 0;

VAR13 = FUN5(VAR7, "", VAR15->VAR3, VAR17);
if (VAR13 < 0)
return VAR13;
}

return FUN6(VAR7);
}