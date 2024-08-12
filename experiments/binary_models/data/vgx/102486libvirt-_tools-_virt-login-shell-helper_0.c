static int FUN1(VAR1 *VAR2,
const char *VAR3,
VAR4 *VAR5,
size_t VAR6)
{
int VAR7 = -1;
size_t VAR8;
char *VAR9 = NULL;
FUN2(VAR10) VAR11 = NULL;
char **VAR12;

if (FUN3(VAR2, "", false, &VAR11) < 0)
goto VAR13;


for (VAR12 = VAR11; VAR12 && *VAR12; VAR12++) {
char *VAR14 = *VAR12;

if (VAR14[0] == '') {
VAR14++;
if (!*VAR14)
continue;
for (VAR8 = 0; VAR8 < VAR6; VAR8++) {
if (!(VAR9 = FUN4(VAR5[VAR8])))
continue;
if (FUN5(VAR14, VAR9)) {
VAR7 = 0;
goto VAR13;
}
FUN6(VAR9);
}
} else {
if (FUN5(VAR14, VAR3)) {
VAR7 = 0;
goto VAR13;
}
}
}
FUN7(VAR15,
FUN8(""),
VAR3, VAR16);
VAR13:
FUN6(VAR9);
return VAR7;
}