void
FUN1(VAR1 *VAR2)
{
VAR3 *VAR4;
int VAR5;
char *VAR6;

if (FUN2(VAR2, VAR7, &VAR8) != 0)
return;

VAR4 = FUN3(VAR2, sizeof (VAR3), VAR9);
FUN4(VAR2, VAR4);

if ((VAR4->VAR10 = FUN5(&VAR5, &VAR6, VAR11, NULL))
== NULL) {

if (VAR5 != VAR12)
FUN6(VAR2, ""
"", VAR6);
FUN7(VAR2, ""
"");
FUN8(VAR2, VAR4, sizeof (VAR3));
FUN9(VAR2);
return;
}


if ((VAR5 = FUN10(VAR4->VAR10, &VAR4->VAR13,
&VAR4->VAR14)) != 0 &&
FUN11(VAR4->VAR10) == VAR15) {
FUN7(VAR2, ""
"");
FUN12(VAR4->VAR10);
FUN8(VAR2, VAR4, sizeof (VAR3));
FUN9(VAR2);
return;
}

VAR4->VAR16 = FUN13(VAR2, "");

if (VAR5 == 0)
FUN7(VAR2, ""
"", VAR4->VAR13, VAR4->VAR14);
else
FUN7(VAR2, ""
"", FUN14(VAR4->VAR10));


(void) FUN15(VAR2, NULL, NULL, 0);
}