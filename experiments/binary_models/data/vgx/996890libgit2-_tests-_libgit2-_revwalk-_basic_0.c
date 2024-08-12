void FUN1(void)
{
int VAR1 = 0;
git_oid VAR2;

FUN2(NULL);

FUN3(FUN4(VAR3));
FUN3(FUN5(VAR3, ""));

while (FUN6(&VAR2, VAR3) == 0) {
VAR1++;
}


FUN7(VAR1, 7);
}