static int
FUN1(VAR1 **VAR2, VAR3 **VAR4, VAR3 *VAR5, char *VAR6)
{
int VAR7 = 0, VAR8;
VAR1 *VAR9 = NULL;
char VAR10[1024];
VAR3 *VAR11 = NULL;

if (FUN2(VAR5) <= 0) {
FUN3(VAR12, "");
FUN4(VAR12);
return 0;
}
VAR11 = FUN5(VAR5);
*VAR4 = VAR11;

for (;;) {
VAR8 = FUN6(VAR11, VAR10, sizeof VAR10);
if (VAR8 <= 0)
return 1;

if (!VAR7) {
if (FUN7(VAR10, "", 4)) {
FUN3(VAR12, "");
return 1;
}
VAR7 = 1;
}

if ((VAR10[0] == '') || (VAR10[0] == ''))
break;
}



VAR9 = FUN8(VAR11, NULL);

if (!VAR9) {
FUN3(VAR12, "");
FUN4(VAR12);
}
*VAR2 = VAR9;

return 1;
}