static VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
VAR4 *VAR5;
VAR1 *VAR6;
char **VAR7;
int VAR8;

FUN2(VAR2 != NULL, NULL);
FUN2(VAR3 != NULL, NULL);

VAR5 = FUN3(VAR2);
if (VAR5 == NULL || VAR5->VAR9 == NULL) return NULL;

VAR6 = NULL;
VAR8 = strlen(VAR3);
for (VAR7 = VAR5->VAR9; *VAR7 != NULL; VAR7++) {
const char *VAR10 = *VAR7 + FUN4(**VAR7);

if (VAR8 == 0 || FUN5(VAR10, VAR3, VAR8) == 0)
VAR6 = FUN6(VAR6, FUN7("", VAR10, NULL));
}

return VAR6;
}