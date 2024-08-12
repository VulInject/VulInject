static int FUN1(dbiIndex VAR1, rpmTagVal VAR2)
{
int VAR3 = 0;


if (FUN2(VAR1->VAR4, NULL) == 1)
return 0;

if (VAR1->VAR5 == VAR6) {
int VAR7 = (FUN3(VAR2) == VAR8);
int VAR9 = (FUN4(VAR2) == VAR10);
if (!VAR3 && VAR7)
VAR3 = FUN5(VAR1->VAR4, VAR1->VAR11, "");
if (!VAR3 && VAR9)
VAR3 = FUN5(VAR1->VAR4, VAR1->VAR11, "");
}
return VAR3;
}