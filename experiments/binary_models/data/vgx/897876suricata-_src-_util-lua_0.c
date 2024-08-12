void FUN1(VAR1 *VAR2) {
int VAR3 = FUN2(VAR2);
int VAR4;

for (VAR4 = 1; VAR4 <= VAR3; VAR4++) {
int VAR5 = FUN3(VAR2, VAR4);
FUN4("", VAR3, VAR4, VAR5);

switch (VAR5) {
case VAR6:
FUN4("", FUN5(VAR2, VAR4) ? "" : "");
break;
case VAR7:
FUN4("", FUN6(VAR2, VAR4) ? "" : "");
break;
case VAR8:
FUN4("", FUN7(VAR2, VAR4));
break;
case VAR9:
FUN4("", FUN5(VAR2, VAR4));
break;
case VAR10:
FUN4("", FUN5(VAR2, VAR4));
break;
default:
FUN4("", FUN8(VAR2, VAR5));
break;

}
FUN4("");
}
}