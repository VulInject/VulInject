static char *
FUN1(VAR1 *VAR2)
{
struct VAR3 *VAR4;
char *VAR5;
int VAR6, VAR7;

if ((VAR4 = FUN2()) == NULL)
FUN3("");
for (VAR6 = 0; VAR8[VAR6] != NULL; VAR6++) {
if (strcmp(VAR8[VAR6]->VAR9, "") == 0)
continue;
if (VAR8[VAR6]->VAR10 == NULL ||
*(VAR8[VAR6]->VAR10) == 0)
continue;
if (!FUN4(VAR2, VAR8[VAR6]->VAR9,
NULL))
continue;
if ((VAR7 = FUN5(VAR4, "", FUN6(VAR4) ? "" : "",
VAR8[VAR6]->VAR9)) != 0)
FUN7(VAR7, "");
}
if ((VAR5 = FUN8(VAR4)) == NULL)
FUN3("");
FUN9(VAR4);
return VAR5;
}