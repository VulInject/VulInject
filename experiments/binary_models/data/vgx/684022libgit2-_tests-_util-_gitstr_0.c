void FUN1(void)
{
git_str VAR1 = VAR2;

FUN2(&VAR1);
FUN3(FUN4(&VAR1, "", "", ""));
FUN5("", VAR1.VAR3);

FUN2(&VAR1);
FUN3(FUN4(&VAR1, "", "", ""));
FUN5("", VAR1.VAR3);

FUN2(&VAR1);
FUN3(FUN4(&VAR1, "", "", ""));
FUN5("", VAR1.VAR3);

FUN2(&VAR1);
FUN3(FUN6(&VAR1, ""));
FUN5("", VAR1.VAR3);

FUN7(&VAR1);
}