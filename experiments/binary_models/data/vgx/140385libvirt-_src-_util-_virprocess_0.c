static int
FUN1(pid_t VAR1,
int VAR2,
struct VAR3 *VAR4)
{
g_autofree char *VAR5 = NULL;
g_autofree char *VAR6 = NULL;
FUN2(VAR7) VAR8 = NULL;
const char *VAR9;
size_t VAR10;

if (!(VAR9 = FUN3(VAR2))) {
VAR11 = VAR12;
return -1;
}

VAR5 = FUN4("", (long long)VAR1);

if (FUN5(VAR5, 2048, &VAR6) < 0) {

return -1;
}

VAR8 = FUN6(VAR6, "", 0);

for (VAR10 = 0; VAR8[VAR10]; VAR10++) {
g_autofree char *VAR13 = NULL;
g_autofree char *VAR14 = NULL;
char *VAR15 = VAR8[VAR10];
unsigned long long VAR16;

if (!(VAR15 = FUN7(VAR15, VAR9)))
continue;

if (sscanf(VAR15, "", &VAR13, &VAR14) < 2)
goto VAR17;

if (FUN8(VAR13, "")) {
VAR4->VAR18 = VAR19;
} else {
if (FUN9(VAR13, NULL, 10, &VAR16) < 0)
goto VAR17;
VAR4->VAR18 = VAR16;
}
if (FUN8(VAR14, "")) {
VAR4->VAR20 = VAR19;
} else {
if (FUN9(VAR14, NULL, 10, &VAR16) < 0)
goto VAR17;
VAR4->VAR20 = VAR16;
}
}

return 0;

VAR17:
VAR11 = VAR21;
return -1;
}