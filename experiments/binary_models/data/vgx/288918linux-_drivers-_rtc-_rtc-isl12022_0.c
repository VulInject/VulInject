static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3;
struct VAR1 *VAR4;
int VAR5;

if (!FUN2(VAR6))
return;

VAR3 = FUN3(VAR2);

VAR5 = FUN4(VAR3->VAR7, VAR8,
VAR9, VAR9);
if (VAR5) {
FUN5(VAR2, "");
return;
}

VAR4 = FUN6(VAR2, "", VAR3,
&VAR10,
NULL);
if (FUN7(VAR4))
FUN5(VAR2, "", VAR4);
}