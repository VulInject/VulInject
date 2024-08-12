static char *FUN1(const char *VAR1, size_t VAR2, VAR3 *VAR4)
{
size_t   VAR5;
size_t   VAR6;
char    *VAR7  = NULL;
size_t   VAR8;
M_bool   VAR9;
size_t   VAR10 = 0;
VAR11 *VAR12;

VAR12 = FUN2();

VAR9 = VAR13;
for (VAR5=0; VAR5<VAR2; VAR5++) {
for (VAR6=0; VAR4[VAR6].VAR14 != 0; VAR6++) {
if (VAR1[VAR5] == VAR4[VAR6].VAR14) {
break;
}
}
if (VAR4[VAR6].VAR14 != 0) {

if (!VAR9) {
FUN3(VAR12, VAR1+VAR10, VAR5-VAR10);
VAR9 = VAR13;
}
FUN3(VAR12, VAR4[VAR6].VAR15, VAR4[VAR6].VAR16);
} else {

if (VAR9) {
VAR10 = VAR5;
VAR9 = VAR17;
}
}
}


if (!VAR9) {
FUN3(VAR12, VAR1+VAR10, VAR5-VAR10);
}

VAR7 = FUN4(VAR12, &VAR8);
if (VAR8 == 0)
VAR7 = FUN5("");

return VAR7;
}