void FUN1(const char *VAR1)
{
const char *VAR2;
char *VAR3;

if (!FUN2(&VAR4))
return;

VAR3 = FUN3();

if (!(VAR2 = FUN4()))
VAR2 = "";

if (!VAR1)
VAR1 = "";

FUN5(&VAR4, "", FUN6(FUN7()));
FUN5(&VAR4, "", FUN6(FUN8()));
FUN5(&VAR4, "", FUN6(VAR2));
FUN5(&VAR4, "", FUN6(VAR3));
FUN5(&VAR4, "", FUN6(VAR1));

free(VAR3);
}