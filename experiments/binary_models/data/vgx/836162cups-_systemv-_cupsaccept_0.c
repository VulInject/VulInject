static void
FUN1(const char *VAR1)		
{
FUN2(VAR2, FUN3(""), VAR1);
FUN4(VAR2, FUN3(""));
FUN4(VAR2, FUN3(""));
FUN4(VAR2, FUN3(""));
FUN4(VAR2, FUN3(""));
FUN4(VAR2, FUN3(""));
if (!strcmp(VAR1, ""))
FUN4(VAR2, FUN3(""));
if (!strcmp(VAR1, ""))
FUN4(VAR2, FUN3(""));

FUN5(1);
}