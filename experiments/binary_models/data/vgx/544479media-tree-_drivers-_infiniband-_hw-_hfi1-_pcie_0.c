int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
int VAR5;

VAR5 = FUN2(VAR2);
if (VAR5) {

FUN3(&VAR2->VAR6, "",
-VAR5);
goto VAR7;
}

VAR5 = FUN4(VAR2, VAR8);
if (VAR5) {
FUN3(&VAR2->VAR6,
"", -VAR5);
goto VAR9;
}

VAR5 = FUN5(VAR2, FUN6(64));
if (VAR5) {

VAR5 = FUN5(VAR2, FUN6(32));
if (VAR5) {
FUN3(&VAR2->VAR6,
"", VAR5);
goto VAR9;
}
VAR5 = FUN7(VAR2, FUN6(32));
} else {
VAR5 = FUN7(VAR2, FUN6(64));
}
if (VAR5) {
FUN3(&VAR2->VAR6,
"", VAR5);
goto VAR9;
}

FUN8(VAR2);
(void)FUN9(VAR2);
goto VAR7;

VAR9:
FUN10(VAR2);
VAR7:
return VAR5;
}