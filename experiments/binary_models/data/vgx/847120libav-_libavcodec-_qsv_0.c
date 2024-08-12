static int FUN1(mfxSession VAR1, const char *VAR2,
void *VAR3)
{
if (!VAR2 || !*VAR2)
return 0;

while (*VAR2) {
mfxPluginUID VAR4;
mfxStatus VAR5;
int VAR6, VAR7 = 0;

char *VAR8 = FUN2(&VAR2, "");
if (!VAR8)
return FUN3(VAR9);
if (strlen(VAR8) != 2 * sizeof(VAR4.VAR10)) {
FUN4(VAR3, VAR11, "");
VAR7 = FUN3(VAR12);
goto VAR13;
}

for (VAR6 = 0; VAR6 < sizeof(VAR4.VAR10); VAR6++) {
VAR7 = sscanf(VAR8 + 2 * VAR6, "", VAR4.VAR10 + VAR6);
if (VAR7 != 1) {
FUN4(VAR3, VAR11, "");
VAR7 = FUN3(VAR12);
goto VAR13;
}

}

VAR5 = FUN5(VAR1, &VAR4, 1);
if (VAR5 < 0) {
char VAR14[128];
snprintf(VAR14, sizeof(VAR14),
"", VAR8);
VAR7 = FUN6(VAR3, VAR5, VAR14);
goto VAR13;
}

if (*VAR2)
VAR2++;
VAR13:
FUN7(&VAR8);
if (VAR7 < 0)
return VAR7;
}

return 0;

}