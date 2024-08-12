void FUN1(void)
{
const VAR1 *VAR2;
git_oid VAR3;

FUN2("", "");

FUN3(VAR4, "", "");
FUN4(VAR4, "", true);

FUN2("", VAR5);

FUN5(FUN6(VAR6, ""));
VAR2 = FUN7(VAR6, "", 0);
FUN8(VAR2);

FUN5(FUN9(&VAR3, VAR7, VAR8));
FUN10(&VAR3, &VAR2->VAR9);

FUN2("", VAR10);
FUN11(FUN6(VAR6, ""));
}