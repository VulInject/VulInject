static void
FUN1(VAR1 *VAR2, unsigned char *VAR3)
{
VAR4 *VAR5;
int VAR6;

for (VAR6 = 0; VAR6 < VAR7; VAR6++) {
for (VAR5 = VAR2->VAR8.VAR9; VAR5->VAR10; VAR5++)
if (VAR5->VAR11 == VAR12 && FUN2(VAR6) == VAR5->VAR13)
break;
if (VAR5->VAR10)
(void) fprintf(VAR2->VAR14, "",
VAR5->VAR10, VAR3[VAR6] + '' - 1);
if (VAR6 % 5 == 0)
(void) fprintf(VAR2->VAR14, "");
}
(void) fprintf(VAR2->VAR14, "");
}