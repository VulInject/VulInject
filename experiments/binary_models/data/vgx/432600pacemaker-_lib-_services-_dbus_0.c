bool
FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5,
const char *VAR6, int VAR7)
{
int VAR8 = 0;
DBusMessageIter VAR9;

if (VAR4 == NULL) {
if (FUN2(VAR2, &VAR9)) {
VAR4 = &VAR9;
}
}

if (VAR4 == NULL) {
FUN3(VAR10, VAR11, VAR6, VAR7,
"",
VAR5);
return VAR12;
}

VAR8 = FUN4(VAR4);

if (VAR8 != VAR5) {
DBusMessageIter VAR13;
char *VAR14;

FUN2(VAR2, &VAR13);
VAR14 = FUN5(&VAR13);
FUN3(VAR10, VAR11, VAR6, VAR7,
""
"",
VAR5, VAR8, VAR14);
FUN6(VAR14);
return VAR12;
}

return VAR15;
}