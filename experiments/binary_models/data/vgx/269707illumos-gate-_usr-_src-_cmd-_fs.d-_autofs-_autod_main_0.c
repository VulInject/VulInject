static void
FUN1(
VAR1 *VAR2,
VAR3 *VAR4)
{
struct VAR1 *VAR5;

if (VAR6 > 0) {
char VAR7[VAR8];
if (FUN2(&VAR9, VAR7, VAR8) == NULL)
VAR7[0] = '';

FUN3(1, "", VAR7);
for (VAR5 = VAR2; VAR5; VAR5 = VAR5->VAR10)
FUN3(1, ""
"",
VAR5->VAR11,
VAR5->VAR12,
VAR5->VAR13,
VAR5->VAR14,
VAR5->VAR15 ? "" : "");
}


VAR4->VAR16 = FUN4(VAR2);

if (VAR6 > 0)
FUN3(1, "", VAR4->VAR16);
}