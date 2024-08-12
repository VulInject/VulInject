static void FUN1(VAR1 *VAR2)
{
int VAR3;
const char *VAR4;
FUN2(VAR2, VAR5, "");
FUN2(VAR2, -1, "");  
FUN3(VAR2, -2);
FUN2(VAR2, -1, "");
FUN3(VAR2, -2);
VAR3 = FUN4(VAR2);
FUN5(VAR2, 0, VAR6);
fputs(FUN6(VAR2, VAR3) ? "" : "", VAR7);
for (VAR3++; (VAR4 = FUN7(VAR2, VAR3)); VAR3++) {
FUN8('', VAR7);
fputs(VAR4, VAR7);
}
FUN8('', VAR7);
}