static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4,
char *VAR5, int VAR6, int VAR7)
{
VAR8 *VAR9 = VAR2->VAR10;
int VAR11 = FUN2(VAR12);

if (!strcmp(VAR3, "")) {
int VAR13, VAR7, VAR14;
int64_t VAR15;
char VAR16[2];

if (sscanf(VAR4, ""VAR17"", &VAR13, &VAR15, &VAR7, VAR16) != 3)
return FUN2(VAR18);

VAR11 = FUN3(VAR9->VAR19, VAR13, VAR15, VAR7);
if (VAR11 < 0)
return VAR11;

for (VAR14 = 0; VAR14 < VAR2->VAR20; VAR14++) {
FUN4(VAR9->VAR21[VAR14].VAR22);
}
return VAR11;
} else if (!strcmp(VAR3, "")) {
int VAR23;
char VAR16[2];

if (!VAR5 || VAR6 <= 0)
return FUN2(VAR18);

if (VAR4 && sscanf(VAR4, "", VAR16) == 1)
return FUN2(VAR18);

VAR23 = snprintf(VAR5, VAR6, ""VAR24, VAR9->VAR19->VAR25);
if (VAR23 < 0 || VAR23 >= VAR6)
return FUN2(VAR18);

return 0;
}

return VAR11;
}