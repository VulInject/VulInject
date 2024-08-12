static int
FUN1(VAR1 *VAR2, VAR3 **VAR4,
int VAR5)
{
VAR3 *VAR6;
VAR3 *VAR7;
VAR8 *VAR9;
int VAR10;
int VAR11 = 0;

if (!VAR2)
return 0;

VAR6 = FUN2();
VAR7 = FUN2();
for (; VAR2; VAR2 = VAR2->VAR12) {
FUN3(VAR7, VAR2->VAR13, "",
VAR14|VAR15, 0);
FUN4(VAR7, const char *, VAR16) {
FUN5(VAR17,"",VAR16);
VAR10 = 0;
VAR9 = FUN6(VAR16, VAR5,
&VAR10);
if (VAR9) {
FUN7(VAR6, VAR9);
} else if (VAR10) {

FUN8(VAR17, ""
"", VAR16);
VAR11 = -1;
} else {

FUN5(VAR17, ""
"",
VAR16);
}
} FUN9(VAR16);
FUN10(VAR7, char *, VAR16, FUN11(VAR16));
FUN12(VAR7);
}
FUN13(VAR7);
if (VAR11 == -1) {
FUN14(VAR6);
} else {
FUN15(&VAR6);
FUN16(&VAR6);

if (*VAR4) {
FUN17(*VAR4, VAR6);
FUN13(VAR6);
} else {
*VAR4 = VAR6;
}
}

return VAR11;
}