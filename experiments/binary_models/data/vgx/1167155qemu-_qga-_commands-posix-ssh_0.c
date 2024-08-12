void
FUN1(const char *VAR1, VAR2 *VAR3,
VAR4 **VAR5)
{
g_autofree struct VAR6 *VAR7 = NULL;
g_autofree char *VAR8 = NULL;
g_autofree GStrv VAR9 = NULL; 
FUN2(VAR10) VAR11 = NULL;
GStrv VAR12;
size_t VAR13 = 0;

if (!FUN3(VAR3, NULL, VAR5)) {
return;
}

VAR7 = FUN4(VAR1, VAR5);
if (VAR7 == NULL) {
return;
}

VAR8 = FUN5(VAR7->VAR14, "",
"", NULL);
if (!FUN6(VAR8, VAR15)) {
return;
}
VAR11 = FUN7(VAR8, VAR5);
if (VAR11 == NULL) {
return;
}

VAR9 = FUN8(char *, FUN9(VAR11) + 1);
for (VAR12 = VAR11; *VAR12 != NULL; VAR12++) {
VAR2 *VAR16;

for (VAR16 = VAR3; VAR16 != NULL; VAR16 = VAR16->VAR17) {
if (FUN10(VAR16->VAR18, *VAR12)) {
break;
}
}
if (VAR16 != NULL) {
continue;
}

VAR9[VAR13++] = *VAR12;
}

FUN11(VAR8, VAR9, VAR7, VAR5);
}