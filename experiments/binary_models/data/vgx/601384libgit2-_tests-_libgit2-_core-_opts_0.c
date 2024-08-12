void FUN1(void)
{
const char *VAR1[] = { "" };
git_strarray VAR2 = { 0 };

FUN2(FUN3(VAR3, VAR1, FUN4(VAR1)));
FUN2(FUN3(VAR4, &VAR2));

FUN5(VAR2.VAR5, 3);
FUN6("", VAR2.VAR6[0]);
FUN6("", VAR2.VAR6[1]);
FUN6("", VAR2.VAR6[2]);

FUN7(&VAR2);
}