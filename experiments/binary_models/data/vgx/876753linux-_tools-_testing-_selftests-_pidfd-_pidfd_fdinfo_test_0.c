static void FUN1(void)
{
struct child VAR1;
struct error VAR2 = {0, };
const char *VAR3 = "";


VAR1 = FUN2(VAR4, NULL, &VAR2);
FUN3(&VAR2, VAR3);
FUN4(&VAR1, &VAR2);

FUN5(VAR1.VAR5, &VAR2, "", 4, "");
FUN5(VAR1.VAR5, &VAR2, "", 6, "");
FUN6(&VAR1);
FUN7(&VAR2, VAR3);
}