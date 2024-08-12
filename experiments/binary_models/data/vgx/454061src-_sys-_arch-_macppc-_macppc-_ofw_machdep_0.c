void
FUN1(void)
{
int VAR1;
char VAR2[32];
int VAR3, VAR4 = 0;

VAR1 = FUN2(VAR5);
VAR3 = FUN3(VAR1, "", VAR2, 20);
VAR2[VAR3] = 0;
FUN4("", VAR2);



FUN5(FUN6(0));

VAR3 = FUN3(FUN6(0), "", VAR2, sizeof(VAR2));
VAR2[VAR3] = 0;

if (VAR6 == (VAR7 | VAR8)) {

if (FUN7(VAR2, "", 9) == 0)
VAR6 = VAR8;
else
VAR6 = VAR7;
FUN4("");
}
if (VAR6 == VAR7) {
FUN4("");
FUN8();
VAR4 = 1;
} else if (VAR6 == VAR8) {
FUN4("");
FUN9();
VAR4 = 1;
} 
if (VAR4 == 0) {
FUN4("");
FUN8();
FUN4("");
}
}