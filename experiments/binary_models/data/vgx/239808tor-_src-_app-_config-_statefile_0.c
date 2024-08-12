static int
FUN1(VAR1 *VAR2)
{
int VAR3 = 0;
VAR4 *VAR5;

for (VAR5 = VAR2->VAR6 ; VAR5 ; VAR5 = VAR5->VAR7) {
FUN2(!strcmp(VAR5->VAR8, ""));
if (!FUN3(VAR5->VAR9))
VAR3 = 1;
}

if (VAR3)
FUN4(VAR10, "");

return 0;
}