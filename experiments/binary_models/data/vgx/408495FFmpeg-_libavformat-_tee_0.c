static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;
unsigned VAR6 = 0, VAR7;
const char *VAR8 = VAR2->VAR9;
char **VAR10 = NULL;
int VAR11;

while (*VAR8) {
char *VAR12 = FUN2(&VAR8, VAR13);
if (!VAR12) {
VAR11 = FUN3(VAR14);
goto VAR15;
}
VAR11 = FUN4(&VAR10, &VAR6, VAR12);
if (VAR11 < 0) {
FUN5(VAR12);
goto VAR15;
}
if (strspn(VAR8, VAR13))
VAR8++;
}

if (!FUN6(VAR4->VAR10, VAR6)) {
VAR11 = FUN3(VAR14);
goto VAR15;
}
VAR4->VAR6 = VAR4->VAR16 = VAR6;

for (VAR7 = 0; VAR7 < VAR6; VAR7++) {

VAR4->VAR10[VAR7].VAR17 = VAR4->VAR17;
VAR11 = FUN7(&VAR4->VAR10[VAR7].VAR18, VAR4->VAR18, 0);
if (VAR11 < 0)
goto VAR15;

if ((VAR11 = FUN8(VAR2, VAR10[VAR7], &VAR4->VAR10[VAR7])) < 0) {
VAR11 = FUN9(VAR2, VAR7, VAR11);
if (VAR11 < 0)
goto VAR15;
} else {
FUN10(&VAR4->VAR10[VAR7], VAR2, VAR19);
}
FUN11(&VAR10[VAR7]);
}

for (VAR7 = 0; VAR7 < VAR2->VAR20; VAR7++) {
int VAR21, VAR22 = 0;
for (VAR21 = 0; VAR21 < VAR4->VAR6; VAR21++)
if (VAR4->VAR10[VAR21].VAR2)
VAR22 += VAR4->VAR10[VAR21].VAR23[VAR7] >= 0;
if (!VAR22)
FUN12(VAR2, VAR24, ""
"", VAR7);
}
FUN5(VAR10);
return 0;

VAR15:
for (VAR7 = 0; VAR7 < VAR6; VAR7++)
FUN11(&VAR10[VAR7]);
FUN13(VAR2);
FUN5(VAR10);
return VAR11;
}